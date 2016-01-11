function [p,weights] = listLength_pretrain(p)

fprintf('\nlistLength_pretrain being executed...');


%%%%%%%%%%%%%%%%%%%%% Perform pre-training of network %%%%%%%%%%%%%%%%
weights = zeros(max(p.numLayers),p.numRows,p.numRows,p.numInputDims(p.numLayers),p.nGrids(1));
for layer = 1:max(p.numLayers)
    
    nInpDims = p.numInputDims(layer);
    
    for grid = 1:p.nGrids(layer),
        fprintf('\n\nLayer number %d, Grid no. %d...\n(1==Caudal, 2==PRC)', layer, grid);
        
        
        % initialize random weights for grids in this layer
        w = listLength_init_weights(p, layer);
        
        %------------------------------------------------------------------
        % begin training cycle of newly generated grid
        %------------------------------------------------------------------
        
        for cycle=1:p.numTrainCycles(layer),
            
            p.eta = cycle^(-p.A);		% Learning rate (how quickly weights are adapted)
            p.G = 0.5 + 10*cycle^(-p.B);		% Gaussian width parameter
            %%% Note: G<0.5 is boring because the Gaussian only covers one node
            
            if cycle == 1 || cycle == p.numTrainCycles(layer),
                fprintf('\nWithin pretrain, Cycle %d, G = %f, ETA = %f', cycle, p.G, p.eta);
            end
            
            [inp_mat] = listLength_gen_limited_input(nInpDims,p); %generate an input vector
            
            %--------------------------------------------------------------
            % Find winning node
            %--------------------------------------------------------------
            [win_row, win_col, dist_mat] = findWinningNode(w, inp_mat, nInpDims);
            
            %------------------------------------------------------------------
            % Calculate each unit's distance from winner and resultant activation
            [f, ~] = listLength_calc_act_fast(win_row, win_col, dist_mat,layer,p);
            
            %             if nInpDims == p.numInputDims_PRC
            %                 p.activationsPretrain_PRC(:,:,grid,cycle)=act;
            %             elseif nInpDims == p.numInputDims_Caudal
            %                 p.activationsPretrain_Caudal(:,:,grid,cycle)=act;
            %
            %             end
            
            %         act = 1./(1+exp(-1*act)); %squashing function %NOW INCLUDED IN calc_act_fast
            
            %%% Update Weights
            w = w + f.*(inp_mat-w);
            
            
        end  % end of training cycles loop
        
        %% Add random noise to the weights
        %         rand_noise = (1 - 2*(rand(p.numRows,p.numRows,nInpDims))); % Creates a matrix of random values between -1 and 1.
        %         w = w + rand_noise;
        %
        %         %%% Squidge the distribution of weight values back into the 0 to 1 range.
        %         w = w + 1;
        %         w = w./3;
        
        % Is there a problem with this, in that only some weight get the maximum possible
        % increment or decrement, and only a subset of these were high or low to start off with, therefore very few end up anywhere
        % near the extremes of the distribution (0 or 1) and thus stimuli that have high or low
        % values tend to have lower matches. Perhaps not as bad as flat_noise_decay version of squidging, since at
        % least the noise increment/decrements will be normally distributed.
        
        %------------------------------------------------------------------
        % Save this pretrained grid
        %------------------------------------------------------------------
        %         location = strcat(p.root,'/rats/rat', num2str(p.ratNum), '/pretrainedW__layer', num2str(layer), 'grid', num2str(grid),'.mat');
        %         save(location, 'w');
        %
        
        weights(layer,:,:,1:p.numInputDims(layer),grid);
    end % end of grid loop
    
    
end % end of layer loop

end