function  D_mapped  = mapping( D, min_val, max_val )
% mapping Summary of this function goes here
% Detailed explanation goes here

% mapping function map any matrix into the given interval
% D : any m by n matrix
% min_val : min interval value
% max_val : max interval value

D_mapped = (max_val-min_val)*((D-min(D(:)))/(max(D(:))-min(D(:)))) + min_val;

end

