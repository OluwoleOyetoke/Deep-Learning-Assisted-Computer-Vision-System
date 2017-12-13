function [circleAvailable, dummyVar] = myDetectCircle_OpenCL(edgedRegion)
%myDetectCircle_OpenCL Optimized circle detection methodology using OpenCL
      %This function makes use of the MATLAB OpenCL toolbox designed by 
      %Radford Juang  (https://uk.mathworks.com/matlabcentral/fileexchange/30109-opencl-toolbox-v0-17)
      %The toolbox helps interface MATLAB with native openCL codes, just
      %like we use MEX gateway functions to call C/C++ subroutines in
      %MATLAB. The OpenCL Kernel still remains a normal standard openCL
      %kernel. Function takes in edged image img
      
         %Created on: 23rd August, 2017
         %Author: Oluwole Oyetoke Jnr
         %Using MATLAB 2016
         
%Check To Be Sure OpenCL is Functional
 OpenCL_Success = getGlobalVariables(4);
 
 if OpenCL_Success ~=1
     error('myDetectCircle_OpenCL:OpenCL_Initialization_Error','OpenCL Not Enabled On This Device ');
 end
        
%Prepare MATLAB variables
%--------------------------------------------------------------------------
[xD yD zD] = size(edgedRegion);
transpose = edgedRegion';
edge1D = transpose(:)';
img = single (edge1D);
mx = max(img);
xDimension = int32(xD);
yDimension = int32(yD);
minRadius = int32(ceil((yDimension*0.1)));
maxRadius = int32(ceil(yDimension / 2));
range = int32(maxRadius - minRadius);
accumulator = int32(zeros(1,(xDimension*yDimension*range)));
maxPixVal = single(mx);
imageSize = int32(xDimension*yDimension);
%--------------------------------------------------------------------------


%Create Buffer and Transfer MATLAB Variables Into Them
%--------------------------------------------------------------------------
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
%--------------------------------------------------------------------------

%Load OpenCL Kernel, Set NDRange, Pass Arguments to Kernel & Launch
%--------------------------------------------------------------------------
addkernel = clkernel('circularHough', [imageSize, 0,0], [256,0,0]);
addkernel(imgBuff, accBuff, xDimBuff, yDimBuff, rangeBuff, maxPixValBuff);
%--------------------------------------------------------------------------

%Get Returned Accumulator Value and Free Device Buffer
%--------------------------------------------------------------------------
returnedAccumulator = accBuff.get();
[value, index] = max(returnedAccumulator);  
clear imgBuff accBuff xDimBuff yDimBuff rangeBuff maxPixValBuff; %Free buffer
%--------------------------------------------------------------------------


%Make decision
%--------------------------------------------------------------------------
if value>100
    circleAvailable=1;
    dummyVar=1;
else
    circleAvailable=0;
    dummyVar=0;
end

end %End of Function

