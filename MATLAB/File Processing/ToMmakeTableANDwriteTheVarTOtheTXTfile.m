clear
clc
% below codes make table and create a txt file using input and output
% variables

% parameters
prm1= 1:10;
prm2 = [1 2 5 6 9];
prm3=[10 100 1000];

% open the file such as 'result.txt' in writting mode
fileID = fopen('result.txt','w');
% If you plan to read the file with Microsoft® Notepad, use '\r\n' instead of '\n' to move to a new line.
fprintf(fileID,'%8s %8s %8s %14s\r\n','p1','p2', 'p3', 'output');

table=[];

for k1=1:10
    p1= k1 ;
    for k2=1:length(prm2)
        p2=prm2(k2);
        for k3=10:10:1000
            p3 = k3 ;
            output=p1+p2+p3;
            table=[table;p1 p2 p3 output];
            fprintf(fileID,'%8.2f %8.2f %8.2f  %14.2f\r\n',p1, p2, p3, output);
        end
    end
end
% find min of output and write to the file
minelement =  table(:,4) == min(min(table(:,4)));
[x, ~] = find(minelement);
fprintf(fileID,'\r\n%8s','min:');
fprintf(fileID,'%8.2f %8.2f %8.2f  %14.2f\r\n',table(x,:));

% find min of  output and write to the file
maxelement =  table(:,4) == max(max(table(:,4)));
[y, ~] = find(maxelement);
fprintf(fileID,'%8s','max:');
fprintf(fileID,'%8.2f %8.2f %8.2f  %14.2f\r\n',table(y,:));

% close the file
fclose(fileID);
% to display the inside of the created file on the command window:
type result.txt