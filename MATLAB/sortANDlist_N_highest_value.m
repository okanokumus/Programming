function [Y,X,sorted_array]=sortANDlist_N_highest_value (B,n,order)
% 2 inputs and third output
% --INPUTS --
% first input is input matrix
% second input is to take first how many value that
% third input is direction of the sorts (one of the descend or ascend)
% --OUTPUTS--
% outputs shows the (X,Y) location and the magnitude of the highest value
% element
    switch order
        case 'ascend'
            [sorted_array, pos]=sort(B(:),order);
            sorted_array=sorted_array(1:n,1);
            pos(1:n,1);
            [Y,X]=ind2sub(size(B),pos(1:n,1));

        case 'descend'
            [sorted_array, pos]=sort(B(:),order);
            sorted_array=sorted_array(1:n,1);
            pos(1:n,1);
            [Y,X]=ind2sub(size(B),pos(1:n,1));

        otherwise
            sprintf('third input can be descend or ascend that shows your direction of the sorts')
    end

end

