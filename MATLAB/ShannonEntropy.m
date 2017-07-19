function  H  = ShannonEntropy( I ) 

% this function can be used as a test creterion 
% 
% to compute the entropy of the BINARY IMAGE
% output of the function is entropy value
%
% High entropy value specifies more randomness in
% edge image and so resultant image isn’t appropriate. In
% addition to this threat, if a method exposes incomplete edges
% without details, value of entropy is low.

% size of the binary image is m by n
m = size(I,1);
n = size(I,2);
% counter for number of one and zeros pixels in the image
ctr_ones = 0;
ctr_zeros = 0;
% to count the number of ones and zeros in the image
    for i = 1:m
        for j = 1: n
            if I(i,j) == 1
                ctr_ones = ctr_ones+1;
            else
                ctr_zeros = ctr_zeros+1;
            end
        end
    end
% frequency of the ones and zeros    
freq_ones = ctr_ones/(m*n);
freq_zeros = ctr_zeros/(m*n);

H = -(freq_zeros*log2(freq_zeros) + freq_ones*log2(freq_ones));
end

