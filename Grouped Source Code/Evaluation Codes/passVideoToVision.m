function [] = passVideoToVision()
%{
---------------------------------------------------------------------------
passVideoToVision stream traffic video to the scene and image classifier 

STEPS
1. Get trained neural network
2. Connect to traffic scene video
3. Get each frame video and resize to 300x300
4. Perform scene classification/detect sign
5. Classify detected sign (if any)

   Created on: 22nd June, 2017
   Author: Oluwole Oyetoke Jnr
   Using MATLAB 2016
---------------------------------------------------------------------------
%}

LASTN = maxNumCompThreads(2);

%Get Network
netPath = 'C:\Users\Oluwole_Jnr\Desktop\University of Leeds\Main Project\Project_MATLab\Training\DumpSpace\net-epoch-20.mat';
network = load(netPath);
net = network.net;

%Get IMDB
imdbPath = 'C:\Users\Oluwole_Jnr\Desktop\University of Leeds\Main Project\Project_MATLab\Training\My IMDB Space\Traffic_Sign_IMDB(GSTBR)_All_32by32.mat';
imm = load(imdbPath);
imdb = imm.imdb;

%Get Video Data
%videoFReader   = vision.VideoFileReader('C:\Users\Oluwole_Jnr\Desktop\University of Leeds\Main Project\Project_MATLab\Training\Detection Videos\Demo.mp4');
videoFReader   = vision.VideoFileReader('C:\Users\Oluwole_Jnr\Desktop\University of Leeds\Main Project\Project_MATLab\Training\Detection Videos\Flemish Project_1_Reduced.avi');
%videoFReader   = vision.VideoFileReader('C:\Users\Oluwole_Jnr\Desktop\University of Leeds\Main Project\Project_MATLab\Training\Detection Videos\Leeds_Armley.mp4');
%videoFReader   = vision.VideoFileReader('C:\Users\Oluwole_Jnr\Desktop\University of Leeds\Main Project\Project_MATLab\Training\Detection Videos\Leeds_Armley_Blur.mp4');
%videoFReader   = vision.VideoFileReader('C:\Users\Oluwole_Jnr\Desktop\University of Leeds\Main Project\Project_MATLab\Training\Detection Videos\Leeds_British Gas_2.mp4');
%videoFReader    = vision.VideoFileReader('C:\Users\Oluwole_Jnr\Desktop\University of Leeds\Main Project\Project_MATLab\Training\Detection Videos\Leeds_British_Gas_1.3gp');
%videoFReader   = vision.VideoFileReader('C:\Users\Oluwole_Jnr\Desktop\University of Leeds\Main Project\Project_MATLab\Training\Detection Videos\Leeds_Headrow.mp4');
%videoFReader   = vision.VideoFileReader('C:\Users\Oluwole_Jnr\Desktop\University of Leeds\Main Project\Project_MATLab\Training\Detection Videos\Leeds_Headrow_2.mp4');
%videoFReader   = vision.VideoFileReader('C:\Users\Oluwole_Jnr\Desktop\University of Leeds\Main Project\Project_MATLab\Training\Detection Videos\Traffic Sign Detection and Recognition CNN.mp4');
%videoFReader   = vision.VideoFileReader('C:\Users\Oluwole_Jnr\Desktop\University of Leeds\Main Project\Project_MATLab\Training\Detection Videos\Walk.avi');


depVideoPlayer = vision.DeployableVideoPlayer;

cnt=0;
sceneAvailable = 0;

%Extract per video frame and pass through detector/classifier
cont = ~isDone(videoFReader);
xDim=500;
yDim=500;
zDim=3;
 while cont
    frame = step(videoFReader);
    frame = imresize(frame, [500 500]); %Resize image
    %[xDim, yDim, zDim] = size(frame); %Check if image is coloured
%if (zDim<3)
% error('runVision:Image_Format_Error','This function works with coloured images')
%end

sceneAvailable = 0;
%if cnt==29 %Every 2 seconds
tic
[ROI sceneAvailable detectedRegion] = sceneClassifier(frame);
detectionTime = toc;
cnt=0;
%end

if sceneAvailable==1
    %Send ROI to classifier
    classTimeStart = tic;
    [str bestScore prediction] = classifyImage(im2uint8(detectedRegion), net);
    classificationTime = toc(classTimeStart);
    %Highlight ROI using green square
    frame = insertShape(frame,'rectangle',ROI,'LineWidth',3, 'Color', 'green'); 
    
    %Attempt to watermark video stream with detected image details
     [predictedImgPositions] = find(imdb.images.labels == prediction);
     sampleOfPredicted = imdb.images.data(:,:,:,predictedImgPositions(1,1));
     sampleOfPredicted = im2double(uint8(sampleOfPredicted));
     frame(((yDim-70):(yDim-70+31)),(15:46), :) = sampleOfPredicted((1:32),(1:32),:); %Because sample images are 32 by 32 sized 
     %Add predected sign name to the bottom left of the frame
     bestScore = bestScore*100;
     str = strcat('DETECTED SIGN:- ',str, ' (Assurance: ','  ', num2str(bestScore), '%)'); 
     
     %Add computation time to video
     detectionTimeStr = num2str(detectionTime);
     classificationTimeStr = num2str(classificationTime);
     ctStr = strcat('CLASSF. TIME (s):- ',classificationTimeStr, ' second(s) ');
     dtStr = strcat('DETECTION TIME (s):- ',detectionTimeStr, ' second(s) ');
     
     textPos = [0 (yDim-30); 0 0; 0 30];
     txt{1}=str;txt{2}=dtStr;txt{3}=ctStr;
     frame = insertText(frame, textPos, txt, 'FontSize', 12, 'BoxColor', 'red', 'BoxOpacity', 0.4, 'TextColor', 'white', 'Font', 'Cambria');
     
     %Redepoly frame
     step(depVideoPlayer, frame);
     cont = ~isDone(videoFReader) && isOpen(depVideoPlayer);
else
     step(depVideoPlayer, frame);
     cont = ~isDone(videoFReader) && isOpen(depVideoPlayer);
end %End of if
cnt=cnt+1;
 end %End of while loop
 
 %Release objects
 release(videoFReader);
 release(depVideoPlayer);

end %End of function
