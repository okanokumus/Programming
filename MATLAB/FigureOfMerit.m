function fom = FigureOfMerit(I_groundTruth, I_test)

% For more information about formula and other test criterion click below
% link:
% http://homepages.inf.ed.ac.uk/rbf/CVonline/LOCAL_COPIES/OWENS/LECT6/node2.html#pratt
% 
% as a paper: PRATT, W.K. Digital Image Processing. 3 ed. New York: John Wiley & Sons, 2001.
% 
% Calculate Pratt's figure of merit to measure edge preservation
% performance of a filter
% 
% In the response of an edge detector,there can be three types of errors:
% 1. Missing valid edges
% 2. Errors in localizing edges
% 3. Classification of noise as edges
% Pratt's figure of merit consider these three errors.

Nof1_test = size(find(I_test),1); % number of 1s in the test image
Nof1groundTruth = size(find(I_groundTruth),1); % number of 1s in the test image
max_edge = max(Nof1groundTruth,Nof1_test); % returns Largest element

% to find nonzero pixel in the binary image (find 1s in the image)
[R_test, C_test] = find(I_test); 
[R_groundTruth, C_groundTruth] = find(I_groundTruth);

d = sqrt(size(I_groundTruth,1)^2+size(I_groundTruth,2)^2)*ones(1,length(find(I_groundTruth)));
dd = zeros(1,length(find(I_test)));

%  ? is scaling constant (usually 1/9)
Scale_const = 1/9;

for i = 1 : Nof1_test
    for j = 1 : Nof1groundTruth
        % distance
        d(j) = (R_test(i)-R_groundTruth(j))^2 + (C_test(i)-C_groundTruth(j))^2;
    end
    dd(i) = min(d); % min distance 
end
fom = sum(1./(1+Scale_const*dd))/max_edge;
