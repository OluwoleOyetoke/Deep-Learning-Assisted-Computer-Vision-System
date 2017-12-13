%LASTN = maxNumCompThreads(2);
clc

%My First MATLAB OpenCL
platform = 1; 
device = 1;
ocl = opencl(); %Initiailize openCL
ocl.initialize(platform, device); %Select Host Platform, GPU device
ocl.addfile('cl/Kernel.cl');
ocl.build();

%Load MATLAB Variable from file
filename = 'C:\Users\Oluwole_Jnr\Desktop\University of Leeds\Main Project\Project_MATLab\MatConvNet - Optimized\edgedRegionAsIs.mat';
ld = load(filename,'-mat');
imgld = ld.edgedRegion;
transpose = imgld';
edge1D = transpose(:)';
img = single (edge1D);
xDimension = int32(408);
yDimension = int32(408);
minRadius = int32(ceil((yDimension*0.1)));
maxRadius = int32(ceil(yDimension / 2));
range = int32(maxRadius - minRadius);
accumulator = int32(zeros(1,(xDimension*yDimension*range)));
maxPixVal = single(685.1026);
imageSize = int32(xDimension*yDimension);


% Test buffer:
One = int32(1);
imageLength     = int32(length(edge1D));
accLength       = int32(length(accumulator));
imgBuff         = clbuffer('ro', 'single',imageLength );
accBuff         = clbuffer('rw', 'int32', accLength);
xDimBuff        = clbuffer('rw', 'int32', One);
yDimBuff        = clbuffer('rw', 'int32', One);
rangeBuff       = clbuffer('ro', 'int32', One);
maxPixValBuff   = clbuffer('ro', 'single', One);


imgBuff.set(img);
accBuff.set(accumulator);
xDimBuff.set(xDimension);
yDimBuff.set(yDimension);
rangeBuff.set(range);
maxPixValBuff.set(maxPixVal);

% Validate clbuffer
%imgBuff.get();
accBuff.get();
%xDimBuff.get();
%yDimBuff.get();
%rangeBuff.get();
%maxPixValBuff.get();

tic
% Validate clkernel
addkernel = clkernel('circularHough', [imageSize, 0,0], [256,0,0]);
addkernel(imgBuff, accBuff, xDimBuff, yDimBuff, rangeBuff, maxPixValBuff);
returnedAccumulator = accBuff.get();

                [value, index] = max(returnedAccumulator);
				idx = index;
				zed = floor(index / (xDimension * yDimension));
				idx = index - (zed * xDimension * yDimension);
				wy = floor(idx / xDimension);
				ex = mod(idx, xDimension);
			    ar=zed+minRadius;
                toc
		fprintf('Max Value: %f, X: %f, Y: %f, Radius: %d',currentMax, ex, wy,ar );
        
clear imgBuff accBuff xDimBuff yDimBuff rangeBuff maxPixValBuff; %Free buffer

