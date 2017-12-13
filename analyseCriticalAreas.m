function [chances, shrinks] = analyseCriticalAreas(img, edgeXs, edgeYs);
%{
---------------------------------------------------------------------------
%analyseCriticalAreas: Function used to check the 8 critical edses of the ROI so
%as to decipher the kind of shape under question. Shapes such as such as
%triangles, squares, octagons and diamonds


 Created on: 20th June, 2017
   Author: Oluwole Oyetoke Jnr
   Using MATLAB 2016

STEPS
1. Iterate through image and identify border elements
2. Crop image based on active border pixels
3. Perform edge detection on the croped image
4. Check top/bottom-left, middle & right corner for the presence of edges
This will help in the detetion of triangls and rectangles
---------------------------------------------------------------------------
%}


%Input Validation
if nargin ~= 3
    error('analyseCriticalAreas:Input_Argument_Error','This function works with 3 input argument -img, edgeXs, edgeYs- ')
end

regionFactor = 1/3;
ALLOWANCE =3; %Allowance given when croping in the ROI at the end

[xDim, yDim, zDim] = size(img); %Check if image is coloured

%Begin shrink process
len = length(edgeXs);
highestX = -1; highestY = -1; lowestX = xDim+1; lowestY = yDim+1; currentX=0; currentY=0;
for xLoop = 1:len
        currentX = edgeXs(xLoop);
        currentY = edgeYs(xLoop);
        if currentX>highestX
            highestX=currentX;
        end
        if currentX<lowestX
            lowestX = currentX;
        end
        if currentY>highestY
            highestY=currentY;
        end
         if currentY<lowestY
            lowestY = currentY;
        end    
end

%Give a little allowance
if lowestX-ALLOWANCE >=1
    lowestX = lowestX-ALLOWANCE;
end
if lowestY-ALLOWANCE >=1
    lowestY = lowestY-ALLOWANCE;
end
if highestX+ALLOWANCE <=xDim
    highestX = highestX+ALLOWANCE;
end
if highestY+ALLOWANCE <=yDim
    highestY = highestY+ALLOWANCE;
end
width = highestY - lowestY + 1;
height = highestX - lowestX + 1;

xShrink = lowestX;
yShrink = lowestY;
widthShrink = yDim-width;
heightShrink = xDim-height;
shrinks = [yShrink xShrink widthShrink heightShrink];

 shrinkedImage = imcrop(img,[lowestY lowestX width height]);
 %grayShrinkedImage  = getGrayScale( shrinkedImage ); 
 [x y] = detectCorner(shrinkedImage); %Detect corner in shrinked image
 %imshow(shrinkedImage)
 
 [xDim, yDim, zDim] = size(shrinkedImage);
 len = length(x);
 %Check critical areas for presence of edges
 edgeX=0; edgeY=0;
 topLeftPortion      = 0;
 topMiddlePortion    = 0;
 topRightPortion     = 0;

 downLeftPortion     = 0;
 downMiddlePortion   = 0;
 downRightPortion    = 0;

 middleLeftPortion   = 0;
 middleRightPortion  = 0;
 
 regionSizeX = ceil(regionFactor*xDim);
 regionSizeY = ceil(regionFactor*yDim);
 tlsX = 1; %top-left start X
 tlsY = 1; %top-left start Y
 
 tmsX = 1; %bottom-middle start X
 tmsY = (yDim/2)-(ceil(regionFactor*yDim)/2); %bottom-middle start Y
 
 trsX = 1; %top-right start X
 trsY = yDim-ceil(regionFactor*yDim); %bottom-right start Y
 
 
 mlsX = (xDim/2)-(ceil(regionFactor*xDim)/2); %middle-left start X
 mlsY = 1; %middle-left start Y
 
 mrsX = (xDim/2)-(ceil(regionFactor*xDim)/2); %middle-right start X
 mrsY = yDim-ceil(regionFactor*yDim); %middle-right start Y
 
 
 
 blsX = xDim - ceil(regionFactor*xDim); %bottom-left start X
 blsY = 1; %bottom-left start Y
 
 bmsX = xDim - ceil(regionFactor*xDim); %bottom-middle start X
 bmsY = (yDim/2)-(ceil(regionFactor*yDim)/2); %bottom-middle start Y
 
 brsX = xDim - ceil(regionFactor*xDim); %bottom-right start X
 brsY = yDim-ceil(regionFactor*yDim); %bottom-right start Y 
 
