function [circleAvailable, confirmedTriangle, confirmedSquare, confirmedOctagon, triangleDownAvailable,...
        triangleUpAvailable] = nonParallelDetection(detectedRegion, grayDetectedRegion,type, circleMethod, useCriticalAreaAnalyser);
%{
    %nonParallelDetection: Function used to test ROI furher in order to validate
    %the existense of a traffic sign. This shape analysis is done sequentially and
    %does not take advantage of MATLAB paralele computing functionalities,
    %but may make use of OpenCL for circle detection if specified using the
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

%Circle Detection
%----------------------------
if circleMethod==0
    if type==0 
        [circleAvailable circleStrength] = detectCircle(grayDetectedRegion);          %MY MATLAB CODE
    else
        [circleAvailable circleStrength] = detectCircle_mex(grayDetectedRegion);      %CODE GEN C++
    end
elseif circleMethod==1
     if type==0 
        [circleAvailable circleStrength] = myDetectCircle(edgedRegion);  %MY MATLAB CODE
     elseif type==1
       [circleAvailable circleStrength] = myDetectCircle_mex(edgedRegion); %CODEGEN C++
     else
       [circleAvailable circleStrength] = myDetectCircle_OpenCL(edgedRegion);  %OpenCL
     end  
end
%----------------------------


%Detect corners
%---------------------------
if type==0 && useCriticalAreaAnalyser==1
[x, y] = detectCorner(grayDetectedRegion);      %MY MATLAB CODE
elseif type~=0 && useCriticalAreaAnalyser==1
[x, y] = detectCorner_mex(grayDetectedRegion);  %CODE GEN C++
end
%--------------------------


%Analyse/search for the presence of shapes (triangle, square, octagon)
%---------------------------
if type==0
[availableShapes ~] = shapeAnalyser(edgedRegion);  %MY MATLAB CODE
else
[availableShapes ~] = shapeAnalyser_mex(edgedRegion);  %CODE GEN C++
end
confirmedTriangle = availableShapes(1);
confirmedSquare = availableShapes(2);
confirmedOctagon =availableShapes(3);
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

end %end of nonParallelDetection function
%--------------------------------------------------------------------------