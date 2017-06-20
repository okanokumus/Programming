% Camera projection matrix for calibrated stereo cameras
clc
clear 
close all
load('StereoParams.mat');
% camera parameters
cameraParams1 = stereoParams.CameraParameters1; % First camera parameters
cameraParams2 = stereoParams.CameraParameters2; % Second camera parameters

camMatrix1 = cameraMatrix(cameraParams1,eye(3,3),zeros(1,3));
%camMatrix1 = cameraMatrix(cameraParams1,stereoParams.RotationOfCamera2,stereoParams.TranslationOfCamera2);
camMatrix2 = cameraMatrix(cameraParams2,stereoParams.RotationOfCamera2,stereoParams.TranslationOfCamera2);


format short
camMatrix1'
camMatrix2'