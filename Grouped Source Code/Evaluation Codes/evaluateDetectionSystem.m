function [] = evaluateDetectionSystem(img)
%performanceEvaluator Evaluates the performance of key functions in the
%Embedded Vision System. 
%   Starts First by Testing the Speed of the MATLAB function and the
%   proceeds to the MEX version and then the OpenCL enabled version. Then
%   displays result and plots performance graph afterwards.
         %Created on: 17th August, 2017
         %Author: Oluwole Oyetoke Jnr
         %Using MATLAB 2016

%INPUT VALIDATION AND IMAGE PREPARATION
%--------------------------------------------------------------------------
if nargin ~= 1
    error('performanceEvaluator:Input_Argument_Error','This function works with 1 input argument -img- ')
end 
[xDim, yDim, zDim] = size(img);
 %Check if image is coloured
if (zDim<3)
 error('performanceEvaluator:Image_Format_Error','This function works with coloured images')
end

img = imresize(img, [500 500]); %But standard definition is 640x480)
[xDim, yDim, zDim] = size(img);

N = maxNumCompThreads;
maxNumCompThreads(N);   %Make sure code runs on maximum number of threads
clc
%--------------------------------------------------------------------------


%GET REGION OF INTEREST THROUGH COLOUR SEGMENTATION
%--------------------------------------------------------------------------
windowSize = 20;
stepSize=10;
 %if 1/20th of the region or more is bright, indicate as possible region
beacon = ceil((windowSize*windowSize)/20);
[detectedRegion regionAvailable ROI regionShed] = getROI(img, windowSize, stepSize,beacon, 1);
%--------------------------------------------------------------------------



%IF REGION IS DETECTED, TEST FURTHER (SHAPE ANALYSIS)
%--------------------------------------------------------------------------
if regionAvailable~=0

grayDetectedRegion  = getGrayScale( detectedRegion ); 
ITT = 100; %Specifies the number of itterations for multiple tests

%CONNECTED COMPONENT ANALYSIS PERFORMANCE ANALYSIS-----------------------------------
fprintf('Testing Connected Component Analysis Performance (MATLAB)\n')
%1. One time test
tic
[x, y, width, height] = CCA( xDim, yDim, zDim, stepSize, beacon, windowSize, regionShed );
oneTimeCCADurationMATLAB = toc;
%2. Multiple time test
multipleTimeCCADurationMATLAB=0;
for i=1:ITT
tic
[x, y, width, height] = CCA( xDim, yDim, zDim, stepSize, beacon, windowSize, regionShed );
temp = toc;
multipleTimeCCADurationMATLAB =multipleTimeCCADurationMATLAB+temp;
end
averageCCADurationMATLAB = multipleTimeCCADurationMATLAB/ITT; %Get average duration for the itterated process

fprintf('Testing Connected Component Analysis Performance  (MEX)\n')
transpose = regionShed';
regionShed1D = transpose(:)';
%1. One time test
tic
[output] = CCAmex(uint32(regionShed1D));
oneTimeCCADurationMEX = toc;
%2. Multiple time test
multipleTimeCCADurationMEX=0;
for i=1:ITT
tic
[output] = CCAmex(uint32(regionShed1D));
temp = toc;
multipleTimeCCADurationMEX =multipleTimeCCADurationMEX+temp;
end
averageCCADurationMEX = multipleTimeCCADurationMEX/ITT; %Get average duration for the itterated process
%--------------------------------------------------------------------------


%EDGE DETECTION PERFORMANCE TEST-------------------------------------------
fprintf('Testing Edge Detection Performance (MATLAB)\n') 
%1. One time test
tic
edgedRegion = detectEdge(grayDetectedRegion); 
oneTimeEdgeDurationMATLAB = toc;
%2. Multiple time test
multipleTimeEdgeDurationMATLAB=0;
for i=1:ITT
tic
edgedRegion = detectEdge(grayDetectedRegion); 
temp = toc;
multipleTimeEdgeDurationMATLAB =multipleTimeEdgeDurationMATLAB+temp;
end
averageEdgeDurationMATLAB = multipleTimeEdgeDurationMATLAB/ITT; %Get average duration for the itterated process

fprintf('Testing Edge Detection Performance (MEX)\n') 
%1. One time test
tic
edgedRegion = detectEdge_mex(grayDetectedRegion); 
oneTimeEdgeDurationMEX = toc;
%2. Multiple time test
multipleTimeEdgeDurationMEX=0;
for i=1:ITT
tic
edgedRegion = detectEdge_mex(grayDetectedRegion); 
temp = toc;
multipleTimeEdgeDurationMEX =multipleTimeEdgeDurationMEX+temp;
end
averageEdgeDurationMEX = multipleTimeEdgeDurationMEX/ITT; %Get average duration for the itterated process
%--------------------------------------------------------------------------

