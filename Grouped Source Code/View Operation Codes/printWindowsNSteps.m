function printWindowsNSteps(xDim, yDim);

%{
%printWindowsNSteps: Used to get a list of all possible window and step sizes for chosen resolutions

    %Function takes in image x and y dimension.
    %Function does not return any output, but prints out all its output in the
    %specified .txt document
    1. Step size should not be greater than window size 

            Created on: 22th August, 2017
            Author: Oluwole Oyetoke Jnr
            Using MATLAB 2016
%}
folderPath = getGlobalVariables(5);
fid=fopen(fullfile(folderPath,'Training\Detection Data\WindowControl2.txt'),'w');
header1 = 'Window';
header2 = 'Step';
fprintf(fid, [ header1 ' ' header2 '\n']);
for winSize=50:xDim-1
    for stpSz =2:xDim-1
    CheckX = mod((xDim-winSize),stpSz);
    CheckY = mod((yDim-winSize),stpSz);
    if CheckX==0 && CheckY==0
        fprintf(fid, '%d %d \n', [winSize stpSz]');
       %sprintf('Possible Window Sizes (>50) and Corresponding Step Size (Apart from 1) -> (%d,%d)', winSize, stpSz)
    end
    end
end
fclose(fid);

end