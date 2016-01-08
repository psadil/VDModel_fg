function [act_val, grid_pos, grid_coords] = eric_calc_winner_location(activations)

%% Function called by eric_choice.m

global NUM_ROWS NUM_COLS NUM_INPUT_DIMS
global ETA G

[act_val grid_pos] = max(activations(:)); %% Returns activation value and position in grid of winner

%fprintf('\nact_val = %f\n', act_val);
%fprintf('grid_pos = %d\n', grid_pos);

grid_coords = [0 0];
grid_coords(1) = (rem(grid_pos-1, NUM_ROWS)+1); %% NB have to put the -1 and +1 so that a grid_pos that is a multiple of NUM_ROWS does not yield row 'zero'.
grid_coords(2) = (floor(grid_pos/NUM_ROWS)) + 1;

%fprintf('\ngrid_coords = [%d %d]', grid_coords(1), grid_coords(2));

%[win_rows,win_cols] = find(activations==max(max(activations)));
%rand_idx = ceil(length(win_rows)*rand);	% If length(win_rows) is 2, chooses between first and second elements randomly
%win_row = win_rows(rand_idx);
%win_col = win_cols(rand_idx);

%fprintf('\nwin_row = %d, win_col = %d', win_row, win_col);

%%Dave Touretsky's code to do same thing (I rewrote it, above, in a way that I could understand)
%%function [wi,wj] =  kohcoords(k,gridsize)
%%wj = 1+floor((k-1)/gridsize(1));
%%wi = k-(wj-1)*gridsize(1);

%%To find second highest activated node:
%%Set winner's activation to zero
activations(grid_coords(1), grid_coords(2)) = 0;
%%Search for new maximum activation
[act_val2 grid_pos2] = max(activations(:));

%fprintf('\nact_val2 = %f\n', act_val2);
%fprintf('grid_pos2 = %d\n', grid_pos2);

grid_coords2 = [0 0];
grid_coords2(1) = rem(grid_pos2, NUM_ROWS);
grid_coords2(2) = (floor(grid_pos2/NUM_ROWS)) + 1;

%fprintf('grid_coords2 = [%d %d]\n', grid_coords2(1), grid_coords2(2));
