function [circleAvailable, confirmedTriangle, confirmedSquare, confirmedOctagon, triangleDownAvailable,triangleUpAvailable] = parallelDetection(detectedRegion, grayDetectedRegion,type, circleMethod, useCriticalAreaAnalyser);

%{
    %nonParallelDetection: Function used to test ROI furher in order to validate
    %the existense of a traffic sign. This shape analysis is done in parallel, by
    taking advantage of the parallel computing functionalities,and also making
    %use of OpenCL for circle detection if specified using the
    %circleMethod variable
        
         Created on: 22nd August, 2017
         Author: Oluwole Oyetoke Jnr
         Using MATLAB 2016

        %}


%Edge Detection
%-----------------------------
if type==0
edgedRegion = detectEdge(grayDetectedRegion);       %MY MATLAB CODE
else
edgedRegion = detectEdge_mex(grayDetectedRegion);  %CODE GEN C++
end
%-----------------------------

p = gcp(); % get the current parallel pool


%Circle Detection
%------------------------------------
if circleMethod==0
 if type==0 
        circleFunction = parfeval(p,@detectCircle,2,grayDetectedRegion);         %MY MATLAB CODE
 else
        circleFunction = parfeval(p,@detectCircle_mex,2,grayDetectedRegion);     %CODE GEN C++
 end
elseif circleMethod==1
    if type==0 
         circleFunction = parfeval(p,@myDetectCircle,2,edgedRegion);             %MY MATLAB CODE
     elseif type==1
         circleFunction = parfeval(p,@myDetectCircle_mex,2,edgedRegion);
    else
        circleFunction = parfeval(p,@myDetectCircle_OpenCL,2,edgedRegion);       %OpenCL  
     end    
end

%Analyse/search for the presence of shapes (triangle, square, octagon)
%---------------------------
if type==0
[availableShapes, ~] = shapeAnalyser(edgedRegion);  %MY MATLAB CODE
else
[availableShapes, ~] = shapeAnalyser_mex(edgedRegion);  %CODE GEN C++
end
confirmedTriangle = availableShapes(1);
confirmedSquare = availableShapes(2);
confirmedOctagon =availableShapes(3);
%--------------------------

%{
%Analyse/search for the presence of shapes (triangle, square, octagon)
%-----------------------------------
 if type==0 
        shapeAnalyserFunction = parfeval(p,@shapeAnalyser,2,edgedRegion);         %MY MATLAB CODE
 else
        shapeAnalyserFunction = parfeval(p,@shapeAnalyser_mex,2,edgedRegion);     %CODE GEN C++
 end
%Get shape analyser output
[availableShapes, edgedRegion]= fetchOutputs(shapeAnalyserFunction); % Blocks until complete
confirmedTriangle = availableShapes(1);
confirmedSquare = availableShapes(2);
confirmedOctagon =availableShapes(3);
%-----------------------------------
%}


%Detect corners
%---------------------------
if type==0 && useCriticalAreaAnalyser==1
[x, y] = detectCorner(grayDetectedRegion);  %MY MATLAB CODE
elseif type~=0 && useCriticalAreaAnalyser==1
[x, y] = detectCorner_mex(grayDetectedRegion);  %CODE GEN C++
end
%--------------------------


%Analyse critical areas again, for the presence of triangles and rectangles
%----------------------------
if type==0 && useCriticalAreaAnalyser==1
[chances, shrinks] = analyseCriticalAreas(edgedRegion, x, y); %MY MATLAB CODE
squareAvailable = chances(1); triangleUpAvailable = chances(2); triangleDownAvailable = chances(3);
elseif type~=0 && useCriticalAreaAnalyser==1
[chances, shrinks] = analyseCriticalAreas_mex(edgedRegion, x, y);  %CODE GEN C++
squareAvailable = chances(1); triangleUpAvailable = chances(2); triangleDownAvailable = chances(3);
else
squareAvailable = 0; triangleUpAvailable = 0; triangleDownAvailable = 0;   
end
%------------------------------

[circleAvailable circleStrength] = fetchOutputs(circleFunction); % Blocks until complete
end %end of function


