function [circleAvailable, dummyVar] = myDetectCircleTestBench()
setGlobalVariables()
folderPath = getGlobalVariables(0);
imagePath = fullfile(folderPath, '\Training\Detection Images\scene28.jpg');
img = uint8 (imread(imagePath));
img = imresize(img, [20 20]); 
grayDetectedRegion  = getGrayScale( img );
dummyVar=1;
[circleAvailable dummyVar] = myDetectCircle(grayDetectedRegion);
end