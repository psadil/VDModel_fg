function [ p, weights ] = listLength_interfere( p, weights )
%listLength_interfere simulates intereference during delay cycles
%   Detailed explanation goes here

fprintf('\ninterference being executed...');

for layer = 1:max(p.numLayers)
    for grid = 1:p.nGrids(layer),
        
        % put the variable 'weights' into the format previously accepted by the model.
        w = squeeze(weights(layer,:,:,1:p.numInputDims(layer),grid));
        
        for cycle=1:p.delayCycles(p.stimCond),
                        
            inp_mat = listLength_gen_limited_input(p.numInputDims(layer),p); %generate an input vector
            
            %--------------------------------------------------------------
            % Find winning node
            %--------------------------------------------------------------
            [win_row, win_col, dist_mat] = findWinningNode(w, inp_mat, p.numInputDims(layer));
            
            
            %--------------------------------------------------------------
            % Calculate each unit's distance from winner, for use in
            % updating
            [f, ~] = listLength_calc_act_fast(win_row, win_col, dist_mat,layer,p);
                        
            %%% Update Weights
            w = w + f.*(inp_mat-w);
            
            
        end
        weights(layer,:,:,1:p.numInputDims(layer),grid) = w;
    end
    

end 

end

