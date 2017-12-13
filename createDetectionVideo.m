function [ output_args ] = createDetectionVideo( detectionVideoLocation )
%{
---------------------------------------------------------------------------
%createDetectionVideo: Draws detection triangle on the inputed video

STEPS
1. Connect to folder
2. Loop through all scene images (images labeled 'scenex.jpg' x=1,2,3.....
3. Pass each image through detection system
4. Display result

   Created on: 4th July, 2017
   Author: Oluwole Oyetoke Jnr
   Using MATLAB 2016
---------------------------------------------------------------------------
%}


clc;    % Clear the command window.
close all;  % Close all figures (except those of imtool.)
imtool close all;  % Close all imtool figures.
%clear;  % Erase all existing variables.
workspace;  % Make sure the workspace panel is showing.
fontSize = 22;
% Open the rhino.avi demo movie that ships with MATLAB.
% First get the folder that it lives in.
folder = detectionVideoLocation; 
%fileparts(which('Flemish Project_1.mp4')); 
% Determine where demo folder is (works with all versions).
% Pick one of the two demo movies shipped with the Image Processing Toolbox.
% Comment out the other one.
inputFullFileName = fullfile(detectionVideoLocation, 'Test Vid 5.avi');
% movieFullFileName = fullfile(folder, 'traffic.avi');
% Check to see that it exists.
if ~exist(inputFullFileName, 'file')
	strErrorMessage = sprintf('File not found:\n%s\nYou can choose a new one, or cancel', inputFullFileName);
	response = questdlg(strErrorMessage, 'File not found', 'OK - choose a new movie.', 'Cancel', 'OK - choose a new movie.');
	if strcmpi(response, 'OK - choose a new movie.')
		[baseFileName, folderName, FilterIndex] = uigetfile('*.avi');
		if ~isequal(baseFileName, 0)
			inputFullFileName = fullfile(folderName, baseFileName);
		else
			return;
		end
	else
		return;
	end
end

% Open up the VideoReader for reading an input video file.
inputVideoReaderObject = VideoReader(inputFullFileName)
% Determine how many frames there are.
numberOfFrames = inputVideoReaderObject.NumberOfFrames;
inputVideoRows = inputVideoReaderObject.Height
inputVideoColumns = inputVideoReaderObject.Width



 
% Create a VideoWriter object to write the video out to a new, different file.
outputFullFileName = fullfile(detectionVideoLocation, 'Test Video 5 (Reduced).avi');
outputVideoWriterObject = VideoWriter(outputFullFileName);
open(outputVideoWriterObject);
% Specify the output video size.
shrinkFactor = 1; % Shrink by a factor of 4 in both directions.
outputVideoRows = round(inputVideoRows / shrinkFactor);
outputVideoColumns = round(inputVideoColumns / shrinkFactor);


numberOfFramesWritten = 0;
% Prepare a figure to show the images in the upper half of the screen.
figure;
% 	screenSize = get(0, 'ScreenSize');
% Enlarge figure to full screen.
set(gcf, 'units','normalized','outerposition',[0 0 1 1]);
% Loop through the movie, writing all frames out.
for frame = 1 : numberOfFrames
	% Extract the frame from the movie structure.
	thisInputFrame = read(inputVideoReaderObject, frame);
	
	% Display it
	image(thisInputFrame);
	axis on;
	axis image;
	caption = sprintf('Frame %4d of %d.', frame, numberOfFrames);
	title(caption, 'FontSize', fontSize);
	drawnow; % Force it to refresh the window.
	
	% Resize the image and perform detection
	outputFrame = imresize(thisInputFrame, [500, 500]);
   % sceneAvailable =0;
    %[ROI sceneAvailable] = sceneClassifier(outputFrame);
    %if sceneAvailable==1
    %outputFrame = insertShape(outputFrame,'rectangle',ROI,'LineWidth',3, 'Color', 'green');         
    %else
    %do nothing
    %end %End of if
	% Write this new, resized frame out to the new video file.
	writeVideo(outputVideoWriterObject, outputFrame);
	
	% Update user with the progress.  Display in the command window.
	progressIndication = sprintf('Processed frame %4d of %d.', frame, numberOfFrames);
	disp(progressIndication);
	% Increment frame count (should eventually = numberOfFrames
	% unless an error happens).
	numberOfFramesWritten = numberOfFramesWritten + 1;
	
end
% Close the output video object.  You don't need to close the input video reader..
close(outputVideoWriterObject);


% Show input frame and output frame side by side:
subplot(1, 2, 1);
image(thisInputFrame);
axis on;
axis image;
caption = sprintf('Input Frame: %d rows by %d columns', inputVideoRows, inputVideoColumns);
title(caption, 'FontSize', fontSize);
% Show the smaller output frame.
subplot(1, 2, 2);
image(outputFrame);
axis on;
axis image;
caption = sprintf('Output Frame: %d rows by %d columns.', outputVideoRows, outputVideoColumns);
title(caption, 'FontSize', fontSize);


% Alert user that we're done.
finishedMessage = sprintf('Done!  It processed %d frames of\n"%s" and created output video\n%s.\nClick OK to see the output video.', numberOfFramesWritten, inputFullFileName, outputFullFileName);
fprintf('%s\n', finishedMessage); % Write to command window.
uiwait(msgbox(finishedMessage)); % Also pop up a message box.
% Play the movie.
winopen(outputFullFileName);

%================================================================================
% OPTIONAL: OPEN THE NEW VIDEO TO DOUBLE-CHECK/PROVE ITS SIZE.
% Open up the VideoReader for reading an input video file.
inputVideoReaderObject = VideoReader(outputFullFileName)
% Determine how many frames there are.
numberOfFrames = inputVideoReaderObject.NumberOfFrames;
inputVideoRows = inputVideoReaderObject.Height;
inputVideoColumns = inputVideoReaderObject.Width;
fprintf('The output video has %d rows and %d columns.\n', inputVideoRows, inputVideoColumns);
%================================================================================

end

