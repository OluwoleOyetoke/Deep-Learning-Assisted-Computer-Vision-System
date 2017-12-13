function [] = evaluateOpenCLPerformance(img)
%evaluateOpenCLPerformance Evaluates the performance of the customized 
%circle detection cunctionkey functions in the Embedded Vision System. 
%   Starts First by Testing the Speed of the MATLAB function and the
%   proceeds to the MEX version and then the OpenCL enabled version. Then
%   displays result and plots performance graph afterwards.
         %Created on: 23rd August, 2017
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
%--------------------------------------------------------------------------
LASTN = maxNumCompThreads(2);
clc

%GET REGION OF INTEREST THROUGH COLOUR SEGMENTATION
%--------------------------------------------------------------------------
windowSize = 20;
stepSize=10;
 %if 1/20th of the region or more is bright, indicate as possible region
beacon = ceil((windowSize*windowSize)/20);
[detectedRegion regionAvailable ROI regionShed] = getROI(img, windowSize, stepSize,beacon);
%--------------------------------------------------------------------------

%IF REGION IS DETECTED, TEST FURTHER (SHAPE ANALYSIS)
%--------------------------------------------------------------------------
if regionAvailable~=0

grayDetectedRegion  = getGrayScale( detectedRegion ); 
ITT = 10; %Specifies the number of itterations for multiple tests
edgedRegion = detectEdge(grayDetectedRegion);

%CIRCLE DETECTION PERFORMANCE TEST----------------------------------------------------------
fprintf('Testing Circle Detection Performance (MATLAB)\n')
%1. One time test
tic
[circleAvailable circleStrength] = myDetectCircle(edgedRegion); 
oneTimeCircleDurationMATLAB = toc;
%2. Multiple time test
multipleTimeCircleDurationMATLAB=0;
for i=1:ITT
tic
[circleAvailable circleStrength] = myDetectCircle(edgedRegion); 
temp = toc;
multipleTimeCircleDurationMATLAB =multipleTimeCircleDurationMATLAB+temp;
end
averageCircleDurationMATLAB = multipleTimeCircleDurationMATLAB/ITT; %Get average duration for the itterated process

fprintf('Testing Circle Detection Performance (MEX)\n') 
%1. One time test
tic
[circleAvailable circleStrength] = myDetectCircle_mex(edgedRegion);
oneTimeCircleDurationMEX = toc;
%2. Multiple time test
multipleTimeCircleDurationMEX=0;
for i=1:ITT
tic
[circleAvailable circleStrength] = myDetectCircle_mex(edgedRegion);
temp = toc;
multipleTimeCircleDurationMEX =multipleTimeCircleDurationMEX+temp;
end
averageCircleDurationMEX = multipleTimeCircleDurationMEX/ITT; %Get average duration for the itterated process


fprintf('Testing Circle Detection Performance (OpenCL)\n')
%1. One time test
%Initiailize openCL
try
platform = 1;  device = 1;
ocl = opencl(); 
ocl.initialize(platform, device); %Select Host Platform, GPU device
ocl.addfile('OpenCL Toolbox/cl/Kernel.cl');
ocl.build();
catch
   error('evaluateOpenCLPerformance:OpenCL_Initialization_Error','OpenCL Not Enabled On This Device '); 
end
tic
%Prepare MATLAB variables
[xD yD zD] = size(edgedRegion);
transpose = edgedRegion';
edge1D = transpose(:)';
img = single (edge1D);
mx = max(img);
xDimension = int32(xD);
yDimension = int32(yD);
minRadius = int32(ceil((yDimension*0.1)));
maxRadius = int32(ceil(yDimension / 2));
range = int32(maxRadius - minRadius);
accumulator = int32(zeros(1,(xDimension*yDimension*range)));
maxPixVal = single(mx);
imageSize = int32(xDimension*yDimension);


%Transfer MATLAB variables into buffer
One = int32(1);
imageLength     = int32(length(edge1D));
accLength       = int32(length(accumulator));
imgBuff         = clbuffer('ro', 'single',imageLength );
accBuff         = clbuffer('rw', 'int32', accLength);
xDimBuff        = clbuffer('rw', 'int32', One);
yDimBuff        = clbuffer('rw', 'int32', One);
rangeBuff       = clbuffer('ro', 'int32', One);
maxPixValBuff   = clbuffer('ro', 'single', One);

