function [ROI sceneAvailable detectedRegion] = sceneClassifier(img, parallel, type, circleMethod, useCriticalAreaAnalyser);
%{
---------------------------------------------------------------------------
sceneClassifier: Classifies Traffic Scene. It takes as input the frames
from the camera as 'img' and also takes in a parameter used to determine if
the detection operations should be carried out in parallel (faster) or
serially. 

>>0 = non-parallel and 1= parallel<<

Function also allows user to specify between making use of C++(MEX) or 
MATLAB versions of the detection functions using the variable
type 
>>type 0 = MATLAB, type 1=C++, type 2 = C++/OpenCL<<
 
Variable 'circleMethod' is used to choose between MATLAB's IMFINDCIRCLES 
function and myown 3D accumulator circular hough tansform 
method 
>>0=matlab's, 1=mine<<

The 'useCriticalAreaAnalyser' specifies if the top back up detection module
should also be used. This will increase detection accuracy, but also add to
the computation time. It can be done without and still achieve good result.
1=use and 0= don't use

Function Call Example: e.g ceneClassifier(img, 0, 1, 0, 0);

STEPS
1. Get region of interest through colour segmentation
2. Perform Shape Analysis (Circle, Triangle);
3. Show detected region (if available)

   Created on: 20th June, 2017
   Author: Oluwole Oyetoke Jnr
   Using MATLAB 2016
---------------------------------------------------------------------------
%}


%INPUT VALIDATION, INITIALIZATION AND IMAGE PREPARATION
%--------------------------------------------------------------------------
if nargin ~= 5
    error('sceneClassifier:Input_Argument_Error','This function works with 5 input argument -img, parallel, type, circleMethod, useCriticalAreaAnalyser- ')
end 
setGlobalVariables()
folderPath = getGlobalVariables(0);
openCL_Success =  getGlobalVariables(4);
N = maxNumCompThreads;
maxNumCompThreads(N);   %Make sure code runs on maximum number of threads
clc
profile on             %Switch on profiler for code performance analysis

img = imresize(img, [500 500]); %Standard definition is actually 640x480
[xDim, yDim, zDim] = size(img); %Check if image is coloured
if (zDim<3)
 error('sceneClassifier:Image_Format_Error','This function works with coloured images')
end

%If OpenCL is not available, switch to C++/MEX
if type==2 && openCL_Success==0
  warning('OpenCL Not Available On This Device. Operations Have Now Been Switched From OpenCL to C++') 
    type = 1;
end
%--------------------------------------------------------------------------


%GET REGION OF INTEREST THROUGH COLOUR SEGMENTATION
%--------------------------------------------------------------------------
windowSize = 20;
stepSize=10;
beacon = ceil((windowSize*windowSize)/20);  %if 1/20th of the region or more is bright, indicate as possible region
[detectedRegion regionAvailable ROI regionShed] = getROI(img, windowSize, stepSize, beacon, type);
%--------------------------------------------------------------------------


%GET A LIST OF ALL POSSIBLE WINDOW AND STEP SIZES FOR THE CHOSEN RESOLUTION
%--------------------------------------------------------------------------
%printWindowsNSteps(xDim, yDim); %Prints to detection data folder
%--------------------------------------------------------------------------


%IF REGION IS DETECTED, TEST FURTHER (SHAPE ANALYSIS)
%--------------------------------------------------------------------------
if regionAvailable~=0 && parallel==0
     grayDetectedRegion  = getGrayScale( detectedRegion );  %Get Gray Scale
[circleAvailable, confirmedTriangle, confirmedSquare, confirmedOctagon, triangleDownAvailable,triangleUpAvailable] = nonParallelDetection(detectedRegion, grayDetectedRegion,type, circleMethod, useCriticalAreaAnalyser);
elseif regionAvailable~=0 && parallel==1
     grayDetectedRegion  = getGrayScale( detectedRegion );  %Get Gray Scale
    [circleAvailable, confirmedTriangle, confirmedSquare, confirmedOctagon, triangleDownAvailable, triangleUpAvailable] = parallelDetection(detectedRegion, grayDetectedRegion,type,circleMethod, useCriticalAreaAnalyser);
elseif  regionAvailable==0
  sceneAvailable=0;  
end
%--------------------------------------------------------------------------


%MAKE DECISON if ROI WAS DETECTED AND VALIDATED
%--------------------------------------------------------------------------  
if regionAvailable~=0 && (circleAvailable==1 || confirmedTriangle==1 || confirmedSquare==1 || confirmedOctagon==1 || (triangleDownAvailable==1 && useCriticalAreaAnalyser==1) || (triangleUpAvailable==1 && useCriticalAreaAnalyser==1))
    
     sceneAvailable=1;
     %imshow(img); %Show Detected Sign
     %hold on;
     %rectangle('Position',ROI, 'EdgeColor', 'g', 'LineWidth', 3);
     %drawnow;
     sprintf('FOUND\n')
else
   %imshow(detectedRegion) %Display potential region
   sceneAvailable=0;
   %drawnow;
   sprintf('NOT FOUND\n')
end
%--------------------------------------------------------------------------

%SWITCH OFF PROFILER AND VIEW OUTCOME (if profiler was initially switched on)
profile off; profile viewer; 
end







