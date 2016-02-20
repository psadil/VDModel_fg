function [weights, selec, initial_selec, p, pktot, usePRC, activations, initial_acts] = VD_present_stimulus(stim, weights, p, features_sampled, trial,pktot)

% Function called by VD_present_stimulus.m. Presents the network with the two stimuli on this trial.
% Choose whichever layer demonstrates higher selectivity

% present chosen features of stimulus to all layers. pick the layer with
% the highest selectivity, and output that selectivity

% 5/18/15 ps
% commented out all assignments of activations (in an effort to speed up
% processing), since not looking at them directly right now.

inp_mat = repmat(reshape(stim,[1 1 length(stim)]), [p.nRows p.nRows 1]);

activations = zeros(p.layer,p.nRows,p.nRows,p.maxNumGrids); % 5 grids (only 1 stimulus)
initial_acts = zeros(p.layer,p.nRows,p.nRows,p.maxNumGrids);
selec = zeros(p.numLayers,max(p.numGrids));
initial_selec = zeros(p.numLayers,max(p.numGrids));

acts = zeros(p.nRows,p.nRows);
% pktot.fin_act_peak = zeros(p.numLayers,max(p.numGrids));
% pktot.fin_act_total = zeros(p.numLayers,max(p.numGrids));
% pktot.init_act_peak = zeros(p.numLayers,max(p.numGrids));
% pktot.init_act_total = zeros(p.numLayers,max(p.numGrids));
% winact = zeros(p.numLayers,p.maxNumGrids,2);  % activation in each grid in x,y coordinates?

row_dist_mat = zeros(p.numRows,p.numRows,2);
col_dist_mat = zeros(p.numRows,p.numRows,2);
selectivity = 0;
act_peak = 0;
act_total = 0;

% only use PRC layer if available and enough features were sampled
if (p.layer == 2) && (length(features_sampled) == p.numGrids_Caudal)
    2;
    usePRC = 1;
else
    usePRC = 0;
end

%% Expose network to stimuli and update weights
% switchRatio = 0;

% fix = 0;
% while switchRatio < p.fixn_ratio_lowHigh(p.stimCond)
%
%     % if fixation wasn't outside of stimulus, incriment fixations
%     % for each encoding cycle
%     p.fixations(trial) = p.fixations(trial) + 1; %% total fixations across both stimuli
%
for layer=1:p.layer
    
    firstFeatureToCheck=(1:p.numInputDims(layer):p.nGrids(layer)*p.numInputDims(layer));
    lastFeatureToCheck = firstFeatureToCheck+p.numInputDims(layer)-1;
    
    
    for grid = 1:p.nGrids(layer),
        
        input_mat=zeros(p.nRows,p.nRows,p.numInputDims(layer));
        
        % should end with a (:,:,15) input_mat for PRC layer that checks features 1:15, and a (:,:,3) input_mat for caudal, where each 4th-dim checks three features
        input_mat(:,:,:)=inp_mat(:,:,(firstFeatureToCheck(grid):lastFeatureToCheck(grid)));
        
        % put the variable 'weights' into the format previously accepted by the model.
        weights_child = weights(layer,:,:,1:p.numInputDims(layer),grid);
        weights_child = squeeze(weights_child);
        
        % if no features that this grid pays attention to were sampled,
        % or if dealing with PRC but 5 features weren't sampled, skip
        % presenting
        %         if (layer==1 && (~any(features_sampled==grid) || usePRC)) || (layer==2 && ~usePRC)
        if ~p.fives
            if (layer==1 && (~any(features_sampled==grid))) || (layer==2 && ~usePRC)
                if layer ==2
                    2;
                end
                
                continue
            end
        end
        
        nEncodCycles = p.nEncodCycles;
        if p.variableEncode
            stick_switch = rand;
            while stick_switch < p.fixn_ratio_lowHigh(p.stimCond)
                nEncodCycles = nEncodCycles+p.nEncodCycles;
                p.fixations(trial) = p.fixations(trial) + 1; %% total fixations across both stimuli
                stick_switch = rand;
            end
        end
        
        
        %------------------------------------------------------------------
        % Find winning node
        %--------------------------------------------------------------
        [win_row, win_col, dist_mat] = findWinningNode(weights_child, input_mat(:,:,:), p.numInputDims(layer));
        
        for cycle=1:nEncodCycles
            
            
            %             p.winning(layer,grid,trial,1:2) = [win_row, win_col];
            
            %--------------------------------------------------------------
            %Calculate each unit's distance from winner and activation
            %--------------------------------------------------------------
            
            
            %             [f, acts, selectivity, p, act_peak, act_total] = VD_calc_selectivity_fast(win_row, win_col, dist_mat, p, p.numInputDims(layer), trial, layer);
            %%% Calculate city-block distance from winner in grid, with wraparound
            
            
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
            
            % find how far away each node is from the winner
            % grid_idx = pdist2(p.idxMat,[win_row,win_col],'cityblock');
            % grid_dist = reshape(grid_idx,[p.numRows,p.numRows]);
            % grid_dist(grid_dist>p.numRows) = grid_dist(grid_dist>p.numRows)-p.numRows;
            
            f_1dim = p.etaExp*exp(-(grid_dist/p.G_exp).^2);
            
            % f_out=zeros(p.numRows,p.numRows,nInpDims);
            f = repmat(f_1dim,[1,1,p.numInputDims(layer)]);
            
            acts = log(ones(p.nRows,p.nRows)./dist_mat);   % create this ln thing that deals with distance of nodes away from original stimulus vector
            %                                                   (not winning node, because this is used for 'recognition' ratio ((S_samp-S_nov)/(S_samp+S_nov)))
            acts = 1./(1+exp(-1*acts)); %squashing function   (why squash?)
            %may make sense to go back to version where we 'cap' the distance (because then the dynamic range of
            %outputs starts at 0 rather than 0.5)
            
            winners = zeros(p.sizeOfPeak,2);
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
            
            for win_unit = 1:p.sizeOfPeak %% however many winners in peak
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
            for unit = 1:p.sizeOfPeak
                act_peak = act_peak + acts(winners(unit,1), winners(unit,2));
            end
            
            % p.act_peak(trial,layer) = act_peak;
            
            act_total = sum(sum(acts));
            selectivity = act_peak/act_total;
            
            %%
            if cycle==1,  %need to compare last set of weights of old grid to
                initial_selec(layer,grid) = selectivity;
                pktot.init_act_peak(layer,grid) = act_peak;
                pktot.init_act_total(layer,grid) = act_total;
                
                % initial weights of new grid.
                initial_acts(layer,:,:,grid) = acts;
                
            end
            
            
            %%% Update Weights
            weights_child = weights_child + f.*(input_mat(:,:,:)-weights_child);  % update based on spire around winning node
            
            
        end %%% Go to next cycle (if switchRatio is low enough)
        weights(layer,:,:,1:p.numInputDims(layer),grid) = weights_child; %% Overwrite weight values in the orignial W matrix, for this grid.
        activations(layer,:,:,grid) = acts; % use activations as calculated AFTER final weight update
        selec(layer,grid) = selectivity;
        pktot.fin_act_peak(layer,grid) = act_peak;
        pktot.fin_act_total(layer,grid) = act_total;
        
    end  % end of loop for each grid
    
end % end of layer loop

%     nothingRatio = rand;
%     if nothingRatio > p.outsideRatio(p.stimCond)
%         p.fixations(trial) = p.fixations(trial) + 1; %% total fixations across both stimuli
%     end

%     fix = fix+1;
%     % determine whether to stay or switch to other stimulus
%     switchRatio = rand;
% % end


