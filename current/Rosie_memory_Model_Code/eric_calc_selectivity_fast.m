function [f_out, act_out, peak_act, total_act, selectivity, winners] = eric_calc_selectivity(win_row, win_col, dist_mat)

%% Function called from eric_choice.m. Calculates grid_dist matrix, then
%% calculates all units' activities and selectivity of activation peak.

global NUM_ROWS NUM_COLS NUM_INPUT_DIMS
global ETA G SINGLE_SESSION
global PEAK_SIZE unique_counter CYCLE
persistent saved_winners
global grid_mat
%%% Calculate city-block distance from winner in grid, with wraparound measurement
	
    %%find distance of each unit from winner (using grid_matrix, which stores the position of each unit in the grid) 
    %%create a matrix with a slice for each of the two potential minimum distances for rows and cols
    row_dist_mat(:,:,1) = abs(grid_mat(:,:,1) - win_row);
    row_dist_mat(:,:,2) = NUM_ROWS - abs(grid_mat(:,:,1) - win_row);
    col_dist_mat(:,:,1) = abs(grid_mat(:,:,2) - win_col);
    col_dist_mat(:,:,2) = NUM_COLS - abs(grid_mat(:,:,2) - win_col);
    %%find the minimum of the two values for row, and for col
    min_row_dist_mat = min(row_dist_mat,[],3);
    min_col_dist_mat = min(col_dist_mat,[],3);
    %%Sum the two minimum distances to get hte city_block distance
    grid_dist = min_row_dist_mat + min_col_dist_mat;
    
 %   grid_dist(1:10, 1:10)
 
    %%% Calculate Gaussian movement-strength function for each node
	f_1dim = ETA*exp(-(grid_dist/G).^2);
    
   % if NUM_INPUT_DIMS == 1,
    %    f_out = f_1dim;
  %  if NUM_INPUT_DIMS == 2,
   %     f_out = cat(3,f_1dim,f_1dim);    % Make a slice for dims 1 and 2
    if NUM_INPUT_DIMS == 6,
        f_out = cat(3,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim);    % Make a slice for dims 1 to 6   
%    elseif NUM_INPUT_DIMS == 18,
 %       f_out = cat(3,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim);    % Make a slice for dims 1 to 18
    elseif NUM_INPUT_DIMS == 24,
        f_out = cat(3,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim, ...
                      f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim,f_1dim);    % Make a slice for dims 1 to 24 
    end
    
    %%% Set dist_mat to be >= 1 in all cases (for a trial)
    %[rows, cols] = find(dist_mat>1);
    %for unit = 1: length(rows)
    %   dist_mat(rows(unit), cols(unit)) = 1;
    %end
    
    act_out = log(ones(NUM_ROWS,NUM_COLS)./dist_mat);
    
    %%% initialise array and record winner for all situations
    if PEAK_SIZE == 1,
        winners = zeros(9,2);
    elseif PEAK_SIZE == 2,
        winners = zeros(13,2);
    elseif PEAK_SIZE == 3,
        winners = zeros(25,2);
    end
    winners(1,:) = [win_row win_col];
    winners(2,:) = [win_row win_col+1];
    winners(3,:) = [win_row win_col-1];
    winners(4,:) = [win_row+1 win_col];
    winners(5,:) = [win_row-1 win_col];
    winners(6,:) = [win_row+1 win_col+1];
    winners(7,:) = [win_row+1 win_col-1];
    winners(8,:) = [win_row-1 win_col-1];
    winners(9,:) = [win_row-1 win_col+1];
    if PEAK_SIZE > 1,
        winners(10,:) = [win_row win_col+2];
        winners(11,:) = [win_row win_col-2];
        winners(12,:) = [win_row+2 win_col];
        winners(13,:) = [win_row-2 win_col];
    end
    if PEAK_SIZE == 3,
        winners(14,:) = [win_row win_col+3];
        winners(15,:) = [win_row win_col-3];
        winners(16,:) = [win_row+3 win_col];
        winners(17,:) = [win_row-3 win_col];
        winners(18,:) = [win_row+1 win_col+2];
        winners(19,:) = [win_row-1 win_col+2];
        winners(20,:) = [win_row+1 win_col-2];
        winners(21,:) = [win_row-1 win_col-2];
        winners(22,:) = [win_row+2 win_col+1];
        winners(23,:) = [win_row-2 win_col+1];
        winners(24,:) = [win_row+2 win_col-1];
        winners(25,:) = [win_row-2 win_col-1];
    end
                
   % if PEAK_SIZE == 1,
        for row = 1:9 %% only 9 winners in peak
            if winners(row,1) > NUM_ROWS,
                winners(row,1) = winners(row,1) - NUM_ROWS;
            elseif winners(row,1) <= 0,
                winners(row,1) = winners(row,1) + NUM_ROWS;
            end
            if winners(row,2) > NUM_COLS,
                winners(row,2) = winners(row,2) - NUM_COLS;
            elseif winners(row,2) <= 0,
                winners(row,2) = winners(row,2) + NUM_COLS;
            end
        end
        peak_act = 0;
        for unit = 1:9
            peak_act = peak_act + act_out(winners(unit,1), winners(unit,2));
        end