imgBuff.set(img);
accBuff.set(accumulator);
xDimBuff.set(xDimension);
yDimBuff.set(yDimension);
rangeBuff.set(range);
maxPixValBuff.set(maxPixVal);

addkernel = clkernel('circularHough', [imageSize, 0,0], [256,0,0]);
addkernel(imgBuff, accBuff, xDimBuff, yDimBuff, rangeBuff, maxPixValBuff);
returnedAccumulator = accBuff.get();
[value, index] = max(returnedAccumulator);      
clear imgBuff accBuff xDimBuff yDimBuff rangeBuff maxPixValBuff; %Free buffer

oneTimeCircleDurationOpenCL = toc;


%2. Multiple time test
multipleTimeCircleDurationOpenCL=0;
for i=1:ITT
tic
%Prepare MATLAB variables
[xD yD zD] = size(edgedRegion);
transpose = edgedRegion';
edge1D = transpose(:)';
img = single (edge1D);
mx = max(img);
xDimension = int32(xD);
yDimension = int32(yD);
minRadius = int32(ceil((yDimension*0.1)));
maxRadius = int32(ceil(yDimension / 2));
range = int32(maxRadius - minRadius);
accumulator = int32(zeros(1,(xDimension*yDimension*range)));
maxPixVal = single(mx);
imageSize = int32(xDimension*yDimension);


%Transfer MATLAB variables into buffer
One = int32(1);
imageLength     = int32(length(edge1D));
accLength       = int32(length(accumulator));
imgBuff         = clbuffer('ro', 'single',imageLength );
accBuff         = clbuffer('rw', 'int32', accLength);
xDimBuff        = clbuffer('rw', 'int32', One);
yDimBuff        = clbuffer('rw', 'int32', One);
rangeBuff       = clbuffer('ro', 'int32', One);
maxPixValBuff   = clbuffer('ro', 'single', One);

imgBuff.set(img);
accBuff.set(accumulator);
xDimBuff.set(xDimension);
yDimBuff.set(yDimension);
rangeBuff.set(range);
maxPixValBuff.set(maxPixVal);

addkernel = clkernel('circularHough', [imageSize, 0,0], [256,0,0]);
addkernel(imgBuff, accBuff, xDimBuff, yDimBuff, rangeBuff, maxPixValBuff);
returnedAccumulator = accBuff.get();
[value, index] = max(returnedAccumulator);      
clear imgBuff accBuff xDimBuff yDimBuff rangeBuff maxPixValBuff; %Free buffer
temp = toc;
multipleTimeCircleDurationOpenCL =multipleTimeCircleDurationOpenCL+temp;
end
averageCircleDurationOpenCL = multipleTimeCircleDurationOpenCL/ITT; %Get average duration for the itterated process
%--------------------------------------------------------------------------


%Create Bar graph group.
%Each group contains [OnetTimeMATLAB OneTimeMex AverageMATLAB AverageMEX]
graphData = [oneTimeCircleDurationMATLAB; oneTimeCircleDurationMEX; oneTimeCircleDurationOpenCL; averageCircleDurationMATLAB; averageCircleDurationMEX; averageCircleDurationOpenCL];


hbar = bar(graphData); %Draw
str1 = strcat('MATLAB ',num2str(ITT),' ITT. AVG');
str2 = strcat('C++ ',num2str(ITT),' ITT. AVG');
str3 = strcat('OpenCL ',num2str(ITT),' ITT. AVG');
legendData = {'MATLAB (ONCE)', 'C++ (ONCE)', 'OpenCL (ONCE)',str1,str2,str3 };
xAxisLabels = legendData;
set(gca,'XTickLabel',xAxisLabels,'FontSize', 8);
tit = title('BAR CHART COMPARING CUSTOMIZED MATLAB, C++ AND OPENCL-BASED CIRCLE DETECTION ALGORITHM PERFORMANCE');
set(tit, 'FontSize', 12);
xlab = sprintf('Circle Detection Algorithm');
xlabel(xlab);
ylabel('Execution Times (seconds)');
leg = {'Execution Time'};
legend(hbar, leg);
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

