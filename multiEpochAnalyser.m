function [performanceArray] = multiEpochAnalyser( imdb, epochOutNetLocation )
%multiNetworkAnalyser: This function analyses multiple Epochs of a network
%based on test data in the IMDB to determine the point where overfitting
%sets in
%   This function takes in the address of a file location where by multiple
%   epoch outputs of a network is saved over the training process. Test
%   analysis is run through each of the netwok structures to determine the
%   point where training most likely must have started leading to
%   overfitting. With this system designer can afford to train their
%   network over multiple epochs and just run this function to determine
%   the most optimal of the different generated networks after each stage
%   of the training process. Note that the 'epochOutNetLocation' should
%   only contain the saved network structure after the various epochs of
%   the training process. 

%{
   Created on: 1st April, 2017
   Author: Oluwole Oyetoke Jnr
   Using MATLAB 2016
%}


%Validation
if nargin ~= 2
    error('multiEpochAnalyser:Input_Argument_Error','This function works with 2 input argument -imdb, epochOutNetLocation- ')
end

%Analysis Start Time
datenow = datetime('now','Format','dd-MMM-yyyy HH:mm:ss');
fprintf('Start Time: %s\n\n',datenow);


%Check the IMDB meta to know set assigned for testing
sets = imdb.meta.sets;
row=0;
col=0;
[row,col]=find(strcmp(sets,'test'));
if(col==0)
    error('networkTest:Sets_Error','There are no designated image in imdb for testing of network');
end
testImgSet = col;


%Make sure your files are arranged in ascending numerical order e.g 01,
%02.....09, 10, 11.....
epochOutPath = fullfile(epochOutNetLocation, '*mat');

try
    %Loads all the content of the  epoch out folder
    epochOutStruct = dir([epochOutPath]); 
catch
    error('multiEpochAnalyser:Epoch_Out_Location_Error','Error Encounterd When Loading Epoch out Networks From Folder')
end
noOfNetworks = length(epochOutStruct);

 %Automated Testing. Get No. of test images available in DB
    [testImgPositions] = find(imdb.images.set == testImgSet);
    performanceArray = zeros(noOfNetworks,1);
    
    noOfTestCases=0;

fprintf('Multi Epoch Analysis in Progress.....\n');
%Pick each network and perform performance test on it
for loopCount = 1:noOfNetworks
  performance=0;
    pass=0;
     noOfTestCases=0;
    %Pick Network
    netLocation =    fullfile(epochOutNetLocation, epochOutStruct(loopCount).name);
 network = load(netLocation);
 
 %Perform Test
    for innerLoopCount = 1:length(testImgPositions)
        %Scan through DB and use test images to evaluate network
        testImg = imdb.images.data(:,:,:,testImgPositions(innerLoopCount));
        testImgCategory = imdb.images.labels(1,testImgPositions(innerLoopCount));
        [prediction, score] = miniClassifierFunction(testImg, network.net);
        noOfTestCases = noOfTestCases+1;
        if(prediction==testImgCategory)
            pass=pass+1;
        end
       
    end %end of inner loop
     %(Calculate Network Performance)
          performance = ((pass*100)/length(testImgPositions));
          networkName = epochOutStruct(loopCount).name;
          
          performanceArray(loopCount) = performance;
          percentageCompletion = uint8 ((loopCount*100)/noOfNetworks);
          fprintf('''%s'' Performance: %.3f%% Accuracy\n%d%% of process completed so far\n\n',networkName, performance, percentageCompletion);
end %end of loop accross all netowrk


%Plot performance Histogram
% Add title and axis labels. Create Label Cell arrayAdd a text string above each bin
labels = {epochOutStruct(1).name};
for i = 2:length(performanceArray)
    labels(end+1) = {epochOutStruct(i).name};
end
barr = bar(performanceArray, 'g');
ylim([0 100])
set(barr, 'EdgeColor','red','LineWidth',1);
set(gca, 'XTick', 0:length(performanceArray)-1, 'XTickLabel', labels);
tit = title('BAR GRAPH SHOWING NETWORK PERFORMANCE DISTRIBUTION');
set(tit, 'FontSize', 12);
firstNetworkName = epochOutStruct(1).name;
lastNetworkname = epochOutStruct(noOfNetworks).name;
xlab = sprintf('Networks ( %s - %s)',firstNetworkName,lastNetworkname);
xlabel(xlab);
ylabel('Network Performance (% Accuracy)');
xticklabel_rotate;

d1=datenum(datenow);    % convert to number
d2=datenum(datenow2);   % convert to number
difference=d2-d1;       % difference between the two
days = floor(difference);
hrs = datestr(difference, 'HH');
mins = datestr(difference, 'MM');
seconds = datestr(difference, 'SS');
% difference in days:hr:min:sec

fprintf('Overall Time Taken: %d day(s), %s hour(s), %s minute(s), %s second(s) \n\n',days, hrs, mins, seconds);

end



%Mini Classifier
function [prediction, bestScore] =  miniClassifierFunction(image, network);


%Check network's allowed input image dimensions
allowedXDim = network.meta.inputSize(1);
allowedYDim = network.meta.inputSize(2);
allowedzDim = network.meta.inputSize(3);

%Convert recived image type to single
im_ = single(image);  % note: 0-255 range


%Get received image dimension
[xDim yDim zDim] = size(im_);

threeDImage = im_;
%Alexnet Works with 3 channels. This might differ for other CNN models
if(zDim==1)
    threeDImage = cat(3, im_, im_, im_);
end

properSizedImageData = threeDImage;
%Resize image accoeding to network's allowed input dimension
if(xDim~=allowedXDim || yDim~=allowedYDim)
    properSizedImageData = imresize(threeDImage, [allowedXDim allowedYDim], 'bilinear');
end

%Subtract network's image mean from the incoming test image
properSizedImageData =  properSizedImageData - network.meta.ImageMean(1);

%Remove the loss part of the softmax layer
network.layers{end}.type = 'softmax';

% run the input image through the CNN
result = vl_simplenn(network, properSizedImageData);

% obtain and analyze the CNN otuput
scores = squeeze(gather(result(end).x)) ;
[bestScore, prediction] = max(scores);

end

