function  viewCircularHough( img, radius )
%viewCircularHough TO VIEW THE CIRCULAR HOUGH TRANSFORM IN OPERATION

 [xDim, yDim, zDim] = size(img);
 
 if zDim>1 || xDim~=500 || yDim~=500
resizedimg = imresize(img, [500 500]);
[ graySImg ] = getGrayScale( resizedimg );
[edgedRegion] = detectEdge(graySImg);
 [xDim, yDim, zDim] = size(edgedRegion);
 maxPixVal  = max(max(edgedRegion));
 else
    edgedRegion = img;
    maxPixVal  = max(max(edgedRegion));
 end


for xPixel = 1:5:xDim
    for yPixel = 1:5:yDim
        if edgedRegion(xPixel,yPixel)>0 && edgedRegion(xPixel,yPixel)~=maxPixVal +1
            for tetha =0:360 %Every possible angle
               % radius = minRadius+rad-1;
                a = ceil(xPixel - (radius*cosd(tetha)));
                b = ceil(yPixel - (radius*sind(tetha)));
                if a>0 && b>0 && a<=xDim && b<=yDim && edgedRegion(a, b)<=0
                    edgedRegion(a, b) = maxPixVal + 1;
                end
            end
                    imshow(edgedRegion);
                    drawnow;
        end
    end
end

end

