function [f_out, act_out] = eric_calc_act_fast(win_row, win_col, dist_mat)

%% This function is called from eric_pretrain.m and eric_sample_train.m. It
%% calculates the activation on the grid and the f matrix determining
%% amount of learning that will accrue to each unit.

global NUM_ROWS NUM_COLS NUM_INPUT_DIMS
global ETA G PHASE
global PEAK_SIZE 
global grid_mat

%%% Calculate city-block distance from winner in grid, with wraparound
%%% measurement

%  grid_dist = zeros(NUM_ROWS, NUM_COLS);
               
    %%find distance of each unit from winner (using grid_matrix, which stores the position of each unit in the grid) 
    %%create a matrix with a slice for each of the two potential minimum distances for rows and cols
    row_dist_mat(:,:,1) = abs(grid_mat(:,:,1) - win_row);
    row_dist_mat(:,:,2) = NUM_ROWS - abs(grid_mat(:,:,1) - win_row);
    col_dist_mat(:,:,1) = abs(grid_mat(:,:,2) - win_col);
    col_dist_mat(:,:,2) = NUM_COLS - abs(grid_mat(:,:,2) - win_col);
    %%find the minimum of the two values for row, and for col
    min_row_dist_mat = min(row_dist_mat,[],3);
    min_col_dist_mat = min(col_dist_mat,[],3);
    %%Sum the two minimum distances to get the city_block distance
    grid_dist = min_row_dist_mat + min_col_dist_mat;

    %%% Calculate Gaussian movement-strength function for each node
    f_1dim = ETA*exp(-(grid_dist/G).^2);
   
     if NUM_INPUT_DIMS == 6,
       f_out = cat(3,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim);
     elseif NUM_INPUT_DIMS == 24,
       f_out = cat(3,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim, ...
                     f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim);    % Make a slice for dims 1 to 24
   end
    
%%% Set dist_mat to be >= 1 in all cases (for a trial)
  %[rows, cols] = find(dist_mat>1);
  % for unit = 1: length(rows)
  %     dist_mat(rows(unit), cols(unit)) = 1;
  % end
   
   act_out = log(ones(NUM_ROWS,NUM_COLS)./dist_mat);
     