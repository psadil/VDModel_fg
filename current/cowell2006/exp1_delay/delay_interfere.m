function [ p, weights ] = delay_interfere( p, delayCycles, weights )
%delay_interfere simulates intereference during delay cycles
%   Detailed explanation goes here

fprintf('\ninterference being executed...');

for layer = 1:max(p.numLayers)
    for grid = 1:p.nGrids(layer),
        for cycle=1:delayCycles,
                        
            [inp_mat] = delay_gen_limited_input(p.numInputDims(layer),p); %generate an input vector
            
            %--------------------------------------------------------------
            % Find winning node
            %--------------------------------------------------------------
            [win_row, win_col, dist_mat] = findWinningNode(w, inp_mat, p.numInputDims(layer));
            
            
            %--------------------------------------------------------------
            % Calculate each unit's distance from winner, for use in
            % updating
            [f, ~] = VD_calc_act_fast(win_row, win_col, dist_mat,layer,p);
                        
            %%% Update Weights
            w = w + f.*(inp_mat-w);
            
            
        end    
    end 
end 

end

