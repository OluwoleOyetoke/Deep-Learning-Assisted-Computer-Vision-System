function [availableShapes, edgedRegion] = shapeAnalyser(edgedRegion);
%{
detectTriangle: Uses Hough Transform to detect the presence of triangles,
octagons, diamonds, rectangles and square shapes in an image.

STEPS
1. Get Image and convert to grayscale/Input image as gray scale already
2. Perform edge detection on image
3. Create hough parameter space, a 2D array (?,?) with maximum ? length 
   spanning the diagonal length of the image and maximum ? spaning 180. 
4. Initialize hough parameter space to zero
5. Loop through entire image and for every active pixel on co-ordinate x,y,
   calculate as many (?,?) values associated with it by varying ? between -90 and 89.
6. For every pixel which has a line lying on (?,?), increment the value stored in (?,?) by 1
7. After looping through all the relevant pixels of the image and 
   incrementing (?,?) appropriately in the hough parameter space, 
   search through the hough parameter space for the peak values. 
   The (?,?)  accomoating this peak values can be used to draw the detected lines.
8. Find angles between detected lines. 
        a.	If three or more lines have angles of 60 degrees with each 
            other, then a triangle is most likely present
        b.	If eight or more lines that have angles 135 degrees exist, 
            then an octagon is most likely present
        c.	If four or more lines exist that have angles 90 degrees,  
            then a square, rectangle or diamond is most likely present


   Created on: 1st July, 2017
   Author: Oluwole Oyetoke Jnr
   Using MATLAB 2016

%}

%INPUT VALIDATION AND IMAGE TRANSFORMATION
%--------------------------------------------------------------------------
%if nargin ~= 1
%    error('shapeAnalyser:Input_Argument_Error','This function works with 1 input argument -inputImg- ')
%end 

RESOLUTION = 1;
HOUGHTHRESHFACTOR = 0.7;
PIXELTHRESHFACTOR = 0.3;


%EDGE DETECTION
%--------------------------------------------------------------------------
%[edgedRegion] = detectEdge(img);
[xDim, yDim, zDim] = size(edgedRegion);
[maxPixVal index] = max(edgedRegion(:));
%--------------------------------------------------------------------------


%CREATE ACCUMULATOR AND VARIABLES
%--------------------------------------------------------------------------
tethaMin = -90;
tethaMax=90;
maxRadius = ceil(sqrt((xDim*xDim) + (yDim*yDim)));
Tethas = tethaMin:RESOLUTION:(tethaMax-RESOLUTION);
Rhos = -maxRadius:RESOLUTION:(maxRadius-RESOLUTION);
rhoRange = length(Rhos);
tethaRange = length(Tethas); 
parameterSpace = zeros(rhoRange, tethaRange);

%Create sine and cos look up table
[sineTable cosTable] = createSineCosLUT(Tethas);
%--------------------------------------------------------------------------



%GET RHO AND THETAs
%--------------------------------------------------------------------------
for x = 1:xDim %Loop through x pixels
    for y = 1:yDim %Loop through y pixels
        if edgedRegion(x,y)>=(PIXELTHRESHFACTOR*maxPixVal)
            for tetha = 1:tethaRange
                %x and y switch positions due to MATLAb x,y matrix/image co-ordinate system
                rho = ceil((y*cosTable(1,tetha)) + (x*sineTable(1,tetha))); 
                if rho>=-maxRadius && rho<=(maxRadius-RESOLUTION)
                rhoIndex = round((rhoRange/2)+rho+RESOLUTION);
                parameterSpace(rhoIndex,tetha) = parameterSpace(rhoIndex,tetha)+1;
                end
            end
        end
    end
end
%--------------------------------------------------------------------------



%FIND PEAKS IN HOUGH SPACE AND PLOT
%--------------------------------------------------------------------------
%Locate 10 most prominent peaks
%P = houghpeaks(parameterSpace,10,...
 %   'threshold',ceil(HOUGHTHRESHFACTOR*max(parameterSpace(:)))); 
%imshow(parameterSpace,[],'XData',Tethas,'YData',Rhos,'InitialMagnification','fit');
%xlabel('\theta'), ylabel('\rho');
%axis on, axis normal, hold on;
%plot(Tethas(P(:,2)),Rhos(P(:,1)),'s','color','white');
%title('Hough Matrix');
%--------------------------------------------------------------------------



%FIND DOMINANT LINES
%--------------------------------------------------------------------------
lineRhos= zeros(1,1);
lineTethas = zeros(1,1);
[maxVal index] = max(parameterSpace(:));
[maxI maxJ]=ind2sub([rhoRange tethaRange],index);
THRESHOLD = ceil(HOUGHTHRESHFACTOR*maxVal);
numDetected=0;

if maxVal >=20 %At least a line as long as 20 pixels has to be present
parameterSpaceMask = (parameterSpace>=THRESHOLD);
numDetected = sum(sum(parameterSpace>=THRESHOLD));
[row, col] = find(parameterSpaceMask==1);
lineRhos = Rhos(1, row);
lineTethas = Tethas(1, col);
end %End of if
%--------------------------------------------------------------------------