%CORNER DETECTION PERFORMANCE TEST-----------------------------------------
fprintf('Testing Corner Detection Performance (MATLAB)\n') 
%1. One time test
tic
[x y] = detectCorner(grayDetectedRegion); %MATLAB
oneTimeCornerDurationMATLAB = toc;
%2. Multiple time test
multipleTimeCornerDurationMATLAB=0;
for i=1:ITT
tic
[x y] = detectCorner(grayDetectedRegion); %MATLAB
temp = toc;
multipleTimeCornerDurationMATLAB =multipleTimeCornerDurationMATLAB+temp;
end
averageCornerDurationMATLAB = multipleTimeCornerDurationMATLAB/ITT; %Get average duration for the itterated process

fprintf('Testing Corner Detection Performance (MEX)\n')
%1. One time test
tic
[x y] = detectCorner_mex(grayDetectedRegion); %C++
oneTimeCornerDurationMEX = toc;
%2. Multiple time test
multipleTimeCornerDurationMEX=0;
for i=1:ITT
tic
[x y] = detectCorner_mex(grayDetectedRegion); %C++
temp = toc;
multipleTimeCornerDurationMEX =multipleTimeCornerDurationMEX+temp;
end
averageCornerDurationMEX = multipleTimeCornerDurationMEX/ITT; %Get average duration for the itterated process
%--------------------------------------------------------------------------

%CIRCLE DETECTION PERFORMANCE TEST----------------------------------------------------------
fprintf('Testing Circle Detection Performance (MATLAB)\n')
%1. One time test
tic
[circleAvailable circleStrength] = detectCircle(detectedRegion); 
oneTimeCircleDurationMATLAB = toc;
%2. Multiple time test
multipleTimeCircleDurationMATLAB=0;
for i=1:ITT
tic
[circleAvailable circleStrength] = detectCircle(detectedRegion); 
temp = toc;
multipleTimeCircleDurationMATLAB =multipleTimeCircleDurationMATLAB+temp;
end
averageCircleDurationMATLAB = multipleTimeCircleDurationMATLAB/ITT; %Get average duration for the itterated process

fprintf('Testing Circle Detection Performance (MEX)\n') 
%1. One time test
tic
[circleAvailable circleStrength] = detectCircle_mex(grayDetectedRegion);
oneTimeCircleDurationMEX = toc;
%2. Multiple time test
multipleTimeCircleDurationMEX=0;
for i=1:ITT
tic
[circleAvailable circleStrength] = detectCircle_mex(grayDetectedRegion);
temp = toc;
multipleTimeCircleDurationMEX =multipleTimeCircleDurationMEX+temp;
end
averageCircleDurationMEX = multipleTimeCircleDurationMEX/ITT; %Get average duration for the itterated process
%--------------------------------------------------------------------------

%SHAPE ANALYSER PERFORMANCE TEST-------------------------------------------
fprintf('Testing Shape Analyser Performance (MATLAB)\n') 
%1. One time test
tic
[availableShapes] = shapeAnalyser(edgedRegion); %MATLAB
oneTimeShapeAnalyserDurationMATLAB = toc;
%2. Multiple time test
multipleTimeShapeAnalyserDurationMATLAB=0;
for i=1:ITT
tic
[availableShapes] = shapeAnalyser(edgedRegion); %MATLAB
temp = toc;
multipleTimeShapeAnalyserDurationMATLAB =multipleTimeShapeAnalyserDurationMATLAB+temp;
end
averageShapeAnalyserDurationMATLAB = multipleTimeShapeAnalyserDurationMATLAB /ITT; %Get average duration for the itterated process

fprintf('Testing Shape Analyser Performance (MEX)\n') 
%1. One time test
tic
[availableShapes] = shapeAnalyser_mex(edgedRegion); %C++
oneTimeShapeAnalyserDurationMEX = toc;
%2. Multiple time test
multipleTimeShapeAnalyserDurationMEX=0;
for i=1:ITT
tic
[availableShapes] = shapeAnalyser_mex(edgedRegion); %C++
temp = toc;
multipleTimeShapeAnalyserDurationMEX =multipleTimeShapeAnalyserDurationMEX+temp;
end
averagesShapeAnalyserDurationMEX = multipleTimeShapeAnalyserDurationMEX/ITT; %Get average duration for the itterated process
%--------------------------------------------------------------------------

