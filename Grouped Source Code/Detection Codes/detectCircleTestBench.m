function [circleAvailable circleStrength] = detectCircleTestBench()
%UNTITLED4 Summary of this function goes here
%   Detailed explanation goes here
imagePath = 'C:\Users\Oluwole_Jnr\Desktop\University of Leeds\Main Project\Project_MATLab\Training\Detection Images\scene28.jpg';
img = uint8 (imread(imagePath));
img = imresize(img, [500 500]); 

windowSize = 20;
stepSize=10;
 %if 1/20th of the region or more is bright, indicate as possible region
beacon = ceil((windowSize*windowSize)/20);
[detectedRegion regionAvailable ROI] = getROI(img, windowSize, stepSize,beacon);
grayDetectedRegion  = getGrayScale( detectedRegion ); 
[circleAvailable circleStrength] = detectCircle(grayDetectedRegion);

end