%PLOT DISCOVERED LINES (MANUAL)
%--------------------------------------------------------------------------
xStart = 1;
xEnd = yDim; 
%figure, imshow(uint8(inputImg)), hold on
%If more a line is detected
if numDetected >=1
    xStartArray = zeros(1,numDetected);
    xEndArray = zeros(1,numDetected);
    yStartArray = zeros(1,numDetected);
    yEndArray = zeros(1,numDetected);
    for i=1:numDetected
        
        r = lineRhos(1,i);
        angle = lineTethas(1,i);
        if (angle == 0)
        xStartArray(1,i) = r;
        xEndArray(1,i) = r;
        yStartArray(1,i) = 1;
        yEndArray(1,i) = xDim;
        %plot([r r], [1 xDim],'LineWidth',2, 'Color', 'green');
        else
        %Compute starting y coordinate
        yStart = ceil(((-cosd(angle)/sind(angle))*xStart) + (r / sind(angle)));
        yStartArray(1,i) = yStart;
        %Compute ending y coordinate
        yEnd = ceil(((-cosd(angle)/sind(angle))*xEnd) + (r / sind(angle)));
        yEndArray(1,i) = yEnd;
        
        xStartArray(1,i) = 1;
        xEndArray(1,i) = yDim;
        
        %plot([xStart xEnd], [yStart yEnd], 'LineWidth',2,'Color','blue');
        end
        %drawnow
    end % end of for loop
else
    %Not necessary, but c coder needed it
    xStartArray = zeros(1,1);
    xEndArray = zeros(1,1);
    yStartArray = zeros(1,1);
    yEndArray = zeros(1,1);
end %end of if statement
%--------------------------------------------------------------------------



%FIND ANGLE BETWEEN LINES
%--------------------------------------------------------------------------
% The angle between two lines is the angle between their direction vectors. 
% The direction vectors of two lines can always be found by subtracting the 
% position vectors of two points on the line
xStart = 1;
xEnd = yDim; 
anglesDetected= zeros(1,(numDetected*numDetected)-numDetected);
x1 = xStart;
x2 = xEnd;
x3 = xStart;
x4 = xEnd;
y1=0;y2=0;y3=0;y4=0;ang=0;
noOfAngles=1;
if numDetected>2 %If more than two line is detected
 for i=1:numDetected
     
     y1 =  yStartArray(1,i); 
     y2 = yEndArray(1,i);
     x1 = xStartArray(1,i);
     x2 = xEndArray(1,i);
     for j=1:numDetected
          if j<=i %itself
              continue
          end
          y3 =yStartArray(1,j);
          y4 = yEndArray(1,j);
          x3 =xStartArray(1,j);
          x4 = xEndArray(1,j);
          ang = abs(atand((y2-y1)/(x2-x1))-atand((y4-y3)/(x4-x3)));
          if i==1
           anglesDetected(1,1) =  ang;
           noOfAngles=noOfAngles+1;
         else
             anglesDetected(1,noOfAngles) =  ang;
             noOfAngles=noOfAngles+1;
         end
        
     end %end of inner for loop
 end %end of for loop
end %end of if numDetected
%--------------------------------------------------------------------------



%MAKE SHAPE DECSION
%--------------------------------------------------------------------------
%if angles are detected
%noOfAngles = length(anglesDetected);
sixtyCounter=0;
one35Counter=0;
ninetyCounter=0;
if noOfAngles>=3
detected=0;
for pos = 1:noOfAngles
    detected = anglesDetected(1,pos);
    %If 3 or more lines have angles of 60 degrees then a triangle is present
    if detected>=59 && detected<=61
        sixtyCounter = sixtyCounter+1;
%If 8 or more lines that have angles 135 degrees exist, then octagon is
%present
    elseif detected>=134 && detected<=136
        one35Counter = one35Counter+1;
%If four or more lines exist that have angles 90 degrees, then square,
%rectangle or diamond exists
    elseif detected>=89 && detected<=91
        ninetyCounter = ninetyCounter+1;
    end
end %End of for loop
end %end of if length(anglesDetected)>=2

triangleAvailable =0;
squareAvailable   =0;
octagonAvailable  =0;

if sixtyCounter>=3
    triangleAvailable =1;
end
if ninetyCounter>=4
    squareAvailable=1;
end
if one35Counter>=8
    octagonAvailable = 1;
end

availableShapes = [triangleAvailable squareAvailable octagonAvailable];
%--------------------------------------------------------------------------
end %end of main function



%CREATE SINE AND COSINE LOOKUP TABLE (IMPROVES SPEED OF COMPUTATION)
%--------------------------------------------------------------------------
function [sineTable cosTable] = createSineCosLUT(Tethas)
tethaRange = length(Tethas);
sineTable = zeros(1,tethaRange);
cosTable = zeros(1,tethaRange);
for count = 1:tethaRange
    sineTable(1,count) = sind(Tethas(1,count));
    cosTable(1,count) = cosd(Tethas(1,count));
end
end %end of LUT generation function
%--------------------------------------------------------------------------