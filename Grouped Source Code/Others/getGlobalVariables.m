function [storage] = getGlobalVariables(var)
%getGlobalVariables Used  to get global variables
%   Detailed explanation goes here
global sineTable; 
global cosTable;
global ProjectFolder;
global Tethas;
global OpenCL_Success;

if var==0
storage = ProjectFolder; 
elseif var==1
storage = sineTable;
elseif var==2
storage = cosTable;
elseif var==3
storage = Tethas;
elseif var==4
storage = OpenCL_Success;
end


end

