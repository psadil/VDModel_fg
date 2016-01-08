function [inp_matrix] = eric_gen_limited_input(num_input_dims)

global NUM_ROWS NUM_COLS 

avail_features = [ .05 .05 .05 .05 .05 .05 ; .05 .05 .05 .333 .333 .333; .05 .05 .05 .667 .667 .667; .05 .05 .05 .95 .95 .95; ...
                   .333 .333 .333 .05 .05 .05; .333 .333 .333 .333 .333 .333; .333 .333 .333 .667 .667 .667; .333 .333 .333 .95 .95 .95; ... 
                   .667 .667 .667 .05 .05 .05; .667 .667 .667 .333 .333 .333; .667 .667 .667 .667 .667 .667; .667 .667 .667 .95 .95 .95; ...
                   .95 .95 .95 .05 .05 .05; .95 .95 .95 .333 .333 .333; .95 .95 .95 .667 .667 .667; .95 .95 .95 .95 .95 .95];
            
NUM_INPUT_DIMS = num_input_dims;
           
%%%%% Generate an input
if NUM_INPUT_DIMS == 1,
    inp_matrix = avail_features(ceil(rand*16),1)*ones(NUM_ROWS,NUM_COLS);
  %  inp_vector = inp_matrix(1,1,1); 
elseif NUM_INPUT_DIMS == 2,
    segment = avail_features(ceil(rand*16),:);
    inp_matrix = cat(3, segment(1)*ones(NUM_ROWS,NUM_COLS), segment(2)*ones(NUM_ROWS,NUM_COLS));
	      % Take the input x,y coords, and make each fill a slice
              % of a matrix the same size as m, so that they can be subtracted
 %   inp_vector = [inp_matrix(1,1,1) inp_matrix(1,1,2)];    
elseif NUM_INPUT_DIMS == 6, 
    segment = avail_features(ceil(rand*16),:);
    inp_matrix = cat(3, segment(1)*ones(NUM_ROWS,NUM_COLS), segment(2)*ones(NUM_ROWS,NUM_COLS), ...
                        segment(3)*ones(NUM_ROWS,NUM_COLS), segment(4)*ones(NUM_ROWS,NUM_COLS), ...
                        segment(5)*ones(NUM_ROWS,NUM_COLS), segment(6)*ones(NUM_ROWS,NUM_COLS));
    % Take the input x,y coords, and make each fill a slice
              % of a matrix the same size as m, so that they can be subtracted
  %  inp_vector = [inp_matrix(1,1,1) inp_matrix(1,1,2) inp_matrix(1,1,3) inp_matrix(1,1,4) inp_matrix(1,1,5) inp_matrix(1,1,6)];  
elseif NUM_INPUT_DIMS == 18,
    for seg = 1:3,
        segment(seg,:) = avail_features(ceil(rand*16),:);
    end
    inp_matrix = cat(3, segment(1,1)*ones(NUM_ROWS,NUM_COLS), segment(1,2)*ones(NUM_ROWS,NUM_COLS), segment(1,3)*ones(NUM_ROWS,NUM_COLS), segment(1,4)*ones(NUM_ROWS,NUM_COLS), ... 
                        segment(1,5)*ones(NUM_ROWS,NUM_COLS), segment(1,6)*ones(NUM_ROWS,NUM_COLS), ...
                        segment(2,1)*ones(NUM_ROWS,NUM_COLS), segment(2,2)*ones(NUM_ROWS,NUM_COLS), segment(2,3)*ones(NUM_ROWS,NUM_COLS), segment(2,4)*ones(NUM_ROWS,NUM_COLS), ... 
                        segment(2,5)*ones(NUM_ROWS,NUM_COLS), segment(2,6)*ones(NUM_ROWS,NUM_COLS), ...
                        segment(3,1)*ones(NUM_ROWS,NUM_COLS), segment(3,2)*ones(NUM_ROWS,NUM_COLS), segment(3,3)*ones(NUM_ROWS,NUM_COLS), segment(3,4)*ones(NUM_ROWS,NUM_COLS), ... 
                        segment(3,5)*ones(NUM_ROWS,NUM_COLS), segment(3,6)*ones(NUM_ROWS,NUM_COLS));
                    
  %  inp_vector = [inp_matrix(1,1,1) inp_matrix(1,1,2) inp_matrix(1,1,3) inp_matrix(1,1,4) inp_matrix(1,1,5) inp_matrix(1,1,6) ...
   %               inp_matrix(1,1,7) inp_matrix(1,1,8) inp_matrix(1,1,9) inp_matrix(1,1,10) inp_matrix(1,1,11) inp_matrix(1,1,12) ...
    %              inp_matrix(1,1,13) inp_matrix(1,1,14) inp_matrix(1,1,15) inp_matrix(1,1,16) inp_matrix(1,1,17) inp_matrix(1,1,18)];   
elseif NUM_INPUT_DIMS == 24,
    for seg = 1:4,
        segment(seg,:) = avail_features(ceil(rand*16),:);
    end
    inp_matrix = cat(3, segment(1,1)*ones(NUM_ROWS,NUM_COLS), segment(1,2)*ones(NUM_ROWS,NUM_COLS), segment(1,3)*ones(NUM_ROWS,NUM_COLS), segment(1,4)*ones(NUM_ROWS,NUM_COLS), ... 
                        segment(1,5)*ones(NUM_ROWS,NUM_COLS), segment(1,6)*ones(NUM_ROWS,NUM_COLS), ...
                        segment(2,1)*ones(NUM_ROWS,NUM_COLS), segment(2,2)*ones(NUM_ROWS,NUM_COLS), segment(2,3)*ones(NUM_ROWS,NUM_COLS), segment(2,4)*ones(NUM_ROWS,NUM_COLS), ... 
                        segment(2,5)*ones(NUM_ROWS,NUM_COLS), segment(2,6)*ones(NUM_ROWS,NUM_COLS), ...
                        segment(3,1)*ones(NUM_ROWS,NUM_COLS), segment(3,2)*ones(NUM_ROWS,NUM_COLS), segment(3,3)*ones(NUM_ROWS,NUM_COLS), segment(3,4)*ones(NUM_ROWS,NUM_COLS), ... 
                        segment(3,5)*ones(NUM_ROWS,NUM_COLS), segment(3,6)*ones(NUM_ROWS,NUM_COLS), ...
                        segment(4,1)*ones(NUM_ROWS,NUM_COLS), segment(4,2)*ones(NUM_ROWS,NUM_COLS), segment(4,3)*ones(NUM_ROWS,NUM_COLS), segment(4,4)*ones(NUM_ROWS,NUM_COLS), ... 
                        segment(4,5)*ones(NUM_ROWS,NUM_COLS), segment(4,6)*ones(NUM_ROWS,NUM_COLS));
             
             
else
                    fprintf('Invalid number of stimulus dimensions \n');  
end