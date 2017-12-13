function [net  trainingInfo] = AlexNetNN( imageDB, dumpLocation );
%AlexNetNN: Used to Create AlexNet and Train it based on specified imageDB
%   Creates A SimpleNN AlexNet Network, initializes its weight values and
%   trians it based on the suplied ImageMDB over several Epochs
%{
            Created on: 31st March, 2017
             Author: Oluwole Oyetoke Jnr
             Using MATLAB 2016

            AlexNet NETWORK OVERVIEW
AlexNet Structure: 60 million Parameters
8 layers in total: 5 Convolutional and 3 Fully Connected Layers
[227x227x3] INPUT
[55x55x96] CONV1: 96 11x11 filters at stride 4, pad 0
[27x27x96] MAX POOL1: 3x3 filters at stride 2
[27x27x96] NORM1: Normalization layer
[27x27x256] CONV2: 256 5x5 filters at stride 1, pad 2
[13x13x256] MAX POOL2: 3x3 filters at stride 2
[13x13x256] NORM2: Normalization layer
[13x13x384] CONV3: 384 3x3 filters at stride 1, pad 1
[13x13x384] CONV4: 384 3x3 filters at stride 1, pad 1
[13x13x256] CONV5: 256 3x3 filters at stride 1, pad 1
[6x6x256] MAX POOL3: 3x3 filters at stride 2
[4096] FC6: 4096 neurons
[4096] FC7: 4096 neurons
[1000] FC8: 43 neurons (class scores)

•	Every fully-connected Layer has 4096 neurons
•	Max-pooling layers follow first, second, and fifth convolutional layers
•	Response-normalization layers follow the first and second convolutional layers
•	The ReLU non-linearity is applied to the output of every convolutional and fully-connected layer
%}

% Install and compile MatConvNet Library (needed only once).
untar('http://www.vlfeat.org/matconvnet/download/matconvnet-1.0-beta23.tar.gz') ;
cd matconvnet-1.0-beta23
run matlab/vl_compilenn;

% Setup MatConvnet.
run matlab/vl_setupnn;

%Choose SimpleNN network type. There also exists the Directed Acyclic Graph
%(DagNN). An object-oriented wrapper for CNN with complex topologies
opts.networkType = 'simplenn' ;

%Switch away from MATLab lagacy random number generator method (caution)
rng('default');
rng(0);

%create empty layer struct where the AlexNet network will be modeled into
net.layers = {} ;
networkInputSize= [227 227 3];



%Validation
if (nargin ~= 2)
 error('AlexNetNN:Input_Argument_Error','This function works with 2 input arguments -imageDB, dumpLocation- ');
end


%BEGINING OF NETWORK DEFINITION

%FIRST CONVOLUTIONAL BLOCK
%The first convolutional layer filters the 227×227×3 input image with
%96 kernels of size 11×11×3 with a stride of 4 pixels. Bias of 1. Padding
%of 20 will be used here if the image has been scaled down to 32 by 32 by 3
net.layers{end+1} = struct('type', 'conv', ...
    'weights', {initializeWeights(11,11,3,96)}, ...
    'stride', 4, ...
    'pad', 0, ...
    'name', 'conv1') ;
net.layers{end+1} = struct('type', 'relu', 'name', 'relu1') ;
net.layers{end+1} = struct('type', 'lrn', 'name', 'lrn1') ;
net.layers{end+1} = struct('name', 'pool1_cv_layer1', ...
    'type', 'pool', ...
    'method', 'max', ...
    'pool', [3 3], ...
    'stride', 2, ...
    'pad', 0) ;


%SECOND CONVOLUTIONAL BLOCK
%Divide the 96 channel blob input from block one into 48 and process
%independently
net.layers{end+1} = struct('type', 'conv', ...
    'weights', {initializeWeights(5,5,48,256)}, ...
    'stride', 1, ...
    'pad', 2, ...
    'name', 'conv2') ;
net.layers{end+1} = struct('type', 'relu', 'name', 'relu2') ;
net.layers{end+1} = struct('type', 'lrn', 'name', 'lrn12') ;
net.layers{end+1} = struct('name', 'pool2_cv_layer2', ...
    'type', 'pool', ...
    'method', 'max', ...
    'pool', [3 3], ...
    'stride', 2, ...
    'pad', 0) ;

%THIRD, FOURTH AND FIFTH CONVOLITIONAL LAYER
%The third, fourth, and fifth convolutional layers are connected to one
%another without any intervening pooling or normalization layers.


%THIRD BLOCK
%The third convolutional layer has 384 kernels of size 3 × 3 × 256
%connected to the (normalized, pooled) outputs of the second convolutional layer
net.layers{end+1} = struct('type', 'conv', ...
    'weights', {initializeWeights(3,3,256,384)}, ...
    'stride', 1, ...
    'pad', 1, ...
    'name', 'conv3') ;
net.layers{end+1} = struct('type', 'relu', 'name', 'relu3') ;


%FOURTH BLOCK
%The fourth convolutional layer has 384 kernels of size 3 × 3 × 192
net.layers{end+1} = struct('type', 'conv', ...
    'weights', {initializeWeights(3,3,192,384)}, ...
    'stride', 1, ...
    'pad', 1, ...
    'name', 'conv4') ;
net.layers{end+1} = struct('type', 'relu', 'name', 'relu4') ;


%FIFTH BLOCK
%the fifth convolutional layer has 256 kernels of size 3 × 3 × 192
net.layers{end+1} = struct('type', 'conv', ...
    'weights', {initializeWeights(3,3,192,256)}, ...
    'stride', 1, ...
    'pad', 1, ...
    'name', 'conv5') ;
