function [circleAvailable strength] = detectCircle(img);
%detectCircle: Uses Circular Hough transform to detect the presence of a
%circle in a  image. Input image should be grayscale

%{
STEPS
1. Check to make sure recieved image is Black and White
2. Detect
3. Assign detection strength

   Created on: 21st June, 2017
   Author: Oluwole Oyetoke Jnr
   Using MATLAB 2016
%}

%INPUT VALIDATION, INITIALIZATION AND IMAGE PREPARATION
%--------------------------------------------------------------------------
%if nargin ~= 1
%    error('detectCircle:Input_Argument_Error','This function works with 1 input argument -img- ')
%end

[xDim, yDim, zDim] = size(img); %Check if image is coloured
if (zDim>1)
   img = rgb2gray(img);
end

lowerRadius = ceil((yDim*(0.1)));
upperRadius =  ceil(yDim/2);
%--------------------------------------------------------------------------

%In order to optimize performance, divide search for circle into 2
midPoint = ceil ((lowerRadius+upperRadius)/2);
if midPoint>1
[centers1,radii1 metric1] = imfindcircles(img,[lowerRadius midPoint],'ObjectPolarity','bright'); %Find all the circles with radius r pixels in the range [x1, x2].
[centers2,radii2 metric2] = imfindcircles(img,[(midPoint+1) upperRadius],'ObjectPolarity','bright'); %Find all the circles with radius r pixels in the range [x3, x4].
else
    circleAvailable = 0; strength = 0;
    %Not necessary, but code gen needs it
    centers1 = zeros(1,1); radii1 = zeros(1,1); metric1 = zeros(1,1);
    centers2 = zeros(1,1); radii2 = zeros(1,1); metric2 = zeros(1,1);
end


if isempty(radii1) && isempty(radii2) 
    circleAvailable = 0; strength = 0;
elseif isempty(radii1)==0 && isempty(radii2)==1 
        centers = centers1; radii = radii1; metric=metric1;
        strength = metric1(1,1); circleAvailable = 1;
elseif isempty(radii1)==1 && isempty(radii2)==0
       centers = centers2; radii = radii2; metric=metric2;
       strength = metric2(1,1); circleAvailable = 1;
else
    %Find the strongest circle
    if metric1(1) >= metric2(1)
        centers = centers1; radii = radii1;metric=metric1;strength = metric1(1,1);    
    else
        centers = centers2;radii = radii2;metric=metric2;strength = metric2(1,1);
    end
    circleAvailable = 1;
end %end of loop around possible circle area

%    centresRadiiAndMetric = [centers radii metric]; %unused for now

%--------------------------------------------------------------------------
%SHAPE ANALYSIS - DRAW THE DETECTED CIRCLE
%highlighted = drawDetectedCircle( img, xDim, yDim, centers, radii);
%imshow(highlighted);
%---------------------------------------------------------------------------


%sprintf('Circle Detection Done. Availability: %d', circleAvailable)
end %end of function