function [ win_row, win_col, dist_mat ] = findWinningNode( weights_child, inp_mat, nInpDims )
%%% Find winning node


dist_mat_slices = (weights_child - inp_mat).^2;  % should not even be squared, according to Rosie's paper
% First slice of this contains (squared) distances of x-coords,
% second slice contains (squared) distances of y-coords
dist_mat_temp = sum(dist_mat_slices,3);
% Sum across the 2 matrix slices (or slices of all dimensions) to get total distance

dist_mat = dist_mat_temp./nInpDims;
% Normalise by dividing by num_input_dims

% dist_mat = sqrt(dist_mat_temp);

% NEW CODE: finish distance calc with sqrt
% dist_mat = sqrt(dist_mat);
dist_mat_sqrt = sqrt(dist_mat_temp);

[~,win_row] = min(min(dist_mat_sqrt,[],1));
[~,win_col] = min(min(dist_mat_sqrt,[],2));

% for less than about 800x800, it turns out that double min is faster than
% waht is directly below this comment.
% [~, index] = min(sqrt(dist_mat_temp(:)));
% [win_row, win_col] = ind2sub(size(dist_mat_temp),index);

if length(win_row)>1
    % Finds the row and column of minimal distance grid point(s)
    rand_idx = randi(length(win_row));	% If length(win_rows) is 2, chooses
    % between first and second elements randomly
    win_row = win_row(rand_idx);
    win_col = win_col(rand_idx);
end
%   if CYCLE == NUM_TRAINING_CYCLES,
%      fprintf('\nVD_pretrain.m');
%     fprintf('\ndist_mat');
%    max(max(dist_mat))
%   min(min(dist_mat))
% end


end

