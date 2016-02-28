function [f_out, act_out, selectivity, p, act_peak, act_total] = VD_calc_selectivity_fast(win_row, win_col, dist_mat,p, nInpDims)

%% Function called from VD_present_stimulus.m. Calculates grid_dist matrix, then
%% calculates all units' activities and selectivity of activation peak.


%%find distance of each unit from winner (using gridMat, which stores the position of each unit in the grid)
%%create a matrix with a slice for each of the two potential minimum distances for rows and cols
row_dist_mat(:,:,1) = abs(p.gridMat(:,:,1) - win_row);
row_dist_mat(:,:,2) = p.nRows - abs(p.gridMat(:,:,1) - win_row);
col_dist_mat(:,:,1) = abs(p.gridMat(:,:,2) - win_col);
col_dist_mat(:,:,2) = p.nRows - abs(p.gridMat(:,:,2) - win_col);
%%find the minimum of the two values for row and for col
min_row_dist_mat = min(row_dist_mat,[],3);
min_col_dist_mat = min(col_dist_mat,[],3);
%%Sum the two minimum distances to get the city_block distance
grid_dist = min_row_dist_mat + min_col_dist_mat;

%%% Calculate Gaussian movement-strength function for each node
f_1dim = p.etaExp .*exp(-(grid_dist.^2)./(2*p.sigma2));


f_out=zeros(p.numRows,p.numRows,nInpDims);
for dim=1:nInpDims
    f_out(:,:,dim) = f_1dim;
end


act_out = exp(-(grid_dist.^2)./(2*p.sigma2)).*(1-p.a*tanh(p.b*min(dist_mat(:))));


act_total = sum(act_out(:));
act_peak = act_total;
selectivity = act_total;

end