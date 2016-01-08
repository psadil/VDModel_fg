function [learn_rate, neighb_size] = eric_pretrain(W)

global NUM_TRAINING_CYCLES 
global NUM_ROWS NUM_COLS NUM_INPUT_DIMS
global A B B_vect G ETA
global CYCLE ACT_FIG ACT_WEIGHT
global SINGLE_SESSION SIMULATION
global TOTAL_INPUT_DIMS_CONDITIONS WHICH_RAT %Tells you which part of yoked pair or trio this individual simulation is.
global RAT_NUM %%Tells you which rat i.e. which simulation this job is numbered as.

fprintf('\neric_pretrain being executed...');

%%%%%%%%%%%%%%%%%%%%% Perform pre-training of network %%%%%%%%%%%%%%%%
if NUM_INPUT_DIMS == 24,
    for CYCLE=1:NUM_TRAINING_CYCLES,
        ETA = CYCLE^(-A);		% Learning rate (how quickly weights are adapted)
        G = 0.5 + 10*CYCLE^(-B);		% Gaussian width parameter
    	%%% NB: G<0.5 is boring because the Gaussian only covers one node
          
        if CYCLE == 1 | CYCLE == NUM_TRAINING_CYCLES,
            fprintf('\n\nWithin pretrain, CYCLE %d, G = %f, ETA = %f', CYCLE, G, ETA);
        end
    
        %%% Generate input data
        [inp_mat] = eric_gen_limited_input(NUM_INPUT_DIMS); %generate an input vector    
               
    	%%% Find winning node
    	dist_mat_slices = (W - inp_mat).^2;
              % First slice of this contains (squared) distances of x-coords,
              % second slice contains (squared) distances of y-coords
        dist_mat = sum(dist_mat_slices,3);
              % Sum across the 2 matrix slices (or slices of all dimensions) to get total distance
        dist_mat = dist_mat/NUM_INPUT_DIMS;
                            % Normalise by dividing by num_input_dims          
    	[win_rows,win_cols] = find(dist_mat==min(min(dist_mat)));
          % Finds the row and column of minimal distance grid point(s)         
    	rand_idx = ceil(length(win_rows)*rand);	% If length(win_rows) is 2, chooses
                                            % between first and second elements randomly
    	win_row = win_rows(rand_idx);
    	win_col = win_cols(rand_idx);
              % If two or more grid points tie for having shortest dist,
              % we need to pick one of them at random to be the winner.
              % These lines pick a random integer index, and pick the
              % entry from the winners vectors with this index
              
     %   if CYCLE == NUM_TRAINING_CYCLES,
      %      fprintf('\neric_pretrain.m');
       %     fprintf('\ndist_mat');
        %    max(max(dist_mat))
         %   min(min(dist_mat))
         % end
	
         %%% Calculate each unit's distance from winner and resultant activation          
        [f act] = eric_calc_act_fast(win_row, win_col, dist_mat);

    	%%% Plot the map
  %  	if SINGLE_SESSION == 1,
   %        if max(CYCLE == [1 10 50 100 200 500 1000 5000]),
	    	%%% If input has 2 dimensions (i.e. weights are 2-element vectors) plot weights
            %if NUM_INPUT_DIMS == 2
            %   eric_plot_weights(W);
            %end
            %%% plot activation on kohonen layer
       %     eric_plot_activations(act);
    %      end
     %   end

    	%%% Update Weights
    	W = W + f.*(inp_mat-W);
    
    end  %%% Go to next cycle %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

    %rand_noise = 0.1+0.9*rand(NUM_ROWS, NUM_COLS, NUM_INPUT_DIMS);
    %sign_mat = 2*round(rand(NUM_ROWS, NUM_COLS, NUM_INPUT_DIMS))-1;
    %rand_noise = rand_noise.*sign_mat;

    %%% Add random noise to the weights
    rand_noise = (1 - 2*(rand(NUM_ROWS, NUM_COLS, NUM_INPUT_DIMS))); % Creates a matrix of random values between -1 and 1.
    W = W + rand_noise;

    %% Squidge the distribution of weight values back into the 0 to 1 range.
    W = W + 1;
    W = W./3;

    %% Is there a problem with this, in that only some weight get the maximum possible 
    %% increment or decrement, and only a subset of these were high or low to start off with, therefore very few end up anywhere
    %% near the extremes of the distribution (0 or 1) and thus stimuli that have high or low
    %% values tend to have lower matches. Perhaps not as bad as flat_noise_decay version of squidging, since at 
    %% least the noise increment/decrements will be normally distributed.
 
    %%% Return the trained weight matrix and learning rate and G from last cycle
    % w = W;
    learn_rate = ETA;
    neighb_size = G - 0.5;
    
    location = sprintf('/Documents and Settings/rac32/Desktop/_Copy of WD Sync 01-08-2008/C/user1/lead/ro8084co/stochastic_FCOR/rat_%d/pretrainedW.mat', RAT_NUM);
    save(location, 'W');
    
