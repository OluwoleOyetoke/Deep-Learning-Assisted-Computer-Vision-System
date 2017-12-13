function [circleAvailable, dummyVar] = myDetectCircle(inputImg)
%{
---------------------------------------------------------------------------
%myDetectCircle Uses Circular Hough transform to detect the presence of a
%circle in a  image

STEPS
1. Convert image to gray scale
2. Pass gray scaled image to edge detector
3. Loop through accumulator to find actual cicle centre
4. Draw & label detected circle

   Created on: 29th June, 2017
   Author: Oluwole Oyetoke Jnr
   Email: oluwoleoyetoke@gmail.com
   Using MATLAB 2016
---------------------------------------------------------------------------
%}


%INPUT VALIDATION AND IMAGE TRANSFORMATION
%--------------------------------------------------------------------------
%if nargin ~= 1
%    error('myDetectCircle:Input_Argument_Error','This function works with 1 input argument -img- ')
%end 

[xDim, yDim, zDim] = size(inputImg); %Check if image is coloured
if zDim>1
     graySImg = rgb2gray(inputImg); img = graySImg; %Convert to gray scale
else
img =  inputImg;   
end
%--------------------------------------------------------------------------


%EDGE DETECTION, RADIUS RANGE DERIVATION
%--------------------------------------------------------------------------
edgedRegion = img;
[xDim, yDim, zDim] = size(edgedRegion);
[maxPixVal index] = max(edgedRegion(:));
 minRadius = ceil((yDim*0.1));
 maxRadius = ceil(yDim/2);
 range = maxRadius-minRadius;
%--------------------------------------------------------------------------


 
%HOUGH TRANSFORM/DETECTION HAPPENS HERE
%--------------------------------------------------------------------------
%{
Recall that 
h=x-rcos(?)
k=y-rcos(?)
? = 0 - 360
%}
%radius =10;
%viewCircularHough( img, radius ) to view circular hough in operation
%Create Accumulator
dummyVar=1;
Accumulator = zeros(xDim, yDim, range);
a=0; b=0; radius=0; 
[sineTable] = getGlobalVariables(1); %Get sine look up table
[cosTable] = getGlobalVariables(2); %Get cos look up table
%Loop through all the pixels and apply hough transform technique

for xPixel = 1:xDim
    for yPixel = 1:yDim %Looping through every pixel
      if edgedRegion(xPixel,yPixel)>0 &&  edgedRegion(xPixel,yPixel)>=(0.7*maxPixVal) %Pick only SURE edges
        for rad = 1:range %Loop through radius range
            radius = minRadius+rad-1;
            for tetha =1:360 %Every possible angle
                a = ceil(xPixel - (radius*cosTable(tetha)));
                b = ceil(yPixel - (radius*sineTable(tetha)));
                if a>0 && b>0 && a<=xDim && b<=yDim
                    Accumulator(a,b,rad) = Accumulator(a,b,rad)+1; 
                end
            end %end of theta loop
        end %end of radius loop
      end %end if
    end %end of yPixel
end %end of xPixel
%--------------------------------------------------------------------------


%Make decision
curMax = max(Accumulator(:));
if curMax>100
    circleAvailable=1;
else
    circleAvailable=0;
end


%{
%FIND CENTRE & %DRAW THE DETECTED CIRCLE;
%--------------------------------------------------------------------------
currentMax =0;
maxDetails = [0 0 0 0];
for radius=1:range
   %Scan through each slice of the accumulator array
   temp=Accumulator(:,:,radius);
   [maxValue,index]=max(temp(:)); %Get maximum value per slice
   if maxValue>=currentMax %is maxVal> current maximum value?
   [i,j]=ind2sub([xDim yDim],index);
   maxDetails=[maxValue i j (minRadius+radius-1)]; %Save it as current maximum
   currentMax=maxValue;
   end %end of if
end



radii = maxDetails(1,4);
%[edgedRegion] = drawDetectedCircle( img, xDim, yDim, centers, radii);
 a = maxDetails(1,2);
 b = maxDetails(1,3);
 radiusSquared = radii*radii; 
 %draw test circle - Bhrams theorem = (x – xo)^2 + (y – yo)^2 <= r2
 for xCnt = 1:xDim
     for yCnt = 1:yDim
        lft = (xCnt - a)*(xCnt - a);
        rht = (yCnt - b)*(yCnt - b);
            if (lft+rht)<=radiusSquared
            edgedRegion(xCnt, yCnt) = 100; 
            end %end of if statement
     end %end of yCnt
 end %end of xCnt
imshow(edgedRegion);
 
%SHOW CENTRE AND LABEL CIRCLE
%--------------------------------------------------------------------------
edgedRegion(a, b) = 255;
labeledImg = insertText(edgedRegion,[b (a-radii+7)],...
    'CIRCLE DETECTED HERE','TextColor',...
    'white','BoxOpacity',1,'Font','LucidaBrightRegular');
imshow(labeledImg);
%--------------------------------------------------------------------------
%}


end