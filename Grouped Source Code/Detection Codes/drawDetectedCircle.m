function [img] = drawDetectedCircle( img, xDim, yDim, centers, radii)
%drawDetectedCircle Used to highlight detected circles on images

 radiusSquared = radii(1)*radii(1); 
 %draw test circle - Blehems theorem = (x – xo)^2 + (y – yo)^2 <= r2
 for xCnt = 1:xDim
     for yCnt = 1:yDim
 lft = (xCnt - centers(1,1))*(xCnt - centers(1,1));
 rht = (yCnt - centers(1,2))*(yCnt - centers(1,2));
 if (lft+rht)<=radiusSquared
   img(yCnt, xCnt) = 255; 
   
 end %end of if statement
     end %end of yCnt
 end %end of xCnt

end%end of function

