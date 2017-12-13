function [] = createIMDB(trainingImageLocation, dumpSpace)
%createIMDB: Function used to create IMDB
%   Function scans through the real image database on the computer and
%   creates the IMDB of well labeled and classified images. Meta data such
%   as image categorizations are also included in the created db to guide
%   any user who might need to use the IMDB in the future
%   70 percent of the data is used for training
%   20 percent for validation
%   10 percent reserved for testing
%   TrainingSet  : to fit the parameters [i.e., weights]
%   ValidationSet: to tune the parameters [i.e., architecture]
%   Testset      : to assess the performance [i.e. predictive power]


%{
   Created on: 31st March, 2017
   Author: Oluwole Oyetoke Jnr
   Using MATLAB 2016
%}

%Validation
if nargin ~= 2
    error('createIMDB:Input_Argument_Error','This function works with 2 input argument -trainingImageLocation, dumpSpace- ')
end

%IMDB Creation Start Time
datenow = datetime('now','Format','dd-MMM-yyyy HH:mm:ss');
fprintf('Start Time: %s\n\n',datenow);

%Create an empty IMDB structure
imdb = struct();
categories = {'speed_20', 'speed_30','speed_50','speed_60','speed_70',...
    'speed_80','speed_less_80','speed_100','speed_120',...
    'no_car_overtaking','no_truck_overtaking','priority_road',...
    'priority_road_2','yield_right_of_way','stop','road_closed',...
    'maximum_weight_allowed','entry_prohibited','danger','curve_left',...
    'curve_right','double_curve_right','rough_road','slippery_road',...
    'road_narrows_right','work_in_progress','traffic_light_ahead',...
    'pedestrian_crosswalk','children_area','bicycle_crossing',...
    'beware_of_ice','wild_animal_crossing','end_of_restriction',...
    'must_turn_right','must_turn_left','must_go_straight',...
    'must_go_straight_or_right','must_go_straight_or_left',...
    'mandatroy_direction_bypass_obstacle',...
    'mandatroy_direction_bypass_obstacle2', ...
    'traffic_circle','end_of_no_car_overtaking',...
    'end_of_no_truck_overtaking'};

datasets = {'train', 'validate', 'test'};

%To Create an IMDB scaled to a different size, simply change netInputSize
netInputSize = [32 32];

%.ppm (portable pixmap format) is used in this project
primaryTrainingDataPath = trainingImageLocation;

try
    %Loads all the content of the  training folder
    trainingFolderStruct = dir([primaryTrainingDataPath]);
catch
    error('createIMDB2:Traing_Image_Location_Error','Error Encounterd When Loading Image Data From Folder')
end
[noOfTrainingFolders d] = size(trainingFolderStruct);
dirFlags = [trainingFolderStruct.isdir];
subFolderList = trainingFolderStruct(dirFlags);


%Loop through the training image folder to get total number of images in DB
%Main folder contains subfolders of images for each training class
imageCount=0;
for mainLoopCount = 3:noOfTrainingFolders
    secondaryTrainingDataPath = fullfile(primaryTrainingDataPath,...
        subFolderList(mainLoopCount).name, '*.ppm');
    subFolderStruct = dir([secondaryTrainingDataPath]);
    noOfContents2= numel(subFolderStruct);
    imageCount =imageCount+noOfContents2;
    % fprintf('Number of Images in Training Class %s = %d\n', ...
    %subFolderList(mainLoopCount).name, noOfContents2);
end
fprintf('Number of Training Images in Total: %d\n', imageCount);


%Initialize part of the imdb structure
imdb.meta.sets = {'train', 'validate', 'test'};

%Possible Image Categories
imdb.meta.categories = categories;

%AlexNet Uses 227 by 227 by 3 images
imdb.images.data = ones(netInputSize(1), netInputSize(2), 3, imageCount, 'single');
imdb.images.labels = ones(1,imageCount, 'single'); %Image label
% vector indicating to which set an image belong,
%i.e., % training, validation, test etc.
imdb.images.set = ones(1, imageCount, 'uint8');

fprintf('Each image will be resized to %d by %d by 3 \n', netInputSize(1), netInputSize(2));

