function [newStr bestScore prediction] = classifyImage(image, network)
%{
---------------------------------------------------------------------------
classifyImage: Function used to classify  input images
   This function takes in an image and a pretrained network. It processes
   the freshly recived image according to the input layer specification of
   the pretrained network (dimension, number of channels etc). This
   finetuned image is then passed through the pretrained network and the
   output layer of the pretrained network (softmax) is analysed to derive
   the predicted class of image.

   Created on: 31st March, 2017
   Author: Oluwole Oyetoke Jnr
   Using MATLAB 2016
---------------------------------------------------------------------------
%}



%Validation
if nargin ~= 2
 error('classifyImage:Input_Argument_Error','This function works with 2 input arguments -image, network- ')
end


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
properSizedImageData =  properSizedImageData - network.meta.ImageMean;

%Remove the loss part of the softmax layer
network.layers{end}.type = 'softmax';

% run the input image through the CNN
result = vl_simplenn(network, properSizedImageData);

% obtain and analyze the CNN otuput
scores = squeeze(gather(result(end).x)) ;
[bestScore, prediction] = max(scores);

% show the classification results
%figure(1) ; clf ; imagesc(uint8(image));
%imshow(uint8 (image));

%Create prediction label
str =network.meta.categories{prediction};
newStr = upper(strrep(str,'_',' '));
%resultTitle = title(sprintf('PREDICTED SIGN: %s\n [CLASS %d, SCORE %.3f]',...
%    newStr, prediction, bestScore));
%set(resultTitle, 'FontSize', 12);

%Print result on console
%fprintf('TRAFFIC SIGN PREDICTED : %s\n', network.meta.categories{prediction}) ;



end