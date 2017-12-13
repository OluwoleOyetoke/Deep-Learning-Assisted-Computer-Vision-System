function [ alex  trainingInfo] = myAlexNet (imageDB)
%myAlexNet Used to Create AlexNet and Train it on desired datasets
%   Detailed explanation goes here

% Install and compile MatConvNet (needed once).
untar('http://www.vlfeat.org/matconvnet/download/matconvnet-1.0-beta23.tar.gz') ;
cd matconvnet-1.0-beta23
run matlab/vl_compilenn;

%No need to download pre trained network

% Setup MatConvalex.
run matlab/vl_setupnn;



%Create AlexNet by first of all creating a blank Directed Acyclic Graph 
%(DAG) Structure. An object-oriented wrapper for CNN with complex topologies
alex = dagnn.DagNN();

%{
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
[1000] FC8: 1000 neurons (class scores)

•	Every fully-connected Layer has 4096 neurons
•	Max-pooling layers follow first, second, and fifth convolutional layers
•	Response-normalization layers follow the first and second convolutional layers
•	Max-pooling layers follow both response-normalization layers as well as the fifth convolutional layer
•	The ReLU non-linearity is applied to the output of every convolutional and fully-connected layer
%}







    %FIRST CONVOLUTIONAL LAYER
    %The first convolutional layer filters the 227×227×3 input image with 
    %96 kernels of size 11×11×3 with a stride of 4 pixels. Bias of 1
    conv1Block = dagnn.Conv('size', [11 11 3 96], 'hasBias', true, 'stride', [4, 4], 'pad', [20 20 20 20]);
    pooling1Block = dagnn.Pooling('method', 'max', 'poolSize', [3, 3], 'stride', [2 2], 'pad', [0 0 0 0]);
    %PARAM = [N KAPPA ALPHA BETA] = [5 2 10E-4 0.75]
    resp1NormBlock = dagnn.LRN('param', [5 1 2.0000e-05 0.7500]);
    %ADDLAYER(NAME, LAYER, INPUTS, OUTPUTS, PARAMS)
    alex.addLayer('conv1',conv1Block , {'input'}, {'conv1Out'},  {'conv1f'  'conv1b'});
	alex.addLayer('relu1', dagnn.ReLU(), {'conv1Out'}, {'relu1Out'}, {});
	alex.addLayer('lrn1',resp1NormBlock , {'relu1Out'}, {'lrn1Out'}, {});
	alex.addLayer('pool1',pooling1Block , {'lrn1Out'}, {'pool1Out'}, {});

    
    %SECOND CONVOLUTIONAL LAYER
    %The second convolutional layer takes as input the (response-normalized
    %and pooled) output of the first convolutional layer and filters it with 
    %256 kernels of size 5 × 5 × 48
    conv2Block = dagnn.Conv('size', [5 5 48 256], 'hasBias', true, 'stride', [1, 1], 'pad', [2 2 2 2]);
    pooling2Block = dagnn.Pooling('method', 'max', 'poolSize', [3, 3], 'stride', [2 2], 'pad', [0 0 0 0]);
    %PARAM = [N KAPPA ALPHA BETA] = [5 2 10E-4 0.75]
    resp2NormBlock =  dagnn.LRN('param', [5 1 2.0000e-05 0.7500]);
    %ADDLAYER(NAME, LAYER, INPUTS, OUTPUTS, PARAMS)
	alex.addLayer('conv2', conv2Block, {'pool1Out'}, {'conv2Out'},  {'conv2f'  'conv2b'});
	alex.addLayer('relu2', dagnn.ReLU(), {'conv2Out'}, {'relu2Out'}, {});
	alex.addLayer('lrn2', resp2NormBlock, {'relu2Out'}, {'lrn2Out'}, {});
	alex.addLayer('pool2', pooling2Block, {'lrn2Out'}, {'pool2Out'}, {});

    
    %THIRD, FOURTH AND FIFTH CONVOLITIONAL LAYER
    %The third, fourth, and fifth convolutional layers are connected to one 
    %another without any intervening pooling or normalization layers.
    
    %The third convolutional layer has 384 kernels of size 3 × 3 × 256 
    %connected to the (normalized, pooled) outputs of the second convolutional layer
    conv3Block = dagnn.Conv('size', [3 3 256 384], 'hasBias', true, 'stride', [1, 1], 'pad', [1 1 1 1]);
	alex.addLayer('conv3', conv3Block, {'pool2Out'}, {'conv3Out'},  {'conv3f'  'conv3b'});
	alex.addLayer('relu3', dagnn.ReLU(), {'conv3Out'}, {'relu3Out'}, {});

    
    %The fourth convolutional layer has 384 kernels of size 3 × 3 × 192
    conv4Block = dagnn.Conv('size', [3 3 192 384], 'hasBias', true, 'stride', [1, 1], 'pad', [1 1 1 1]);
	alex.addLayer('conv4', conv4Block , {'relu3Out'}, {'conv4Out'},  {'conv4f'  'conv4b'});
	alex.addLayer('relu4', dagnn.ReLU(), {'conv4Out'}, {'relu4Out'}, {});

 
    %the fifth convolutional layer has 256 kernels of size 3 × 3 × 192
	conv5Block = dagnn.Conv('size', [3 3 192 256], 'hasBias', true, 'stride', [1, 1], 'pad', [1 1 1 1]);
    pooling3Block =  dagnn.Pooling('method', 'max', 'poolSize', [3 3], 'stride', [2 2], 'pad', [0 0 0 0]);
    alex.addLayer('conv5',conv5Block , {'relu4Out'}, {'conv5Out'},  {'conv5f'  'conv5b'});
	alex.addLayer('relu5', dagnn.ReLU(), {'conv5Out'}, {'relu5Out'}, {});
	alex.addLayer('pool5', pooling3Block, {'relu5Out'}, {'pool5Out'}, {});

    
    %The fully-connected layers have 4096 neurons each
    % since the output from above is [6x6x256]
	fullyConnected1Block = dagnn.Conv('size', [1 1 256 4096], 'hasBias', true, 'stride', [1, 1], 'pad', [0 0 0 0]);
    alex.addLayer('fc1conv', fullyConnected1Block, {'pool5Out'}, {'fc1convOut'},  {'fc1f'  'fc1b'});
	alex.addLayer('fcrelu1', dagnn.ReLU(), {'fc1convOut'}, {'fc1reluOut'}, {});

    % since the output from above is [1x1x4096]
    fullyConnected2Block = dagnn.Conv('size', [1 1 4096 4096], 'hasBias', true, 'stride', [1, 1], 'pad', [0 0 0 0]);
	alex.addLayer('fc2conv', fullyConnected2Block , {'fc1reluOut'}, {'fc2convOut'},  {'fc2f'  'fc2b'});
	alex.addLayer('fcrelu2', dagnn.ReLU(), {'fc2convOut'}, {'fc2reluOut'}, {});

    % since the output from above is [1x1x4096] & We need 10 output 1by1
    % classfier neurons
    fullyConnected3Block = dagnn.Conv('size', [1 1 4096 10], 'hasBias', true, 'stride', [1, 1], 'pad', [0 0 0 0]);
	alex.addLayer('classifier',fullyConnected3Block , {'fc2reluOut'}, {'classifier'},  {'fc3f'  'fc3b'});
	
    %Classifier Layer to Softmax Function
    alex.addLayer('prob', dagnn.SoftMax(), {'classifier'}, {'prob'}, {});
	alex.addLayer('objective', dagnn.Loss('loss', 'topkerror'), {'prob', 'label'}, {'objective'}, {});
	alex.addLayer('error', dagnn.Loss('loss', 'classerror'), {'prob','label'}, 'error');
    %Network End
   
  
    %Initialize Parameter Needed For Training
	opts.train.batchSize = 5; %Select Image Batch Size of 100
	opts.train.numEpochs = 100; %Number of Epochs = 20 (passes through the network)
	opts.train.continue = true ; %Continue from last Epoch if interrupted
	opts.train.gpus = [] ; %Do not use GPU. Change to '[1]' to use
	%opts.train.learningRate = [5e-4*ones(1, 10),  5e-3*ones(1, 5)];
    opts.train.learningRate = 0.00005;
	%opts.train.weightDecay = 3e-4; %Combined with the local weight decay in the current training layer
	opts.train.momentum = 0.;
	%opts.train.expDir = expDir; %Save any file @ expDir
    opts.train.expDir = 'C:\Users\Oluwole_Jnr\Desktop\University of Leeds\Main Project\Project_MATLab\Training';
	opts.train.numSubBatches = 1;
	% getBatch options
	bopts.useGpu = numel(opts.train.gpus) >  0 ;
 
  
    
    % Initialize weight for all the neurons in the network
    %We initialized the weights in each layer from a zero-mean Gaussian 
    %distribution with standard deviation 0.01
    %We initialized the neuron biases in the second, fourth, and fifth convolutional layers,
    %as well as in the fully-connected hidden layers, with the constant 1
    %. We initialized the neuron
    %biases in the remaining layers with the constant 0
    %We used an equal learning rate for all layers
    %alex.initParams();
	%initializeAlex(alex, 1/100);
    initializeAlex2(alex);
   
    
    

    % Begin Training
	trainingInfo = cnn_train_dag(alex, imageDB,  @(i,b) getBatch(bopts,i,b), ... 
        opts.train, ... 
        'val', find(imageDB.images.set == 1)) ; %set  are 1 the images to beused for training
    %set =2 are for testing
end


% Create batch of images and labels
function inputs = getBatch(opts,imageDB, batch)
images = imageDB.images.data(:,:,:,batch);
%Before the training starts, the average image value is subtracted:
    images = images- mean(images(:));
%{
%Check to make sure image contains 3 channels
[xDim yDim zDim] = size(images);
threeDImage = images;
if (zDim==1)
   threeDImage = cat(3, images, images, images); 
end


%Resize Image to acceptable AlexNet Input size [227 227 3]
properSizedImageData = threeDImage;
if(xDim~=227 || yDim~=227)
    %Bilinear interpolation; the output pixel value is a weighted average 
    %of pixels in the nearest 2-by-2 neighborhood
properSizedImageData =  imresize(threeDImage, [227 227], 'bilinear');
end
%}
	labels = imageDB.images.labels(1,batch) ;
    
    if opts.useGpu > 0
  		images = gpuArray(properSizedImageData) ;
    end

	inputs = {'input', images, 'label', labels} ;

end