%Loop through Dataset, appropriately dimension all contents, label,
%classify and place in sets
imageCounter=1;
for mainLoopCount = 3:noOfTrainingFolders
    
    actualPos = mainLoopCount-2;
    toWorkOn = char (categories(actualPos));
    fprintf('%d. Loading and working on training, validation and test images for '' %s '' traffic sign\n',actualPos, toWorkOn);
    secondaryTrainingDataPath = fullfile(primaryTrainingDataPath,...
        subFolderList(mainLoopCount).name, '*.ppm');
    
    %Get only .ppm contnets of the folder
    subFolderStruct = dir([secondaryTrainingDataPath]);
    
    
    %Get no. of contents in folder
    noOfContents2= numel(subFolderStruct);
    
    if(noOfContents2<10)
        error('createIMDB2:Image_Class_Error',...
            'Every Class in the dataset should contain at least 10 images')
    end
    
    %Get Number of images to be used for training, validation and testing
    trainNo = floor(0.7* noOfContents2);
    valNo = floor(0.2* noOfContents2);
    testNo = floor(0.1* noOfContents2);
    total =trainNo+valNo+testNo;
    if(total<noOfContents2)
        difference = noOfContents2 - total;
        trainNo = trainNo+difference;
    elseif (total>noOfContents2)
        difference = total-noOfContents2;
        trainNo = trainNo-difference;
    end
    fprintf('Out of a total of %d images in this class %d will be used for training, %d for validation and %d for testing\n', total, trainNo, valNo, testNo);
    setBank = getSetPositions(trainNo, valNo, testNo);
    
    for innerLoopCount = 1:noOfContents2
        
        pathToImage= fullfile(primaryTrainingDataPath, subFolderList(mainLoopCount).name, subFolderStruct(innerLoopCount).name);
        
        imageRead = imread(pathToImage);
        
        %Check to make sure image contains 3 channels. AlexNet works with 3
        %channels
        [xDim yDim zDim] = size(imageRead);
        threeDImage = imageRead;
        if (zDim==1)
            threeDImage = cat(3, imageRead, imageRead, imageRead);
        end
        
        
        %Resize Image to acceptable AlexNet Input size [227 227 3]
        properSizedImageData = threeDImage;
        if(xDim~=netInputSize(1) || yDim~=netInputSize(2))
            properSizedImageData = imresize(threeDImage, [netInputSize(1) netInputSize(2)], 'bilinear');
        end
        
        %Set image back into DB & apply all related meta information
        %AlexNet Uses 227 by 227 by 3 images
        %Load in Image Data. Stack of 3 channels
        imdb.images.data(:,:,1,imageCounter) = properSizedImageData(:,:,1);
        imdb.images.data(:,:,2,imageCounter) = properSizedImageData(:,:,2);
        imdb.images.data(:,:,3,imageCounter) = properSizedImageData(:,:,3);
        
        %Assign Label to image
        %categories(mainLoopCount-2);
        imdb.images.labels(1,imageCounter) = mainLoopCount-2;
        
        %datasets(1) = Training, datasets(2) = Validate datasets(3)= Test
        imdb.images.set(1, imageCounter) = setBank(innerLoopCount);
        
        imageCounter = imageCounter+1;
        
    end %Inner Loop
    percentageCompleted = uint8 ((imageCounter*100)/imageCount);
    fprintf('%d%% completed so far\n\n', percentageCompleted);
end %Main Loop


%Save IMDB
fprintf('Saving IMDB file\n');
filename = fullfile(dumpSpace, 'Traffic_Sign_IMDB(GSTBR)_All_32by32.mat');
save(filename, 'imdb');

datenow2 = datetime('now','Format','dd-MMM-yyyy HH:mm:ss');
fprintf('End Time: %s\n\n',datenow2);


d1=datenum(datenow);    % convert to number
d2=datenum(datenow2);   % convert to number
difference=d2-d1;       % difference between the two
days = floor(difference);
hrs = datestr(difference, 'HH');
mins = datestr(difference, 'MM');
seconds = datestr(difference, 'SS');
% difference in days:hr:min:sec

%Escape random number generator legacy mode
rng('default');

fprintf('Overall Time Taken: %d day(s), %s hour(s), %s minute(s), %s second(s) \n\n',days, hrs, mins, seconds);

end



%Function used to pick random images for test, validate and train
function allocationSpots = getSetPositions(trainNo, valNo, testNo);
total = trainNo+valNo+testNo;
perms = randperm(total);

trainPositions = perms(1:trainNo);
valPositions = perms(trainNo+1:trainNo+valNo);
testPositions = perms(trainNo+valNo+1:trainNo+valNo+testNo);

allocationSpots = zeros(total,1);

for i=1:total
    if(ismember(i,trainPositions))
        allocationSpots(i) = 1;
    elseif(ismember(i,valPositions))
        allocationSpots(i) = 2;
    elseif(ismember(i,testPositions))
        allocationSpots(i) = 3;
    end
end


end