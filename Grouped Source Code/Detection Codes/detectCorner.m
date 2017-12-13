function [r c] = detectCorner(img);
%detectCorner: Corner Detecter using Harris Method
%Input image should be grayscale

%Validation
%if nargin ~= 1
%    error('detectCorner:Input_Argument_Error','This function works with 1 input argument -img- ')
%end

%Declare needed parameters
dx = [-1 0 1; -1 0 1; -1 0 1]; % Sobel mask used for the derivative
dy = dx'; %Transpose of dx
sigma=2;
supressionWindow = 20; %window size
harrisHold = 1000000;

[xDim, yDim, zDim] = size(img); %Check if image is coloured
%{
if (zDim>1)
img = double(rgb2gray(img)); %Convert image to grayscale
else
%Do nothing
end
%}

%Compute image FIRST ORDER DERIVATE of the image in both the x and y
%direction by convolving it with the derivatice mask
Ix = conv2(img, dx, 'same');    % Image derivatives
Iy = conv2(img, dy, 'same'); 

%Compute image SECOND ORDER DERIVATIVE by carrying out an element wise 
%multiplication of the first order derivates
Ixx = Ix.*Ix;
Ixyp = Ix.*Iy;
Iyy = Iy.*Iy;


%To check the cornerness of each pixel of an image,a small window around 
%that pixel is checked using a smooth circular window. To do this, we
%filter all three second-order derivatives by convolving them with a 
%Gaussian kernel.

% Gaussian filter size = 6*sigma (+/- 3sigma). Minimum sixe 1x1.
    g = fspecial('gaussian',max(1,fix(6*sigma)), sigma);
    Ix2 = conv2(Ixx, g, 'same'); 
    Iy2 = conv2(Iyy, g, 'same');
    Ixy = conv2(Ixyp, g, 'same');

%we compute the values of its trace and determinant. 
    det = ((Ix2.*Iy2) - (Ixy.^2));
    trace = (Ix2 + Iy2);
%Find the harris response for each pixel
% R = det(M) - k(trace M)^2
k = 0.04; %Emperically computed and given by Harris
R = det -(k*((trace).^2)); % Harris corner measure

%Select corners
%The Harris response for each pixel in the image is used to determine 
%whether a pixel is a corner or not through non-maximal suppression
%and thresholding

	dilated = ordfilt2(R,supressionWindow^2,ones(supressionWindow)); % Grey-scale dilate.
    %By thresholding the response array with the minimum desired Harris 
    %response, which,we can calculate a binary response array for which 
    %only pixels with a value greater than this threshold will be true
	R = (R==dilated)&(R>harrisHold);       % Find maxima.
	
	[r,c] = find(R);                 % Find row,col coords.
    %r = x
    %c = y
	
	%figure, imagesc(img), axis image, colormap(gray), hold on
	%plot(c,r,'go'), title('Detected Corners');
    %fprintf('Corner Detection Carried Out\n')
end %end of function