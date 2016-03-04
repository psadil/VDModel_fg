function [W, initial_selec, p, pktot, initial_selec_gauss] = present_stimulus(stim, W, p, trial,pktot)

inp_mat = repmat(reshape(stim,[1 1 length(stim)]), [p.nRows p.nRows 1]);

% act_out = zeros(p.layer,p.nRows,p.nRows,p.maxNumGrids); % old outputs
% initial_acts = zeros(p.layer,p.nRows,p.nRows,p.maxNumGrids);
% selec = zeros(p.numLayers,max(p.numGrids));
initial_selec = zeros(p.numLayers,max(p.numGrids));
initial_selec_gauss = zeros(p.numLayers,max(p.numGrids));

% initial_weights = zeros(size(W));


%% Expose network to stimuli and update weights

for layer=1:p.layer
    
    firstFeatureToCheck=(1:p.numInputDims(layer):p.nGrids(layer)*p.numInputDims(layer));
    lastFeatureToCheck = firstFeatureToCheck+p.numInputDims(layer)-1;
    
    for grid = 1:p.nGrids(layer),
        
        %         input_mat=zeros(p.nRows,p.nRows,p.numInputDims(layer));
        
        %         input_mat(:,:,:)=inp_mat(:,:,(firstFeatureToCheck(grid):lastFeatureToCheck(grid)));
        input_mat=inp_mat(:,:,(firstFeatureToCheck(grid):lastFeatureToCheck(grid)));
        
        % put the variable 'weights' into the format previously accepted by the model.
        weights = squeeze(W(layer,:,:,1:p.numInputDims(layer),grid));
        
        %% update weights on new stimuli for initial calc of selectivity
        
        
        for cycle=1:p.numEncodingCycles
            
            [win_row, win_col, dist_mat] = findWinningNode(weights, input_mat, p.numInputDims(layer));
            
            
            p.winning(layer,grid,trial,1:2) = [win_row, win_col];
            
            %--------------------------------------------------------------
            %Calculate each unit's distance from winner and activation
            %--------------------------------------------------------------
            [f, selectivity, p, ~, ~, actGauss] = ...
                calc_selectivity(win_row, win_col, dist_mat, p, p.numInputDims(layer));
            
            if cycle==1,  %need to compare last set of weights of old grid to
                initial_selec(layer,grid) = selectivity;
                initial_selec_gauss(layer,grid) = actGauss;
%                 pktot.init_act_peak(layer,grid) = act_peak;
%                 pktot.init_act_total(layer,grid) = act_total;
                
                % initial weights of new grid.
%                 initial_acts(layer,:,:,grid) = acts;
%                 initial_weights(layer,:,:,1:p.numInputDims(layer),grid) = weights;
            end
            
            % Update Weights
            weights = weights + f.*(input_mat-weights);  % update based on spire around winning node
            
            
        end %%% Go to next cycle (if switchRatio is low enough)
        
        
        % final calculation of selectivity, now that encoding has been
        % completed
%         [win_row, win_col, dist_mat] = findWinningNode(weights, input_mat, p.numInputDims(layer));
%         [~, selectivity, p, act_peak, act_total] = delay_calc_selectivity(win_row, win_col, dist_mat, p, p.numInputDims(layer));
        
        
        W(layer,:,:,1:p.numInputDims(layer),grid) = weights;
%         act_out(layer,:,:,grid) = acts;
%         selec(layer,grid) = selectivity;
%         pktot.fin_act_peak(layer,grid) = act_peak;
%         pktot.fin_act_total(layer,grid) = act_total;
        
        
    end
end

end