net.layers{end+1} = struct('type', 'relu', 'name', 'relu5') ;
net.layers{end+1} = struct('name', 'pool3_cv_layer5', ...
    'type', 'pool', ...
    'method', 'max', ...
    'pool', [3 3], ...
    'stride', 2, ...
    'pad', 0) ;


%FULLY CONNECTED LAYER 1
%The fully-connected layers have 4096 neurons each
% with a network input of 227 by 227 by 3, and zero padding at layer 1, 
%the input to this layer should be to [6,6,256,4096] (else, [1, 1, 256]) since the 
%output from above layer will be [6x6x256]
net.layers{end+1} = struct('type', 'conv', ...
    'weights', {initializeWeights(6,6,256,4096)}, ...
    'stride', 1, ...
    'pad', 0, ...
    'name', 'fc1') ;
net.layers{end+1} = struct('type', 'relu', 'name', 'relu6') ;


%FULLY CONNECTED LAYER 2
% since the output from above is [1x1x4096]
net.layers{end+1} = struct('type', 'conv', ...
    'weights', {initializeWeights(1,1,4096,4096)}, ...
    'stride', 1, ...
    'pad', 0, ...
    'name', 'fc2') ;
net.layers{end+1} = struct('type', 'relu', 'name', 'relu7') ;




%FULLY CONNECTED LAYER 3
% since the output from above is [1x1x4096] & We need 43 output 1by1
% classfier neurons
net.layers{end+1} = struct('type', 'conv', ...
    'weights',{initializeWeights(1,1,4096,43)}, ...
    'stride', 1, ...
    'pad', 0, ...
    'name', 'fc3') ;


%Classifier layer to softmax function
net.layers{end+1} = struct('type', 'softmaxloss') ;

% Add meta parameters to the network structure
net.meta.inputSize = [networkInputSize(1) networkInputSize(2) networkInputSize(3)] ;
net.meta.trainOpts.learningRate =  0.00005; 
net.meta.trainOpts.weightDecay = 0.00005 ;
net.meta.trainOpts.batchSize = 100 ;
net.meta.trainOpts.numEpochs = 80;

net.meta.categories = imageDB.meta.categories;
net.meta.sets = imageDB.meta.sets;

%END OF NETWORK DEFINITION
% Fill in default values & Initialze the LRN with the following parameters
%PARAM = [N KAPPA ALPHA BETA] = [5 2 10E-4 0.75] OR [5 1 0.0001/5 0.75] ;
net = vl_simplenn_tidy(net) ;


%Initialize Parameter Needed For Training
opts.train.batchSize = 100; %Select Image Batch Size of 10
opts.train.numEpochs = 80; % 80 passes through the network during training
opts.train.continue = true ; %Continue from last Epoch if interrupted
opts.train.gpus = [] ; %Do not use GPU. Change to '[1]' to use
%Small LR, network might take time to converge but will be more accurate
opts.train.learningRate = 0.00005; 
%Combined with the local weight decay in the current training layer
opts.train.weightDecay = 0.0005; 
opts.train.momentum = 0.9;
opts.train.expDir = dumpLocation; %Where training output will be dumped
opts.train.numSubBatches = 1;
% getBatch options
bopts.useGpu = numel(opts.train.gpus) >  0 ;


%Before training starts take the average image out from all images in DB
%to improve speed of convergence of network and performance
imageMean = mean(imageDB.images.data(:)) ;
imageDB.images.data = imageDB.images.data - imageMean ;
net.meta.ImageMean = imageMean;


% Switch to the Requied Network type and begin Training
switch lower(opts.networkType)
    case 'simplenn'
        % Model already created above, therefore, begin Training (%set  are 1
        %the images to beused for training & set =2 are for testing)
        trainingInfo = cnn_train(net, imageDB,  @(i,b) getBatch(bopts,i,b,networkInputSize), ...
            opts.train, 'val', find(imageDB.images.set == 2)) ;
        
    case 'dagnn'
        net = dagnn.DagNN.fromSimpleNN(net, 'canonicalNames', true) ;
        net.addLayer('error', dagnn.Loss('loss', 'classerror'), ...
            {'prediction','label'}, 'error') ;
        %Add training code here if making use of DagNN 
    otherwise
        assert(false) ;
end


end

%Function used to initialize filter wieghts and bias for the network
function weights = initializeWeights(width,height,channels, depth)
%Using He's Initialization Method
var = sqrt(2/(width*height*channels));

%Filter Weights
weights{1} = randn(width,height,channels,depth,'single') * var;

%Biases Weights
weights{2} = zeros(depth,1,'single') ;
end


% Create batch of images and labels
function [im, lb] = getBatch(opts,imageDB, batch, networkInputSize)
images = imageDB.images.data(:,:,:,batch);
labels = imageDB.images.labels(1,batch);

%Check to make sure image contains 3 channels
[xDim yDim zDim] = size(images);
threeDImage = images;
if (zDim==1)
    threeDImage = cat(3, images, images, images);
end


%Resize Image to acceptable AlexNet Input size [227 227 3] || [32 32 3]
properSizedImageData = threeDImage;

if((xDim~=networkInputSize(1)) || (yDim~=networkInputSize(2)))
    %Bilinear interpolation; the output pixel value is a weighted average
    %of pixels in the nearest 2-by-2 neighborhood
    properSizedImageData =  imresize(threeDImage, ...
        [networkInputSize(1) networkInputSize(2)], 'bilinear');
end



if opts.useGpu > 0
    images = gpuArray(properSizedImageData) ;
end
im = properSizedImageData;
lb = labels;


end

