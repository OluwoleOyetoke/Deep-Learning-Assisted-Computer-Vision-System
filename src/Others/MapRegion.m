classdef MapRegion < handle
    %MapRegion Map Region class
    %   MATLAB OOP for the region detection
    
    properties 
        left=MapRegion.empty; %empty MapRegion object
        right=MapRegion.empty; %empty MapRegion object
        top=MapRegion.empty; %empty MapRegion object
        bottom=MapRegion.empty; %empty MapRegion object
        region=-1; %region unattended to
        value=-1; %default value
        xCoord = -1; %default value
        yCoord = -1; %defaulr value
    end
        
    methods
     
    end
    
end