%{
%To detect Triangle and Square, pick 8 key areas in the image and test for corners
%SQUARE, UPWARD FACING TRIANGLE, DOWNWARD FACING TRIANGLE AND OCTAGON
%}
  
for xLoop = 1:len
    edgeX=x(xLoop);
    edgeY=y(xLoop);
    %TOP ROW
    %Check top-left Area
    if edgeX>=tlsX && edgeX<=tlsX+regionSizeX && edgeY>=tlsY && edgeY<=tlsY+regionSizeY && topLeftPortion<0.25
        topLeftPortion = topLeftPortion+0.25;
    end
    %Check Top-Middle Area
    if edgeX>=tmsX && edgeX<=tmsX+regionSizeX && edgeY>=tmsY && edgeY<=tmsY+regionSizeY && topMiddlePortion<0.34
        topMiddlePortion = topMiddlePortion+0.34;
    end
    %Check Top-Right Area
    if edgeX>=trsX && edgeX<=trsX+regionSizeX && edgeY>=trsY && edgeY<=trsY+regionSizeY && topRightPortion<0.25
        topRightPortion = topRightPortion+0.25;
    end
    
    %MIDDLE ROW
    %Check middle-left area
    if edgeX>=mlsX && edgeX<=mlsX+regionSizeX && edgeY>=mlsY && edgeY<=mlsY+regionSizeY
       middleLeftPortion= middleLeftPortion+1;
    end
    %Check middle-right area
    if edgeX>=mrsX && edgeX<=mrsX+regionSizeX && edgeY>=mrsY && edgeY<=mrsY+regionSizeY
       middleRightPortion = middleRightPortion+1;
    end
    
    %BOTTOM ROW
     %Check bottom-left Area
    if edgeX>=blsX && edgeX<=blsX+regionSizeX && edgeY>=blsY && edgeY<=blsY+regionSizeY && downLeftPortion<0.25
        downLeftPortion = downLeftPortion+0.25;
    end
    %Check bottom-Middle Area
    if edgeX>=bmsX && edgeX<=bmsX+regionSizeX && edgeY>=bmsY && edgeY<=bmsY+regionSizeY && downMiddlePortion<0.34
        downMiddlePortion = downMiddlePortion+0.34;
    end
    %Check bottom-Right Area
    if edgeX>=brsX && edgeX<=brsX+regionSizeX && edgeY>=brsY && edgeY<=brsY+regionSizeY &&downRightPortion<0.25
        downRightPortion = downRightPortion+0.25;
    end
end %end of xLoop

%{ 
Analysis based on recommendations from this paper>> 
AUTOMATIC DETECTION AND CLASSIFICATION OF TRAFFIC SIGNS
By Carlos Filipe Paulo, Paulo Lobato Correia 
                          
sqp = tl + tr + bl + br (5) - Square
tup = 1.32 ×(bl + br) + tc ?1.1×(tl + tr) (6) - Upward pointing rectangle
tdp = 1.32 ×(tl + tr) + bc ?1.1× (bl + br) (7) - downward pointing rectangle
 %}

rectangleChance = topRightPortion+topLeftPortion+downLeftPortion+downRightPortion;
triangleUpChance = (1.32*(downLeftPortion+downRightPortion)) + (topMiddlePortion - (1.1*(topLeftPortion+topRightPortion)));
triangleDownChance = (1.32*(topLeftPortion+topRightPortion)) + (downMiddlePortion - (1.1*(downLeftPortion+downRightPortion)));
chances = [rectangleChance triangleUpChance triangleDownChance];

%fprintf('Shape Analysis For Traingles and Rectangles Done\n');
%sprintf('Rectangle Presence Chance: %f%%\n', rectangleChance);
%sprintf('Triangle (Up) Presence Chance: %f%%\n', triangleUpChance);
%sprintf('Triangle (Down) Presence Chance: %f%%\n', triangleDownChance);
end