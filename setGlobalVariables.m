function setGlobalVariables()
%setGlobalVariables: Function used to set global variables
%CREATE SINE AND COSINE LOOKUP TABLE (IMPROVES SPEED OF COMPUTATION)

global sineTable; 
global cosTable;
global ProjectFolder;
global Tethas;
global OpenCL_Success;

ProjectFolder = ('C:\Users\Oluwole_Jnr\Desktop\University of Leeds\Main Project\Project_MATLab\'); %Set project path
Tethas = 1:1:360;
[sineTable, cosTable] = createSineCosLUT(Tethas);

%Initiailize openCL
try 
platform = 1;  device = 1;
ocl = opencl(); 
ocl.initialize(platform, device); %Select Host Platform, GPU device
ocl.addfile('OpenCL Toolbox/cl/Kernel.cl');
ocl.build();
OpenCL_Success=1;
catch
OpenCL_Success=0;
end


end
%CREATE SINE AND COSINE LOOKUP TABLE (IMPROVES SPEED OF COMPUTATION)
%--------------------------------------------------------------------------
function [sineTable, cosTable] = createSineCosLUT(Tethas);
tethaRange = length(Tethas);
sineTable = zeros(1,tethaRange);
cosTable = zeros(1,tethaRange);
for count = 1:tethaRange
    sineTable(1,count) = sind(Tethas(1,count));
    cosTable(1,count) = cosd(Tethas(1,count));
end
end %end of LUT generation function
%--------------------------------------------------------------------------