function [ Gmag, Gdir ] = GradMagDir( I )
% multiple line of comments 
%{
    return gradient of mag and direction and shows in the min max range

    directional gradient of image to locate breaks in uniform regions
    The Gradient Magnitude
    Tells us how quickly intensity is
    changing in the neighborhood of pixel
    (x,y) in the direction of the gradient.

    The Gradient Orientation
    Tells us how quickly intensity is
    changing in the neighborhood of pixel
    (x,y) in the direction of the gradient.
%}

% converts grayscale
if size(I,3)==3 
    I = rgb2gray(I);
    
end

% converts the double presicion
I = double(I); 

[Gx,Gy] = imgradientxy(I);
[Gmag, Gdir] =  imgradient(Gx, Gy);% magnitude and direction of the gradient
% In the higher value of pixels(white) represents edges Gmag
figure('Name', 'Gradient','NumberTitle','off')
subplot(121); imshow(Gmag,[]);
title('magnitude of the gradient')
subplot(122); imshow(Gdir,[]);
title('magnitude of the direction')

end

