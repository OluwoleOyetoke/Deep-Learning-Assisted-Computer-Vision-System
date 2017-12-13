function [edgedRegion] = detectEdge(graySImg);
%{
detectEdge: Edge detection using Sobel Filter. Function makes use of gray scale
images


STEPS
1. Check to know if image is coloured (Input should be an RGB image)
2. If coloured, convert to GrayScale
3. Convolve sobel filter with image
4. Get gradiaent magnitude
5. perform max and median filtering


   Created on: 19th June, 2017
   Author: Oluwole Oyetoke Jnr
   Using MATLAB 2016
%}

%Input Validation
%if nargin ~= 1
%    error('detectEdge:Input_Argument_Error','This function works with 1 input argument -img- ')
%end


%Declare Filters
Gx = [-1 0 1; -2 0 2; -1 0 1];
Gy = [1 2 1; 0 0 0;-1 -2 -1];

[xDim, yDim, zDim] = size(graySImg);
%Initialize aprameters and variables
windowSize = 3;
stepSize = 1;
startX = 1; startY = 1; stopX = windowSize; stopY = windowSize;
xBlocks = ((xDim-windowSize)/stepSize)+1;
yBlocks = ((yDim-windowSize)/stepSize)+1;
xCounter=1;
yCounter=1;


totalBlocks = xBlocks * yBlocks;
edgedImage = zeros(xBlocks,yBlocks);
GxVal=0; GyVal=0;
regionGxSum=0; regionGySum=0;

%Convolve filter with image
for loopCount = 1:totalBlocks
      %Pixel Sum Pooling happens here
     GxVal=0;
     GyVal=0;
     regionGxSum=0;
     regionGySum=0;
 
     %Try to unroll this loop later (if speed needs arises)
     for innerX=startX:1:stopX
        for innerY =startY:1:stopY 
            GxVal = graySImg(innerX, innerY) * Gx((innerX-startX+1),(innerY-startY+1));
            GyVal = graySImg(innerX, innerY) * Gy((innerX-startX+1),(innerY-startY+1));
             regionGxSum = regionGxSum+GxVal;
             regionGySum = regionGySum+GyVal;
        end
     end
     
%To view window as it slides over the image. Press space bar to release pause
%hold on
%rectangle('Position',[startX startY 3 3], 'EdgeColor', 'g')
%pause
     
     %Get Gradiaent Magnitude   
     gradientMag = sqrt((regionGxSum*regionGxSum) + (regionGySum*regionGySum));
     edgedImage(xCounter, yCounter) = gradientMag;   
     
    %Loop management 
     if yCounter==yBlocks
        %reset xStart, xStop positions and xCounter 
         startY = 1;
         stopY = windowSize;
         yCounter=0;
         xCounter = xCounter+1;
         
         startX=startX+stepSize;
         stopX=startX+windowSize-1;
     else
       startY = startY+stepSize;
       stopY = startY+windowSize-1; 
     end
           yCounter=yCounter+1;          
end %end of xLoopCount

%Filter image using max and median filter to detect just mostly edges and wipe out negatives
medianVal = (median(median(edgedImage(:,:))));
maxVal = (max(max(edgedImage(:,:))));
filteredEdgeImage = edgedImage-medianVal;
Thresh = maxVal*0.3;

%Black out all place where edge image is <30% of the brightes pixel in the picture
filteredEdgeImage( filteredEdgeImage<Thresh)=0;  
edgedRegion = filteredEdgeImage;

%fprintf('Edge Detection Carried Out')
%imshow(edgedRegion)
end %end of module