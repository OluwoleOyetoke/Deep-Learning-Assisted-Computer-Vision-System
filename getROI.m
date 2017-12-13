function [detectedRegion available ROI regionShed] = getROI(img, windowSize, stepSize, beacon, type)
%{
--------------------------------------------------------------------------
ROIExtractor Used to extract from a scene, the region of interest wherein 
%the  traffic sign classification needs to take place.

   Created on: 16th June, 2017
   Author: Oluwole Oyetoke Jnr
   Using MATLAB 2016

STEPS
1. Get image in RGB
2. Transform from RGB to HSV space
3. Turn image to binary through colour segmentation (red, blue & yellow)
4. Use Connected component analysis technique + Union Find 
Algorithm to determine Region of Interest (ROI)
5. If ROI is available, crop image to ROI, return ROI as detected region and
also return the co-ordinates of the detected region wrt the original image
 

TO CONVERT RGB IMAGE TO HSV SPACE
%H - Hue - contains the original colour itself
%S - Saturation - contains the information on number of pixels available for a colour
%V - Value - contains information related to brightness or darkness of a pixel

1. Automatic method i.e allowing MATLAB do the magic
%hsvImg = rgb2hsv(img); 

2. Manual method (angular solution)  
Iterate through picture.....
        numerator  = 0.5 * ((red-green)+(red-blue));
        left = (red-green)*(red-green);
        right = (red-blue)*(green-blue);
        denominator = sqrt(left+right);
        hue = acosd(numerator/denominator);
        saturation = 1-((3/(red+green+blue))*minimum);
.........

---------------------------------------------------------------------------
%}
 
%INPUT VALIDATION, INITIALIZATION AND IMAGE PREPARATION
%--------------------------------------------------------------------------
%if nargin ~= 5
%    error('getROI:Input_Argument_Error','This function works with 1 input argument -img, windowSize, stepSize, beacon, type- ')
%end

    hsvImg = rgb2hsv(img);
    [xDim, yDim, zDim] = size(hsvImg);


    %Normalize HSV[0, 1]
    normalizedHue = hsvImg(:,:,1);
    normalizedSaturation = hsvImg(:,:,2); 
    normalizedValue = hsvImg(:,:,3);
    
    %Threshold
    redSegemnt1Mask = (normalizedHue > 0.8) & (normalizedHue <= 1) & (normalizedSaturation>0.48) & (normalizedSaturation <= 1) & (normalizedValue>=0.4) & (normalizedValue<=1);
	redSegemnt2Mask = (normalizedHue > 0) & (normalizedHue < 0.05) & (normalizedSaturation>0.48) & (normalizedSaturation <= 1) & (normalizedValue>=0.4) & (normalizedValue<=1);
	blueSegemntMask = (normalizedHue >=0.52) & (normalizedHue <= 0.64) & (normalizedSaturation>0.7) & (normalizedSaturation <= 1) & (normalizedValue>=0.1953) & (normalizedValue<=1);
	yellowSegemntMask = (normalizedHue >0.10) & (normalizedHue < 0.14) & (normalizedSaturation>0.4) & (normalizedSaturation < 1) & (normalizedValue>0.8) & (normalizedValue<1);
	
   overalMask = redSegemnt1Mask | redSegemnt2Mask | blueSegemntMask | yellowSegemntMask;
   hsvImg(:,:,1) =  hsvImg(:,:,1) & overalMask;
   hsvImg(:,:,2) =  hsvImg(:,:,2) & overalMask;
   hsvImg(:,:,3) =  hsvImg(:,:,3) & overalMask;
   regionShed = overalMask;
%--------------------------------------------------------------------------
 


%SLIDING WINDOW DETECTION
%---------------------------------------------------------------------------
%1. Step size should not be greater than window size
%2. Beacon size is used to indicate that if x% of the region or more is bright,
% then assume region to be a positive find.
%3. Perform pixel sum pooling per window. If sum>=beacon, then mark region
%to be a possibility

stepSizeXCheck = mod((xDim-windowSize),stepSize);
stepSizeYCheck = mod((yDim-windowSize),stepSize); 
if stepSize>windowSize
    error('getROI:Step_Size_error','Please select a suitable step size less than the window size');
elseif stepSizeXCheck~=0
     error('getROI:Step_Size_error','Selected step size does not fit for the X axis');
elseif stepSizeYCheck~=0
     error('getROI:Step_Size_error','Selected step size does not fit for the Y axis');
end

if type==0
%MATLAB CCA Connected Component Analysis
[x, y, width, height] = CCA( xDim, yDim, zDim, stepSize, beacon, windowSize, regionShed );    
elseif type==1
%C++ Connected Component aanlysis
transpose = regionShed';
regionShed1D = transpose(:)';
%[x, y, width, height] = CCA( xDim, yDim, zDim, stepSize, beacon, windowSize, regionShed ); 
[output] = CCAmex(uint32(regionShed1D));
x = output(1);
y = output(2);
width = output(3);
height = output(4);     
end
%--------------------------------------------------------------------------

%EXTRACT RESULT (IF ANY)
%--------------------------------------------------------------------------
    %Crop out detected region based on colour detection and if possible, plot
    if x>=0 && x<=xDim && y>=0 && y<=yDim
       detectedRegion = imcrop(img,[y x width height]);
       available=1;
      % fprintf('Potential Traffic Sign Detected\n')
    else
        available=0;
        detectedRegion = zeros(1,1);
       % fprintf('No Traffic Sign Detected\n')
    end
    ROI = [y x width height]; %ROI co-ordinates to be sent back
   %imshow(hsvImg);
%--------------------------------------------------------------------------  
end
