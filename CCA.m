function [x, y, width, height] = CCA( xDim, yDim, zDim, stepSize, beacon, windowSize, regionShed )
%CCA Connected Component Analysis
%Function used to perform connected component analysis on image in order to
%help extract potential regions of interest

   %Created on: 20th June, 2017, Revised August 2nd, 2017
   %Author: Oluwole Oyetoke Jnr
   %Using MATLAB 2016

%Initialize aprameters and variables
startX = 1; startY = 1; stopX = windowSize; stopY = windowSize;
xBlocks = ((xDim-windowSize)/stepSize)+1;
yBlocks = ((yDim-windowSize)/stepSize)+1;
xCounter=1;
yCounter=1;

hueCheck=0; saturationCheck=0; valueCheck=0;
regionSum=0; %Sum of the number of Pixels which are potentialy members of the ROI

totalBlocks = xBlocks * yBlocks;
regionMap = zeros(xBlocks,yBlocks);
Map = MapRegion;
Map(xBlocks,yBlocks) = MapRegion;
regionSizeTracker = zeros(1,totalBlocks); 

myLeftNeighVal =0; myRightNeighVal = 0; myTopNeighVal = 0; myBottomNeighVal=0;
myLeftNeigRegion =-1; myRightNeighRegion = -1; myTopNeighRegion = -1; myBottomNeighRegion=-1;
regionCounter=1;
regionsum2=0;

 for BlockLoop = 1:totalBlocks
      regionSum=0; 
      xCount = xCounter;
      yCount = yCounter;
      
      %Pixel Sum Pooling happens here 
     regionSum = sum(sum(regionShed(startX:stopX, startY:stopY)));
     
     %Save region's potential & Link Regions Together
     regionMap(xCounter, yCounter) = regionSum;
    
     Map(xCount, yCount).value = regionSum;
     Map(xCount,yCount).xCoord = xCount;
     Map(xCount,yCount).yCoord = yCount;
      if xCount==1 && yCount ==1
         Map(xCount,yCount).left=Map(xCount,yCount); 
         Map(xCount,yCount).right=Map(xCount+1,yCount);
         Map(xCount,yCount).top=Map(xCount,yCount);
         Map(xCount,yCount).bottom=Map(xCount,yCount+1);
      elseif xCount==xBlocks && yCount ==1
         Map(xCount,yCount).left=Map(xCount-1,yCount); 
         Map(xCount,yCount).right=Map(xCount,yCount);
         Map(xCount,yCount).top=Map(xCount,yCount);
         Map(xCount,yCount).bottom=Map(xCount,yCount+1);
      elseif xCount==1 && yCount==yBlocks
         Map(xCount,yCount).left=Map(xCount,yCount); 
         Map(xCount,yCount).right=Map(xCount+1,yCount);
         Map(xCount,yCount).top=Map(xCount,yCount-1);
         Map(xCount,yCount).bottom=Map(xCount,yCount);
      elseif xCount==xBlocks && yCount==yBlocks
         Map(xCount,yCount).left=Map(xCount-1,yCount); 
         Map(xCount,yCount).right=Map(xCount,yCount);
         Map(xCount,yCount).top=Map(xCount,yCount-1);
         Map(xCount,yCount).bottom=Map(xCount,yCount);
      elseif xCount==1
         Map(xCount,yCount).left=Map(xCount,yCount); 
         Map(xCount,yCount).right=Map(xCount+1,yCount);
         Map(xCount,yCount).top=Map(xCount,yCount-1);
         Map(xCount,yCount).bottom=Map(xCount,yCount+1);
      elseif xCount==xBlocks
         Map(xCount,yCount).left=Map(xCount-1,yCount); 
         Map(xCount,yCount).right=Map(xCount,yCount);
         Map(xCount,yCount).top=Map(xCount,yCount-1);
         Map(xCount,yCount).bottom=Map(xCount,yCount+1);
      elseif yCount==1
         Map(xCount,yCount).left=Map(xCount-1,yCount); 
         Map(xCount,yCount).right=Map(xCount+1,yCount);
         Map(xCount,yCount).top=Map(xCount,yCount);
         Map(xCount,yCount).bottom=Map(xCount,yCount+1);
      elseif yCount==yBlocks
         Map(xCount,yCount).left=Map(xCount-1,yCount); 
         Map(xCount,yCount).right=Map(xCount+1,yCount);
         Map(xCount,yCount).top=Map(xCount,yCount-1);
         Map(xCount,yCount).bottom=Map(xCount,yCount);
      else
         Map(xCount,yCount).left=Map(xCount-1,yCount);
         Map(xCount,yCount).right=Map(xCount+1,yCount);
         Map(xCount,yCount).top=Map(xCount,yCount-1);
         Map(xCount,yCount).bottom=Map(xCount,yCount+1);
      end
      
     %Check to see if current region is bright enough
     if Map(xCount, yCount).value>beacon %i.e more than 1/4th of the region is white
         %Check the regions its neighbours belong to
         myLeftNeighRegion =  Map(xCount, yCount).left.region; 
         myRightNeighRegion =  Map(xCount, yCount).right.region; 
         myTopNeighRegion =  Map(xCount, yCount).top.region; 
         myBottomNeighRegion =  Map(xCount, yCount).bottom.region;
         %If any of its neighbours already belong to a region, select the region of the neigbour with the lowest value and force this one to join it
         if myLeftNeighRegion>0 || myRightNeighRegion>0 || myTopNeighRegion>0 || myBottomNeighRegion>0 
         A = [myLeftNeighRegion myRightNeighRegion myTopNeighRegion myRightNeighRegion];
         A1 = A(find(A~=-1)); %-1 regions are black areas of the picture or regions that have not been attende to yet
         oldestRegion = min(A1);
         Map(xCount, yCount).region = oldestRegion;
         regionSizeTracker(1,oldestRegion) = regionSizeTracker(1,oldestRegion)+1;
         %Force other neigbours of this region that may be already part of another region to join the lower region
         if myLeftNeighRegion >0 && myLeftNeighRegion~=oldestRegion
             regionSizeTracker(1,myLeftNeighRegion) = regionSizeTracker(1,myLeftNeighRegion)-1; %Update region Size tracker
             Map(xCount, yCount).left.region = oldestRegion;
             regionSizeTracker(1,oldestRegion) = regionSizeTracker(1,oldestRegion)+1; %Update region Size tracker
         end
         if myRightNeighRegion >0 && myRightNeighRegion~=oldestRegion
             regionSizeTracker(1,myRightNeighRegion) = regionSizeTracker(1,myRightNeighRegion)-1; %Update region Size tracker
             Map(xCount, yCount).right.region = oldestRegion;
             regionSizeTracker(1,oldestRegion) = regionSizeTracker(1,oldestRegion)+1;  %Update region Size tracker
         end
         if myTopNeighRegion >0 && myTopNeighRegion~=oldestRegion
            regionSizeTracker(1,myTopNeighRegion) = regionSizeTracker(1,myTopNeighRegion)-1; %Update region Size tracker
             Map(xCount, yCount).top.region = oldestRegion;
             regionSizeTracker(1,oldestRegion) = regionSizeTracker(1,oldestRegion)+1;  %Update region Size tracker
         end
         if myBottomNeighRegion >0 && myBottomNeighRegion~=oldestRegion
             regionSizeTracker(1,myBottomNeighRegion) = regionSizeTracker(1,myBottomNeighRegion)-1; %Update region Size tracker
             Map(xCount, yCount).bottom.region = oldestRegion;
             regionSizeTracker(1,oldestRegion) = regionSizeTracker(1,oldestRegion)+1;  %Update region Size tracker
         end
          
         %If non of its neigbour already belongs to a region, then assign it a region
         else
         Map(xCount, yCount).region = regionCounter;
         regionSizeTracker(1,regionCounter) = regionSizeTracker(1,regionCounter)+1; 
         regionCounter = regionCounter+1;
         end %End of 'if any of its neighbours already....'
       
     else
      %Do nothing
     end %End of 'check to see if current region is bright enough.....'
    
     
    %Loop management 
     if yCounter==yBlocks
        %reset xStart, xStop positions and xCounter 
         startY = 1;
         stopY = windowSize;
         yCounter=0;
         xCounter = xCounter+1;
         
         startX=startX+stepSize;
         stopX=startX+windowSize-1;
     else
       startY = startY+stepSize;
       stopY = startY+windowSize-1; 
     end

   

     yCounter=yCounter+1;
 end %end of xBlockLoop 

 %Get the region with the highest potential
 [val index] = max(regionSizeTracker);
 

 currentHighestX=-1; currentLowestX=xDim+1; currentHighestY=-1; currentLowestY=yDim+1; thisX=0; thisY=0;
 xCnt=1; yCnt=1;
  for length2 = 1:totalBlocks
  
     if Map(xCnt,yCnt).region==index
        thisX = Map(xCnt,yCnt).xCoord; 
        thisY = Map(xCnt,yCnt).yCoord;
        
        if thisX>currentHighestX 
           currentHighestX = thisX; 
        elseif thisX<currentLowestX
            currentLowestX = thisX;
        else
        end
        
        if thisY>currentHighestY 
           currentHighestY = thisY; 
        elseif thisY<currentLowestY
            currentLowestY = thisY;
        else
        end   
     end
     
     if yCnt==yBlocks
        %reset xStart, xStop positions and xCounter 
         yCnt=0;
         xCnt = xCnt+1; 
     end
           yCnt=yCnt+1;
  end
 
 x = (currentLowestX*stepSize) - (stepSize-1);
 y = (currentLowestY*stepSize) - (stepSize-1);
 height = (currentHighestX*stepSize)-(stepSize-1)+(windowSize-1)-x;
 width = (currentHighestY*stepSize)-(stepSize-1)+(windowSize-1)-y;

end %end of function

     