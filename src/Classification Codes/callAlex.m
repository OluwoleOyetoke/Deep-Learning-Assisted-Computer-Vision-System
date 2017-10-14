function [net_alexnet, info ] = callAlex(IMDBLocation, dumpLocation)
%callAlex: Used to call the training process for alexnet
%   Function preprocesses the training and validation image as well as
%   create the needed imdb from the folder of image data sets available

%Validation
if (nargin ~= 2)
 error('callAlex:Input_Argument_Error','This function works with 2 input arguments -IMDBLocation, dumpLocation- ');
end

%Training Start Time
datenow = datetime('now');
fprintf('Start Time: %s\n\n',datenow);


imdbHandler = load (IMDBLocation);

% perform training using AlexNet architecture
[net_alexnet, info] = AlexNetNN(imdbHandler.imdb, dumpLocation );

% Save the trained model
try
saveLocation = fullfile(dumpLocation, 'Trained_Alexnet_Traffic_Sign_32by32by3_beta');
save(saveLocation, '-struct', 'net');
catch
 fprintf('Had Difficulty Saving Beta File');   
end

try
net_alexnet.layers(end) = [] ;
saveLocation = fullfile(dumpLocation, 'Trained_Alexnet_Traffic_Sign_32by32by3');
save(saveLocation, '-struct', 'net');
catch
     fprintf('Had Difficulty Saving Main File');  
end

%Training End Time
datenow2 = datetime('now');
fprintf('End Time: %s\n\n',datenow2);


d1=datenum(datenow);    % convert to number
d2=datenum(datenow2);   % convert to number
difference=d2-d1;       % difference between the two
timeSpent = datestr(difference,'HH:MM:SS'); 

fprintf('Overall Training Time Taken: %s\n\n',timeSpent);
end

