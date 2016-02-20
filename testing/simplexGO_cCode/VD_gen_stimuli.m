function [stimuli] = VD_gen_stimuli(numInputDims,numRows)

avail_features = [ .1 .1 .1; .1 .1 .9; ...
                   .1 .9 .1; .1 .9 .9; ...
                   .9 .1 .1; .9 .1 .9; ...
                   .9 .9 .1; .9 .9 .9];
           
%%%%% Generate an input
% if numInputDims == 1,
%     inp_matrix = avail_features(ceil(rand*8),1)*ones(numRows,NUM_COLS);
%   %  inp_vector = inp_matrix(1,1,1); 
% elseif numInputDims == 2,
%     segment = avail_features(ceil(rand*8),:);
%     inp_matrix = cat(3, segment(1)*ones(numRows,NUM_COLS), segment(2)*ones(numRows));
% 	      % Take the input x,y coords, and make each fill a slice
%               % of a matrix the same size as m, so that they can be subtracted
%  %   inp_vector = [inp_matrix(1,1,1) inp_matrix(1,1,2)];    

for col=1:numInputDims
    segment = avail_features(ceil(rand*8),:);
    stimuli = cat(2, );
end


if numInputDims == 3, 
    segment = avail_features(ceil(rand*8),:);
    stimuli = cat(3, segment(1)*ones(numRows), segment(2)*ones(numRows), segment(3)*ones(numRows));
    % Take the input x,y coords, and make each fill a slice
              % of a matrix the same size as m, so that they can be subtracted
  %  inp_vector = [inp_matrix(1,1,1) inp_matrix(1,1,2) inp_matrix(1,1,3) inp_matrix(1,1,4) inp_matrix(1,1,5) inp_matrix(1,1,6)];  
elseif numInputDims == 15,
    for seg = 1:5,
        segment(seg,:) = avail_features(ceil(rand*8),:);
    end
    stimuli = cat(3, segment(1,1)*ones(numRows), segment(1,2)*ones(numRows), segment(1,3)*ones(numRows), ...
                        segment(2,1)*ones(numRows), segment(2,2)*ones(numRows), segment(2,3)*ones(numRows), ...
                        segment(3,1)*ones(numRows), segment(3,2)*ones(numRows), segment(3,3)*ones(numRows), ...
                        segment(4,1)*ones(numRows), segment(4,2)*ones(numRows), segment(4,3)*ones(numRows), ...
                        segment(5,1)*ones(numRows), segment(5,2)*ones(numRows), segment(5,3)*ones(numRows));            
else
                    fprintf('Invalid number of stimulus dimensions \n');  
end
stop=1;