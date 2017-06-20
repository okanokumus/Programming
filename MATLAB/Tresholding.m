% this function takes 2 argumets that images and thresholding value
function img = Tresholding(I, thresh, dir)
% 3 inputs and one output
% fisrt input is image RGB or GrayScale
% second input is threshold value
% third input is the direction of the threshold (specify greater por lower than threshold)

[m, n, l]=size(I);

% to control the image is RGB or grayscale
if l==3
    sprintf('your image is in RGB space \nso it is converted in gray scale')
    I = rgb2gray(I);
else
    sprintf('your image is gray scale \nno need to convert grayscale')
end

img = zeros(m,n); % result image is created

for i=1:m
    for j=1:n
        % to contol the direction and threshold
        switch dir
            case 'up'
                if I(i,j)>thresh % the the calue of pixel is greater than threshold set as 1
                    img(i,j)=1;
                else
                    img(i,j)=0;
                end
            case 'down'
                if I(i,j) < thresh % the the calue of pixel is lower than threshold set as 1
                    img(i,j)=1;
                else
                    img(i,j)=0;
                end
            otherwise
                sprintf('third input can be only up or down')
        end
        
    end
end

end
