%%
% all image size must be the same
% folder of the image dataset and this function must be in the same folder
% For example : AT lab dataset contain subfolder ('at\s(1to40)')
% ReadImagesFromDataset and AT dataset must be in the same folder to run
%%
% How to run the below funct:
% images = ReadImagesFromDataset('at','.pgm'); % folder and format
%%
function  images = ReadImagesFromDataset ( folder, format )

% first input is folder name of the dataset
% second input of the function is to take the format of the image '.xyz' 

% output is n × m
% Each image is converted into a column vector and then the images are loaded 
% into a matrix of size , where n is the number of pixels in each image 
% and m is the total number of images.

current_folder=pwd; 
input_dir = sprintf('%s%s%s%s' ,pwd,  '\',folder,'\*'); 
filenames = dir(sprintf('%s%s',fullfile(input_dir, '*'), format)); % star is to take all images
A = sprintf('%s%s%s', filenames(1).folder, '\', filenames(1).name);
image_dims =  size(imread(A)); % size of an image in the database

num_images = numel(filenames);
images = [];
for n = 1:num_images
    filename = sprintf('%s%s%s', filenames(n).folder, '\', filenames(n).name);
    img = imread(filename);
    if n == 1
        images = zeros(prod(image_dims), num_images);
    end
    images(:, n) = img(:);
end

end