elseif NUM_INPUT_DIMS == 6,
    for grid = 1:4,
        fprintf('\nGrid no. %d...\n', grid);
        for CYCLE=1:NUM_TRAINING_CYCLES,
            ETA = CYCLE^(-A);		% Learning rate (how quickly weights are adapted)
            G = 0.5 + 10*CYCLE^(-B);		% Gaussian width parameter
        	%%% NB: G<0.5 is boring because the Gaussian only covers one node
          
            if CYCLE == 1 | CYCLE == NUM_TRAINING_CYCLES,
                fprintf('Within pretrain, CYCLE %d, G = %f, ETA = %f\n', CYCLE, G, ETA);
            end
    
            %%% Generate input data
            [inp_mat] = eric_gen_limited_input(NUM_INPUT_DIMS); %generate an input vector    
           
        	%%% Find winning node
        	dist_mat_slices = (W - inp_mat).^2;
              % First slice of this contains (squared) distances of x-coords,
              % second slice contains (squared) distances of y-coords
            dist_mat = sum(dist_mat_slices,3);
              % Sum across the 2 matrix slices (or slices of all dimensions) to get total distance
            dist_mat = dist_mat/NUM_INPUT_DIMS;
                            % Normalise by dividing by num_input_dims          
        	[win_rows,win_cols] = find(dist_mat==min(min(dist_mat)));
              % Finds the row and column of minimal distance grid point(s)         
        	rand_idx = ceil(length(win_rows)*rand);	% If length(win_rows) is 2, chooses
                                            % between first and second elements randomly
        	win_row = win_rows(rand_idx);
        	win_col = win_cols(rand_idx);
              % If two or more grid points tie for having shortest dist,
              % we need to pick one of them at random to be the winner.
              % These lines pick a random integer index, and pick the
              % entry from the winners vectors with this index
              
     %   if CYCLE == NUM_TRAINING_CYCLES,
      %      fprintf('\neric_pretrain.m');
       %     fprintf('\ndist_mat');
        %    max(max(dist_mat))
         %   min(min(dist_mat))
         % end
	
             %%% Calculate each unit's distance from winner and resultant activation          
            [f act] = eric_calc_act_fast(win_row, win_col, dist_mat);

        	%%% Plot the map
        %	if SINGLE_SESSION == 1,
         %       if max(CYCLE == [1 10 50 100 200 500 1000 5000]),
	                %%% plot activation on kohonen layer
              %     eric_plot_activations(act);
       %          end
       %     end

        	%%% Update Weights
        	W = W + f.*(inp_mat-W);
    
        end  %%% Go to next cycle %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%rand_noise = 0.1+0.9*rand(NUM_ROWS, NUM_COLS, NUM_INPUT_DIMS);
%sign_mat = 2*round(rand(NUM_ROWS, NUM_COLS, NUM_INPUT_DIMS))-1;
%rand_noise = rand_noise.*sign_mat;

        %%% Add random noise to the weights
        rand_noise = (1 - 2*(rand(NUM_ROWS, NUM_COLS, NUM_INPUT_DIMS))); % Creates a matrix of random values between -1 and 1.
        W = W + rand_noise;
     
  %      if SINGLE_SESSION == 1,
   %         %%% Find winning node
    %    	dist_mat_slices = (W - inp_mat).^2;
     %         % First slice of this contains (squared) distances of x-coords,
              % second slice contains (squared) distances of y-coords
      %      dist_mat = sum(dist_mat_slices,3);
              % Sum across the 2 matrix slices (or slices of all dimensions) to get total distance
       %     dist_mat = dist_mat/NUM_INPUT_DIMS;
                            % Normalise by dividing by num_input_dims          
        %	[win_rows,win_cols] = find(dist_mat==min(min(dist_mat)));
          % Finds the row and column of minimal distance grid point(s)         
        %	rand_idx = ceil(length(win_rows)*rand);	% If length(win_rows) is 2, chooses
                                            % between first and second elements randomly
        %	win_row = win_rows(rand_idx);
        %	win_col = win_cols(rand_idx);
              % If two or more grid points tie for having shortest dist,
              % we need to pick one of them at random to be the winner.
              % These lines pick a random integer index, and pick the
              % entry from the winners vectors with this index

             %%% Calculate each unit's distance from winner and resultant activation          
%            [f act] = eric_calc_act_fast(win_row, win_col, dist_mat);
             %%% plot activation on kohonen layer, now that noise has been added
 %            ACT_FIG = ACT_FIG+1;
           %  eric_plot_activations(act);
  %      end
 
        %% Squidge the distribution of weight values back into the 0 to 1 range.
        W = W + 1;
        W = W./3;

        %% Is there a problem with this, in that only some weight get the maximum possible 
        %% increment or decrement, and only a subset of these were high or low to start off with, therefore very few end up anywhere
        %% near the extremes of the distribution (0 or 1) and thus stimuli that have high or low
        %% values tend to have lower matches. Perhaps not as bad as flat_noise_decay version of squidging, since at 
        %% least the noise increment/decrements will be normally distributed.
 
        %%% Return the trained weight matrix and learning rate and G from last cycle
      %  w = W;
        if WHICH_RAT == 1 && (TOTAL_INPUT_DIMS_CONDITIONS == 1 || TOTAL_INPUT_DIMS_CONDITIONS == 3)
            location = sprintf('/Documents and Settings/rac32/Desktop/_Copy of WD Sync 01-08-2008/C/user1/lead/ro8084co/stochastic_FCOR/rat_%d/pretrainedW_grid%d_lesion.mat', RAT_NUM, grid);
        elseif (WHICH_RAT == 1 && TOTAL_INPUT_DIMS_CONDITIONS == 2) || (WHICH_RAT == 2 && TOTAL_INPUT_DIMS_CONDITIONS == 3)
            location = sprintf('/Documents and Settings/rac32/Desktop/_Copy of WD Sync 01-08-2008/C/user1/lead/ro8084co/stochastic_FCOR/rat_%d/pretrainedW_grid%d_control.mat', RAT_NUM, grid);
        end
        save(location, 'W');
    end %% End of for loop over the four grids.
    learn_rate = ETA;
    neighb_size = G - 0.5;
end %% End of if statement checking NUM_INPUT_DIMS
