function [chances, shrinks] = analyseCriticalAreasTestBench()

imagePath = 'C:\Users\Oluwole_Jnr\Desktop\University of Leeds\Main Project\Project_MATLab\Training\Detection Images\scene28.jpg';
img = uint8 (imread(imagePath));
img = imresize(img, [500 500]); 
grayDetectedRegion  = getGrayScale( img );
[x y] = detectCorner(grayDetectedRegion); %MATLAB
edgedRegion = detectEdge(grayDetectedRegion);
[chances, shrinks] = analyseCriticalAreas(edgedRegion, x, y);

end