%    elseif PEAK_SIZE == 2,
 %       for row = 1:13 %% 13 winners in peak
  %          if winners(row,1) > NUM_ROWS,
   %             winners(row,1) = winners(row,1) - NUM_ROWS;
    %        elseif winners(row,1) <= 0,
     %           winners(row,1) = winners(row,1) + NUM_ROWS;
      %      end
       %     if winners(row,2) > NUM_COLS,
        %        winners(row,2) = winners(row,2) - NUM_COLS;
         %   elseif winners(row,2) <= 0,
          %      winners(row,2) = winners(row,2) + NUM_COLS;
           % end
%        end
 %       peak_act = 0;
  %      for unit = 1:13
   %         peak_act = peak_act + act_out(winners(unit,1), winners(unit,2));
    %    end
%    elseif PEAK_SIZE == 3,
 %       for row = 1:25 %% 25 winners in peak
  %          if winners(row,1) > NUM_ROWS,
   %             winners(row,1) = winners(row,1) - NUM_ROWS;
    %        elseif winners(row,1) <= 0,
     %           winners(row,1) = winners(row,1) + NUM_ROWS;
      %      end
       %     if winners(row,2) > NUM_COLS,
        %        winners(row,2) = winners(row,2) - NUM_COLS;
         %   elseif winners(row,2) <= 0,
          %      winners(row,2) = winners(row,2) + NUM_COLS;
           % end
%        end
 %       peak_act = 0;
  %      for unit = 1:25
   %         peak_act = peak_act + act_out(winners(unit,1), winners(unit,2));
    %    end
%    end
    
    total_act = sum(sum(act_out));

    selectivity = peak_act/total_act;
    
  %  c_fos_num = 0;
    
  %  for x = 1: NUM_ROWS
   %     for y = 1:NUM_COLS
    %        if act_out(x,y) > 1
     %           c_fos_num = c_fos_num + 1;
     %      end
     %   end
     %  end
    
%if SINGLE_SESSION == 1,
    
  % fprintf('\nunique_counter = %d', unique_counter);
  % fprintf('\nCYCLE = %d', CYCLE);
  % fprintf('\nwinner activations: ');
 %  for row = 1:9,
 %      fprintf('\nUnit %d, act = %f', row, act_out(winners(row,1), winners(row,2)));
 %      saved_winners(row,unique_counter) = act_out(winners(row,1), winners(row,2));
 %  end
%   saved_winners
%   if NUM_INPUT_DIMS == 18,
%       saved_winners_summed(1) = saved_winners(1);
%       saved_winners_summed(2) = sum(saved_winners(2:5));
%       saved_winners_summed(3) = sum(saved_winners(6:9));       
%       saved_winners_summed(4) = sum(saved_winners(1:9));
%       saved_winners_summed
%   end
   
%   if unique_counter == 3,
 %      for row = 1:9,
  %         mean_winners(row) = mean(saved_winners(row,:));
  %    end
  %     mean_winners
   %    mean_winners_summed(1) = mean_winners(1);
    %   mean_winners_summed(2) = sum(mean_winners(2:5));
     %  mean_winners_summed(3) = sum(mean_winners(6:9));       
      % mean_winners_summed(4) = sum(mean_winners(1:9));
   %    mean_winners_summed
    %   clear saved_winners mean_winners    
    % end
    %end
