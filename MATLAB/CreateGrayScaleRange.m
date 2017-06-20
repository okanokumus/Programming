function [ img ] = CreateGrayScaleRange( m, n )
% to show grayscale range
% two inputs and output
% inputs are the size of the output image 
img=zeros(m,n);
for i=1:m
    for j= 1:n
        img(i,j)=j-1;
    end
    
end
% map into 0 to 255
img = img ./ max(img(:));
img = 255*img;
imshow(img,[])
end


