function [W, selec, initial_selec, p, pktot, usePRC, act_out, initial_acts,initial_weights] = delay_present_stimulus(stim, W, p, features_sampled, trial,pktot)

% Function called by VD_present_stimulus.m. Presents the network with the two stimuli on this trial.
% Choose whichever layer demonstrates higher selectivity

% present chosen features of stimulus to all layers. pick the layer with
% the highest selectivity, and output that selectivity

inp_mat = repmat(reshape(stim,[1 1 length(stim)]), [p.nRows p.nRows 1]);

act_out = zeros(p.layer,p.nRows,p.nRows,p.maxNumGrids); % 5 grids (only 1 stimulus)
initial_acts = zeros(p.layer,p.nRows,p.nRows,p.maxNumGrids);
selec = zeros(p.numLayers,max(p.numGrids));
initial_selec = zeros(p.numLayers,max(p.numGrids));

initial_weights = zeros(size(W));

usePRC = 1;



%% Expose network to stimuli and update weights

for layer=1:p.layer
    
    firstFeatureToCheck=(1:p.numInputDims(layer):p.nGrids(layer)*p.numInputDims(layer));
    lastFeatureToCheck = firstFeatureToCheck+p.numInputDims(layer)-1;
    
    for grid = 1:p.nGrids(layer),
        
        input_mat=zeros(p.nRows,p.nRows,p.numInputDims(layer));
        
        % should end with a (:,:,15) input_mat for PRC layer that checks features 1:15, and a (:,:,3) input_mat for caudal, where each 4th-dim checks three features
        input_mat(:,:,:)=inp_mat(:,:,(firstFeatureToCheck(grid):lastFeatureToCheck(grid)));
        
        % put the variable 'weights' into the format previously accepted by the model.
        weights = W(layer,:,:,1:p.numInputDims(layer),grid);
        weights = squeeze(weights);
        
        %% update weights on new stimuli for initial calc of selectivity
        
        
        for cycle=1:nEncodCycles
            
            [win_row, win_col, dist_mat] = findWinningNode(weights, input_mat, p.numInputDims(layer));
            
            
            p.winning(layer,grid,trial,1:2) = [win_row, win_col];
            
            %--------------------------------------------------------------
            %Calculate each unit's distance from winner and activation
            %--------------------------------------------------------------
            [f, acts, selectivity, p, act_peak, act_total] = VD_calc_selectivity_fast(win_row, win_col, dist_mat, p, p.numInputDims(layer));
            
            % Update Weights
            weights = weights + f.*(input_mat-weights);  % update based on spire around winning node
            
            
            if cycle==1,  %need to compare last set of weights of old grid to
                initial_selec(layer,grid) = selectivity;
                pktot.init_act_peak(layer,grid) = act_peak;
                pktot.init_act_total(layer,grid) = act_total;
                
                % initial weights of new grid.
                initial_acts(layer,:,:,grid) = acts;
                
                initial_weights(layer,:,:,1:p.numInputDims(layer),grid) = weights;
                
            end
            
            
        end %%% Go to next cycle (if switchRatio is low enough)
        
        
        % final calculation of selectivity, now that encoding has been
        % completed
        [win_row, win_col, dist_mat] = findWinningNode(weights, input_mat, p.numInputDims(layer));
        [~, acts, selectivity, p, act_peak, act_total] = VD_calc_selectivity_fast(win_row, win_col, dist_mat, p, p.numInputDims(layer));
        
        
        W(layer,:,:,1:p.numInputDims(layer),grid) = weights;
        act_out(layer,:,:,grid) = acts;
        selec(layer,grid) = selectivity;
        pktot.fin_act_peak(layer,grid) = act_peak;
        pktot.fin_act_total(layer,grid) = act_total;
        
        
    end
end

end