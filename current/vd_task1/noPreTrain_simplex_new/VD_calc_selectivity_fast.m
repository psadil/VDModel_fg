function [f_out, act_out, selectivity, p, act_peak, act_total] = VD_calc_selectivity_fast(win_row, win_col, dist_mat,p, nInpDims)

%% Function called from VD_present_stimulus.m. Calculates grid_dist matrix, then
%% calculates all units' activities and selectivity of activation peak.

%%% Calculate city-block distance from winner in grid, with wraparound
sizeOfPeak = p.sizeOfPeak;


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
% p.etaShrinking = p.etaExp*(p.fixations_total)^(-p.A_encoding);

% -------------------------------------------------------------------------
%  CRAZY NEW MOD:
% no longer is distance from the winner being calculated in torus-space, as
% per
% f_1dim = p.etaExp*exp(-(grid_dist/p.G_exp).^2);
% instead, distance from winner will be calculated in weight space...

% NEVERMIND...this shouldn't be done because then the kohonen network would
% lose it's topographic organization (neurons close to each other would no
% longer represent 'similar' images...
% -------------------------------------------------------------------------

% COMMENT WHEN RUNNING FOR REAL!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
% grid_dist = (grid_dist < 2) .* grid_dist;

% consider trying a=1.759 and b=(2/3) stuff
f_1dim = p.etaExp .*exp(-(grid_dist.^2)./(2*p.sigma2)).*(1-tanh(max(dist_mat(:))));
f_1dim = f_1dim .* (grid_dist < p.filtPeak);

% MAYBE BRING THIS BACK!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
% f_out = repmat(f_1dim,[1,1,nInpDims]);

f_out=zeros(p.numRows,p.numRows,nInpDims);
for dim=1:nInpDims
    f_out(:,:,dim) = f_1dim;
end

% act_out = log(ones(p.nRows,p.nRows) ./ dist_mat);   % create this ln thing that deals with distance of nodes away from original stimulus vector
%                                                   (not winning node, because this is used for 'recognition' ratio ((S_samp-S_nov)/(S_samp+S_nov)))
% surf(act_out)
% max(max(act_out))
% close all


% act_out = p.a + ((p.k - p.a)./ ((p.c + p.q * exp(-p.b*act_out)).^(1/p.v)));

% act_out = 1./(1+exp(-p.k_expt*act_out));
% act_out = tanh(act_out);
act_out = exp(-(grid_dist.^2)./(2*p.sigma2)).*(1-tanh(max(dist_mat(:))));

%
% surf(act_out)
% max(act_out)
% close all

%may make sense to go back to version where we 'cap' the distance (because then the dynamic range of
%outputs starts at 0 rather than 0.5)

% surf(act_out);

%%% initialise array and record winner for all situations
winners = zeros(9,2);
winners(1,:) = [win_row win_col];
%city block distance 1 neighbours
winners(2,:) = [win_row win_col+1];
winners(3,:) = [win_row win_col-1];
winners(4,:) = [win_row+1 win_col];
winners(5,:) = [win_row-1 win_col];
%city block distance 2 neighbours
winners(6,:) = [win_row+1 win_col+1];
winners(7,:) = [win_row+1 win_col-1];
winners(8,:) = [win_row-1 win_col-1];
winners(9,:) = [win_row-1 win_col+1];
%city block distance 2-in-a-line neighbours
winners(10,:) = [win_row win_col+2];
winners(11,:) = [win_row win_col-2];
winners(12,:) = [win_row+2 win_col];
winners(13,:) = [win_row-2 win_col];
%city block distance 3 neighbours
winners(14,:) = [win_row+1 win_col+2];
winners(15,:) = [win_row+1 win_col-2];
winners(16,:) = [win_row-1 win_col+2];
winners(17,:) = [win_row-1 win_col-2];
winners(18,:) = [win_row+2 win_col+1];
winners(19,:) = [win_row+2 win_col-1];
winners(20,:) = [win_row-2 win_col+1];
winners(21,:) = [win_row-2 win_col-1];
%city block distance 3-in-a-line neighbours
winners(22,:) = [win_row win_col+3];
winners(23,:) = [win_row win_col-3];
winners(24,:) = [win_row+3 win_col];
winners(25,:) = [win_row-3 win_col];

for win_unit = 1:sizeOfPeak %% however many winners in peak
    if winners(win_unit,1) > p.nRows,
        winners(win_unit,1) = winners(win_unit,1) - p.nRows;
    elseif winners(win_unit,1) <= 0,
        winners(win_unit,1) = winners(win_unit,1) + p.nRows;
    end
    if winners(win_unit,2) > p.nRows,
        winners(win_unit,2) = winners(win_unit,2) - p.nRows;
    elseif winners(win_unit,2) <= 0,
        winners(win_unit,2) = winners(win_unit,2) + p.nRows;
    end
end

% if any(isnan(act_out))
%    act_out(isnan(act_out))=0;
% end

act_peak = 0;
for unit = 1:sizeOfPeak
    act_peak = act_peak + act_out(winners(unit,1), winners(unit,2));
end

% p.act_peak(trial,layer) = act_peak;

act_total = sum(act_out(:));
% selectivity = act_peak/act_total;
selectivity = act_total;
% % if isnan(selectivity)
% %    2;
% end
% p.totalAct(trial,layer) = act_total;

end