%CRITICAL AREA PERFORMANCE TEST--------------------------------------------
fprintf('Testing Critical Area Analyser Performance (MATLAB)\n') 
%1. One time test
tic
[chances, shrinks] = analyseCriticalAreas(edgedRegion, x, y); %MATLAB
oneTimeCriticalAreaAnalyserDurationMATLAB = toc;
%2. Multiple time test
multipleTimeCriticalAreaAnalyserDurationMATLAB=0;
for i=1:ITT
tic
[chances, shrinks] = analyseCriticalAreas(edgedRegion, x, y); %MATLAB
temp = toc;
multipleTimeCriticalAreaAnalyserDurationMATLAB =multipleTimeCriticalAreaAnalyserDurationMATLAB+temp;
end
averageCriticalAreaDurationMATLAB = multipleTimeCriticalAreaAnalyserDurationMATLAB /ITT; %Get average duration for the itterated process

fprintf('Testing Critical Area Analyser Performance (MEX)\n') 
%1. One time test
tic
[chances, shrinks] = analyseCriticalAreas_mex(edgedRegion, x, y); %C++
oneTimeCriticalAreaAnalyserDurationMEX = toc;
%2. Multiple time test
multipleTimeCriticalAreaAnalyserDurationMEX=0;
for i=1:ITT
tic
[chances, shrinks] = analyseCriticalAreas_mex(edgedRegion, x, y); %C++
temp = toc;
multipleTimeCriticalAreaAnalyserDurationMEX =multipleTimeCriticalAreaAnalyserDurationMEX+temp;
end
averagesCriticalAreaDurationMEX = multipleTimeCriticalAreaAnalyserDurationMEX/ITT; %Get average duration for the itterated process
%--------------------------------------------------------------------------
fprintf('Analysis completed. Getting ready to plot\n');
else
    
    fprintf('NO REGION OF INTEREST FOUND, THEREFORE NO TEST OPERATION\n')
    
end %End of if region is found

%Create Bar graph group.
%Each group contains [OnetTimeMATLAB OneTimeMex AverageMATLAB AverageMEX]
graphData = [oneTimeCCADurationMATLAB oneTimeCCADurationMEX averageCCADurationMATLAB averageCCADurationMEX;...
oneTimeEdgeDurationMATLAB oneTimeEdgeDurationMEX averageEdgeDurationMATLAB averageEdgeDurationMEX;...
oneTimeCornerDurationMATLAB oneTimeCornerDurationMEX averageCornerDurationMATLAB averageCornerDurationMEX;...
oneTimeCircleDurationMATLAB oneTimeCircleDurationMEX averageCircleDurationMATLAB averageCircleDurationMEX;...
oneTimeShapeAnalyserDurationMATLAB oneTimeShapeAnalyserDurationMEX averageShapeAnalyserDurationMATLAB averagesShapeAnalyserDurationMEX;...
oneTimeCriticalAreaAnalyserDurationMATLAB oneTimeCriticalAreaAnalyserDurationMEX averageCriticalAreaDurationMATLAB averagesCriticalAreaDurationMEX];

hbar = bar(graphData); %Draw
xAxisLabels = {'CCA Analysis', 'Edge Detection', 'Corner Detection', 'Circle Detection', 'Shape Analysis', 'Critical Area Analysis'};
set(gca,'XTickLabel',xAxisLabels);
tit = title('BAR GRAPH SHOWING DETECTION ALGORITHM PERFORMANCE MATLAB vs C++');
set(tit, 'FontSize', 12);
xlab = sprintf('Vision System Used Detection Algorithms');
xlabel(xlab);
ylabel('Execution Times (seconds)');
str1 = strcat('MATLAB VERSION (AVG. TIME FOR -',num2str(ITT),'- ITTERATION(S))');
str2 = strcat('C++ VERSION (AVG. TIME FOR -',num2str(ITT),'- ITTERATION(S))');
legendData = {'MATLAB VERSION (RUN ONCE)', 'C++ VERSION (RUN ONCE)', str1,str2 };   
legend(hbar,legendData);
mx=max(graphData(:));
% Set the axes YLIM (increaed wrt the max data value to have room for the
% label
ylim([0 mx*1.2])
grid minor
% Get the XDATA
XDATA=get(hbar(1),'XData')';
% Define the vertical offset of the labels
ygap=mx*0.1;
% Loop over the bar's group
for i=1:length(hbar)
   % Get the YDATA of the i-th bar in each group
   YDATA=get(hbar(i),'YData')';
   % Loop over the groups
   for j=1:length(XDATA)
      % Get the XPOS of the j-th bar 
      xpos=XDATA(j);
      % Get the height of the bar and increment it with the offset
      ypos=YDATA(j)+ygap;
      % Define the labels
      [labels]=num2str(YDATA(j),3);
      % Add the labels
      t = text(xpos+hbar(i).XOffset,ypos,labels,'Color','k','HorizontalAlignment','center','Rotation',90);
   end
end


end %End of function

