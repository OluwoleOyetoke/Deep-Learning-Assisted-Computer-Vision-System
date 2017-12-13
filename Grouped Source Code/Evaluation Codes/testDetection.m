function [] = testDetection( detectionTestImageLocation )
%{
---------------------------------------------------------------------------
%testDetection Used to test the traffic sign detection performance 

STEPS
1. Connect to folder
2. Loop through all scene images (images labeled 'scenex.jpg' x=1,2,3.....
3. Pass each image through detection system
4. Display result

   Created on: 3rd July, 2017
   Author: Oluwole Oyetoke Jnr
   Using MATLAB 2016
---------------------------------------------------------------------------
%}


%INPUT VALIDATION AND IMAGE PREPARATION
%--------------------------------------------------------------------------
if nargin ~= 1
    error('testDetection:Input_Argument_Error','This function works with. 1 input argument -detectionTestImageLocation- ')
end

%SET IMAGE SIZE
xSize = 300;
ySize = 300;

%LOCATE IMAGE FOLDER
detectionImagePath = fullfile(detectionTestImageLocation, '*jpg');
try
    %Loads all the content of the  detectionImagePath folder that ends with
    %.jpg
    detectionImageStruct = dir([detectionImagePath]); 
catch
    error('testDetection:Detection_Image_Location_Error','Error Encounterd When Loading Detection Images From Folder')
end

noOfImages = length(detectionImageStruct);

%LOAD DETECTION IMAGE
try
defImg = imread(fullfile(detectionTestImageLocation,'nothingDetected.jpg'));
defaultImage = imresize(defImg, [xSize ySize]);
catch
    error('testDetection:Detection_Image_Location_Error','Error Encounterd When Loading Default Detection Images From Folder')    
end
fprintf('Detecton Test Analysis in Progress.....\n');
%--------------------------------------------------------------------------



%PICK EACH IMAGE AND PERFORM DETECTION TEST ON IT
%--------------------------------------------------------------------------
for loopCount = 1:noOfImages
    %select image
     imageLocation =    fullfile(detectionTestImageLocation, detectionImageStruct(loopCount).name);
     im = imread(imageLocation);
     sceneAvailable=0;
     
        image = imresize(im, [xSize ySize]); %Resize image
        [xDim, yDim, zDim] = size(image); %Check if image is coloured
        if (zDim<3)
            error('testDetection:Image_Format_Error','This function works with coloured images')
        end

     %Perform detectioin
    [ROI sceneAvailable] = miniSceneClassifier(image);
    %if detected
    if sceneAvailable==1
            %Create Diplay Figure Panel
            %Test Image Plot
            subplot(1,2,1); imshow(uint8 (image));
            testImgTitle = sprintf('ORIGINAL INPUT IMAGE:');
            titleHandler = title(testImgTitle);
            set(titleHandler, 'FontSize', 9);
            
            %Show Detected Image
            subplot(1,2,2); imshow(uint8 (image));
            testImgTitle2 = sprintf('DETECTED:');
            titleHandler2 = title(testImgTitle2);
            set(titleHandler2, 'FontSize', 9);
            hold on;
            rectangle('Position',ROI, 'EdgeColor', 'g', 'LineWidth', 3);
            drawnow;      
    else
        %Create Diplay Figure Panel
            %Test Image Plot
            subplot(1,2,1); imshow(uint8 (image));
            testImgTitle = sprintf('ORIGINAL INPUT IMAGE');
            titleHandler = title(testImgTitle);
            set(titleHandler, 'FontSize', 9);
            
            %Show Detected Image
            subplot(1,2,2); imshow(uint8 (defaultImage));
            testImgTitle2 = sprintf('SIGN DETECTED');
            titleHandler2 = title(testImgTitle2);
            set(titleHandler2, 'FontSize', 9);
            drawnow;   
    end %end of if
    pause(3);
end %end of loopCount
%--------------------------------------------------------------------------
end %end of function
%--------------------------------------------------------------------------



%MINI SCENE CLASSIFIER
%--------------------------------------------------------------------------
function [ROI sceneAvailable] = miniSceneClassifier(img)

%GET REGION OF INTEREST THROUGH COLOUR SEGMENTATION
%--------------------------------------------------------------------------
windowSize = 20;
stepSize=10;
 %if 1/20th of the region or more is bright, indicate as possible region
beacon = ceil((windowSize*windowSize)/20);
[detectedRegion regionAvailable ROI] = getROI(img, windowSize, stepSize,beacon);
%--------------------------------------------------------------------------

%IF REGION IS DETECTED, TEST FURTHER (SHAPE ANALYSIS)
%--------------------------------------------------------------------------
if regionAvailable~=0
   % imshow(detectedRegion); 
%Edge detection
edgedRegion = detectEdge(detectedRegion);

%Circle Detection
[circleAvailable circleStrength] = detectCircle(detectedRegion);

%Detect corners
[x y] = detectCorner(edgedRegion);

%Analyse/search for the presence of shapes (triangle, square, octagon)
[availableShapes] = shapeAnalyser(detectedRegion);
confirmedTriangle = availableShapes(1);
confirmedSquare = availableShapes(2);
confirmedOctagon =availableShapes(3);

%Analyse critical areas again, for the presence of triangles and rectangles
[chances, shrinks] = analyseCriticalAreas(edgedRegion, x, y);
squareAvailable = chances(1);
triangleUpAvailable = chances(2);
triangleDownAvailable = chances(3);

%Classify what is seen
if circleAvailable==1 || confirmedTriangle==1 || confirmedSquare==1 || confirmedOctagon==1 || triangleDownAvailable==1 || triangleUpAvailable==1
     sceneAvailable=1;
else
   imshow(detectedRegion) %Display potential region
   sceneAvailable=0;
end

else  
  sceneAvailable=0;  
end
end %end of mini classifier
%--------------------------------------------------------------------------





