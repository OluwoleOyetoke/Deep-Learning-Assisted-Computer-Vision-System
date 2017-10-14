function [] = networkTest( imdb, network )
%networkTest Function used to test the accuracy of the AlexNet
%   Feeds the test images in the IMDB through the Network and iteratively
%   compares the network's response against the right response and
%   calculates its cumulative accuracy/error rate.

%{
   Created on: 1st April, 2017
   Author: Oluwole Oyetoke Jnr
   Using MATLAB 2016
%}

%Validation
if nargin ~= 2
    error('networkTest:Input_Argument_Error','This function works with 2 input argument -imdb, network- ')
end

%Check the IMDB meta to know set assigned for testing
sets = network.meta.sets;
row=0;
col=0;
[row,col]=find(strcmp(sets,'test'));
if(col==0)
    error('networkTest:Sets_Error','There are no designated image in imdb for testing of network');
end
testImgSet = col;


%Query user to know test type
testType = 0;
while(testType==0)
    type = input('What is type of test would you like to perform. \nManual [M], Automatic [A] or Exit [E]? (Enter ''M'', ''A'' or ''E'') : ','s');
    if ((strcmp(type, 'M')~=1) && (strcmp(type, 'A')~=1) && (strcmp(type, 'E')~=1))
        warning('networkTest:Test_Type_Input_Warning','Please enter either ''M'' or ''A''. You can Enter ''E'' to exit.\n');
    end
    
    if ((strcmp(type, 'M')==1))
        testType = 1;
        break;
    elseif ((strcmp(type, 'A')==1))
        testType = 2;
        break;
    elseif((strcmp(type, 'E')==1))
        return; %end operation
    end %end of if
end  %end of while


if(testType == 1)
    %Manual Testing Proceedure
    %Get no of test images available in DB
    [testImgPositions] = find(imdb.images.set == testImgSet);
    stop =0;
    performanceValues = [];
    performanceValues(end+1)=0; 
    pass=0;
    noOfTestCases=0;
    while(stop==0)
        goAhead = input('Press key ''T'' key to run one test iteration and ''E'' to end network testing . \nTest [T] or Exit [E]? (Enter ''T'' or ''E'') : ','s');
        if(strcmp(goAhead, 'T'))
            %Run Test
            %Rand Selection from the test set
            Loc= randi([1 length(testImgPositions)],1,1);
            selectedLoc = testImgPositions(Loc);
            testImg = imdb.images.data(:,:,:,selectedLoc);
            testImgCategory = imdb.images.labels(1,selectedLoc);
            [prediction, score] = miniClassifierFunction(testImg, network);
            
            
            
            %Create Diplay Figure Panel
            %Test Image Plot
            subplot(1,3,1); imshow(uint8 (testImg));
            testImgCatStr =network.meta.categories{testImgCategory};
            testImgCatStr = upper(strrep(testImgCatStr,'_',' '));
            testImgTitle = sprintf('ORIGINAL INPUT IMAGE:\n %s', testImgCatStr);
            titleHandler = title(testImgTitle);
            set(titleHandler, 'FontSize', 9);
            
            
            %Predicted Image Plot
            %(Get sample predicted image % prediction label)
            [predictedImgPositions] = find(imdb.images.labels == prediction);
            predictedImgCatStr =network.meta.categories{prediction};
            predictedImgCatStr = upper(strrep(predictedImgCatStr,'_',' '));
            
            %(Add watermark to image)
            I = imdb.images.data(:,:,:,predictedImgPositions(1,1));
            %txt = sprintf('Sample ''%s'' Image', predictedImgCatStr);
            txt = sprintf('Sample');
            predictedImageSample = insertText(I, [0 0], txt, 'FontSize', 7, 'BoxColor', 'red', 'BoxOpacity', 0.4, 'TextColor', 'white');
            subplot(1,3,2); imshow(uint8 (predictedImageSample));
            predictedImgTitle = title(sprintf('PREDICTED SIGN: \n%s\n[CLASS %d, SCORE %.3f]',...
                predictedImgCatStr, prediction, score));
            set(predictedImgTitle, 'FontSize', 9);
            
            
            %(Show Network Performance)
            noOfTestCases = noOfTestCases+1;
            if(prediction==testImgCategory)
                pass=pass+1;
            end
            performanceValues(end+1) = ((pass*100)/noOfTestCases);
            xAxis =  0:noOfTestCases;
            subplot(1,3,3); plt = plot(xAxis,performanceValues);
            set(plt,'LineWidth',2);
            xlabel('Number of Test Cases');
            ylabel('Percentage Accuracy');
            ylim([0 101]);
            performanceTitle = sprintf('Current Network Performance: %.3f %% Accuracy', performanceValues(end));
            titHandle = title(performanceTitle);
            set(titHandle, 'FontSize', 9);
            drawnow; %Redraw new value
            
        elseif(strcmp(goAhead, 'E'))
            fprintf('Exiting.....\n');
            stop=1;
            return; %end
        else
            warning('\nPlease enter either key ''T'' or ''E'' \n');
            
        end %End of test case/exit IF
        
    end  %End of Manual Testing While
    
elseif(testType==2)
    %Automated Testing. Get No. of test images available in DB
    [testImgPositions] = find(imdb.images.set == testImgSet);
    performanceValues = zeros(1, length(testImgPositions));
    pass=0;
    noOfTestCases=0;
    previous=0;
    fprintf('Please wait while network test goes on\n');
    for loopCount=1:length(testImgPositions)
        %Scan through DB and use test images to evaluate network
        testImg = imdb.images.data(:,:,:,testImgPositions(loopCount));
        testImgCategory = imdb.images.labels(1,testImgPositions(loopCount));
        [prediction, score] = miniClassifierFunction(testImg, network);
        %(Show Network Performance)
        noOfTestCases = noOfTestCases+1;
        if(prediction==testImgCategory)
            pass=pass+1;
        end
        performanceValues(loopCount) = ((pass*100)/loopCount);
         percentageCompleted = ((loopCount*100)/length(testImgPositions));
        if(percentageCompleted>=(10+previous))
            previous = percentageCompleted;
            fprintf('%.3f%% Completed So far\n',  percentageCompleted); 
        end
        
    end
      fprintf('Now plotting Result....\n'); 
    xAxis =  1:length(testImgPositions);
    plt = plot(xAxis,performanceValues);
    ylim([0 100]);
    set(plt,'LineWidth',2); %Make Line Thicker
    performanceTitle = sprintf('Current Network Performance: %.3f %% Accuracy (%d Test Images)', performanceValues(length(testImgPositions)),noOfTestCases);
    perfTitle = title(performanceTitle);
    set( perfTitle, 'FontSize', 12);
    xlabel('Number of Images');
    ylabel('%age Accuracy');
    drawnow; %Redraw new value
    fprintf('Done\n');
end %End of Manual Testing/Automated Testing choice IF





end %End of function


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
%Resize image according to network's allowed input dimension
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