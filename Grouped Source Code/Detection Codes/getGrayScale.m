function [ graySImg ] = getGrayScale( img )
%getGrayScale: Takes any kind of image and returns its gray scale
         %Created on: 2nd August, 2017
         %Author: Oluwole Oyetoke Jnr
         %Using MATLAB 2016
         
%Check if image is coloured
[xDim, yDim, zDim] = size(img);
if (zDim>1) %Convert image to grey scale
%graySImg = double(rgb2gray(img)); %Automatic way
graySImg = (1/3)* ((double(img(:,:,1))) + (double(img(:,:,2)))+ (double(img(:,:,3)))); %Manual
else
    graySImg = img;
end
graySImg = double(graySImg);
end

