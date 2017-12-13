function [] = runVision()
%{
---------------------------------------------------------------------------
runVision Connects to webcam and tries to perform traffic signe detection 
and classification for the image placed in front of the camera

STEPS
1. Get trained neural network
2. Activate webcam
3. Get each image taken by camera, resize to 500x500
4. Perform scene classification/detect sign
5. Classify detected sign (if any)

   Created on: 22nd June, 2017
   Author: Oluwole Oyetoke Jnr
   Using MATLAB 2016
---------------------------------------------------------------------------
%}

%Get Network
netPath = 'C:\Users\Oluwole_Jnr\Desktop\University of Leeds\Main Project\Project_MATLab\Training\DumpSpace\net-epoch-80.mat';
network = load(netPath);
net = network.net;


%Get video from webcam
camera = webcam;

while true

    %Get frames from camera
    picture = camera.snapshot;
    img = uint8(imresize(picture, [300 300]));
    [xDim, yDim, zDim] = size(img); 
%Check if image is coloured    
if (zDim<3)
 error('runVision:Image_Format_Error','This function works with coloured images')
end


sceneAvailable = 0;
[ROI sceneAvailable] = sceneClassifier(img);
if sceneAvailable==1 
     imshow(img);
     hold on;
     rectangle('Position',ROI, 'EdgeColor', 'g') 
     %regionToSend = imcrop(img,ROI);
    %Send ROI to classifier
    %classifyImage(regionToSend, net);
    drawnow;
else
    imshow(img);
    drawnow;
end %End of if statement
end %End of while loop

end %End of function

