function [w, inp_1_mat, inp_2_mat, ETA] = eric_sample_train(learn_rate, neighb_size)

% Function called by ericwrap.m. Trains the network on the sample stimuli,
% after getting stimulus inputs from stimuli.mat file.        

global TEST_PARADIGM sess LIST_LENGTH
global NUM_ENCODING_CYCLES
global EXPT STIM_CONDITION STIM_SET NUM_ROWS NUM_COLS NUM_INPUT_DIMS
global G ETA
global CYCLE simulation_number
global STIMULUS PHASE ACT_FIG
global SINGLE_SESSION unique_counter
global fid
global WHICH_RAT TOTAL_INPUT_DIMS_CONDITIONS
global RAT_NUM

%%%%%%%%%%%% Get input data for sample stimulus/i from stimulus files (in EXPT directory) %%%%%%%%%%%
if TEST_PARADIGM == 1 | TEST_PARADIGM == 3, 
    %NB don't need to ask about dimensions because stimuli will have 8 elements whatever layer we're on.
    location = sprintf('/Documents and Settings/rac32/Desktop/_Copy of WD Sync 01-08-2008/C/user1/lead/ro8084co/stochastic_FCOR/%s/condition%d/stimuli.mat', EXPT, STIM_CONDITION);
    fid = load(location);
    fclose('all');
    stim_name = sprintf('stimuli%d', STIM_SET);
    S = fid.(stim_name);
    inp_1_vect = S(1, :);
    inp_1_mat = cat(3, inp_1_vect(1)*ones(NUM_ROWS,NUM_COLS), inp_1_vect(2)*ones(NUM_ROWS,NUM_COLS), ...
                   inp_1_vect(3)*ones(NUM_ROWS,NUM_COLS), inp_1_vect(4)*ones(NUM_ROWS,NUM_COLS), ...
                   inp_1_vect(5)*ones(NUM_ROWS,NUM_COLS), inp_1_vect(6)*ones(NUM_ROWS,NUM_COLS), ...
                   inp_1_vect(7)*ones(NUM_ROWS,NUM_COLS), inp_1_vect(8)*ones(NUM_ROWS,NUM_COLS), ...
                   inp_1_vect(9)*ones(NUM_ROWS,NUM_COLS), inp_1_vect(10)*ones(NUM_ROWS,NUM_COLS), ...
                   inp_1_vect(11)*ones(NUM_ROWS,NUM_COLS), inp_1_vect(12)*ones(NUM_ROWS,NUM_COLS), ...
                   inp_1_vect(13)*ones(NUM_ROWS,NUM_COLS), inp_1_vect(14)*ones(NUM_ROWS,NUM_COLS), ...
                   inp_1_vect(15)*ones(NUM_ROWS,NUM_COLS), inp_1_vect(16)*ones(NUM_ROWS,NUM_COLS), ...
                   inp_1_vect(17)*ones(NUM_ROWS,NUM_COLS), inp_1_vect(18)*ones(NUM_ROWS,NUM_COLS), ...
                   inp_1_vect(19)*ones(NUM_ROWS,NUM_COLS), inp_1_vect(20)*ones(NUM_ROWS,NUM_COLS), ...
                   inp_1_vect(21)*ones(NUM_ROWS,NUM_COLS), inp_1_vect(22)*ones(NUM_ROWS,NUM_COLS), ...
                   inp_1_vect(23)*ones(NUM_ROWS,NUM_COLS), inp_1_vect(24)*ones(NUM_ROWS,NUM_COLS));
    inp_2_mat = 0; %% To satisfy output argument of function.
elseif TEST_PARADIGM == 2, 
   % STIMULUS = 1;      
    location = sprintf('/Documents and Settings/rac32/Desktop/_Copy of WD Sync 01-08-2008/C/user1/lead/ro8084co/stochastic_FCOR/%s/condition%d/stimuli.mat', EXPT, STIM_CONDITION);
    fid = load(location);
    fclose('all');
    stim_name = sprintf('stimuli%d', STIM_SET);
    S = fid.(stim_name);
    inp_1_vect = S(1,:);
    inp_1_mat = cat(3, inp_1_vect(1)*ones(NUM_ROWS,NUM_COLS), inp_1_vect(2)*ones(NUM_ROWS,NUM_COLS), ...
                  inp_1_vect(3)*ones(NUM_ROWS,NUM_COLS), inp_1_vect(4)*ones(NUM_ROWS,NUM_COLS), ...
                   inp_1_vect(5)*ones(NUM_ROWS,NUM_COLS), inp_1_vect(6)*ones(NUM_ROWS,NUM_COLS), ...
                   inp_1_vect(7)*ones(NUM_ROWS,NUM_COLS), inp_1_vect(8)*ones(NUM_ROWS,NUM_COLS), ...
                   inp_1_vect(9)*ones(NUM_ROWS,NUM_COLS), inp_1_vect(10)*ones(NUM_ROWS,NUM_COLS), ...
                   inp_1_vect(11)*ones(NUM_ROWS,NUM_COLS), inp_1_vect(12)*ones(NUM_ROWS,NUM_COLS), ...
                   inp_1_vect(13)*ones(NUM_ROWS,NUM_COLS), inp_1_vect(14)*ones(NUM_ROWS,NUM_COLS), ...
                   inp_1_vect(15)*ones(NUM_ROWS,NUM_COLS), inp_1_vect(16)*ones(NUM_ROWS,NUM_COLS), ...
                   inp_1_vect(17)*ones(NUM_ROWS,NUM_COLS), inp_1_vect(18)*ones(NUM_ROWS,NUM_COLS), ...
                   inp_1_vect(19)*ones(NUM_ROWS,NUM_COLS), inp_1_vect(20)*ones(NUM_ROWS,NUM_COLS), ...
                   inp_1_vect(21)*ones(NUM_ROWS,NUM_COLS), inp_1_vect(22)*ones(NUM_ROWS,NUM_COLS), ...
                   inp_1_vect(23)*ones(NUM_ROWS,NUM_COLS), inp_1_vect(24)*ones(NUM_ROWS,NUM_COLS));
%    STIMULUS = 2;
    inp_2_vect = S(2, :);
    inp_2_mat = cat(3, inp_2_vect(1)*ones(NUM_ROWS,NUM_COLS), inp_2_vect(2)*ones(NUM_ROWS,NUM_COLS), ...
                  inp_2_vect(3)*ones(NUM_ROWS,NUM_COLS), inp_2_vect(4)*ones(NUM_ROWS,NUM_COLS), ...
                   inp_2_vect(5)*ones(NUM_ROWS,NUM_COLS), inp_2_vect(6)*ones(NUM_ROWS,NUM_COLS), ...
                   inp_2_vect(7)*ones(NUM_ROWS,NUM_COLS), inp_2_vect(8)*ones(NUM_ROWS,NUM_COLS), ...
                   inp_2_vect(9)*ones(NUM_ROWS,NUM_COLS), inp_2_vect(10)*ones(NUM_ROWS,NUM_COLS), ...
                   inp_2_vect(11)*ones(NUM_ROWS,NUM_COLS), inp_2_vect(12)*ones(NUM_ROWS,NUM_COLS), ...
                   inp_2_vect(13)*ones(NUM_ROWS,NUM_COLS), inp_2_vect(14)*ones(NUM_ROWS,NUM_COLS), ...
                   inp_2_vect(15)*ones(NUM_ROWS,NUM_COLS), inp_2_vect(16)*ones(NUM_ROWS,NUM_COLS), ...
                   inp_2_vect(17)*ones(NUM_ROWS,NUM_COLS), inp_2_vect(18)*ones(NUM_ROWS,NUM_COLS), ...
                   inp_2_vect(19)*ones(NUM_ROWS,NUM_COLS), inp_2_vect(20)*ones(NUM_ROWS,NUM_COLS), ...
                   inp_2_vect(21)*ones(NUM_ROWS,NUM_COLS), inp_2_vect(22)*ones(NUM_ROWS,NUM_COLS), ...
                   inp_2_vect(23)*ones(NUM_ROWS,NUM_COLS), inp_2_vect(24)*ones(NUM_ROWS,NUM_COLS));
end

%%%%%%%%%%%%%%% Train network on sample stimulus/i  %%%%%%%%%%%%%%%%    
if NUM_INPUT_DIMS == 24,   
    if TEST_PARADIGM == 1 | TEST_PARADIGM == 3,
       num_stimuli = 1;
   elseif TEST_PARADIGM == 2,
       num_stimuli = 2;
   end
   for stimulus = 1:num_stimuli, 
      ACT_FIG = ACT_FIG+1; %% Increment ACT_FIG before each stimulus is presented
      count = 0; % Set this variable to zero before looping through encoding cycles.
      %%Try putting this outside cycle loop to speed up simulations.
      if stimulus == 1,
          inp_mat = inp_1_mat; 
      elseif stimulus == 2,
          inp_mat = inp_2_mat; 
      end % End of if stimulus loop
      
      %%Load the weights, on the first sample stimulus only (only >1 when there are two sample phases)!
      if stimulus == 1,
          location = sprintf('/Documents and Settings/rac32/Desktop/_Copy of WD Sync 01-08-2008/C/user1/lead/ro8084co/stochastic_FCOR/rat_%d/pretrainedW.mat', RAT_NUM);
          load(location);   
          fclose('all');
      end
    
      for CYCLE=1:NUM_ENCODING_CYCLES,
         % ETA = learn_rate*CYCLE^(-A_samp);		% Learning rate - decreases from value at end of pre-training phase
	       ETA = 0.35;
           if CYCLE == 1,
               G = 0.5 + neighb_size*CYCLE; % Gaussian width parameter - takes value at end of pre-training phase
               fprintf('\n\nWithin sampletrain, CYCLE %d, G = %f, ETA = %f', CYCLE, G, ETA);
              %    elseif CYCLE >1,
      %        G = 0.5 + neighb_size*10*(1/winact(stimulus));
           end    
                         
           if CYCLE == NUM_ENCODING_CYCLES
               end_G = G;   %% Save the final G value for trace decay function
           end
                              
     	   %%% Find winning node
           dist_mat_slices = (W - inp_mat).^2;
                  % First slice of this contains (squared) distances of x-coords,
                  % second slice contains (squared) distances of y-coords
           dist_mat = sum(dist_mat_slices,3);
                  % Sum across x and y slices to get total distance
           dist_mat = dist_mat/NUM_INPUT_DIMS;
                            % Normalise by dividing by num_input_dims         
           [win_rows,win_cols] = find(dist_mat==min(min(dist_mat)));
                   % Finds the row and column of minimal distance grid point(s)
           rand_idx = ceil(length(win_rows)*rand);	% If length(win_Rows) is 2, chooses
                                                % between first and second elements randomly
           win_row = win_rows(rand_idx);
           win_col = win_cols(rand_idx);
           
           %% Get rid of any very small values.
       %    dist_mat(dist_mat<0.0001) = 0.0001;
           
           unique_counter = 1;     
           %%% Calculate each unit's distance from winner and activation
           if CYCLE == 1,
              [f act peak_act total_act selectivity winners] = eric_calc_selectivity_fast(win_row, win_col, dist_mat);
              clear peak_act total_act selectivity winners
           else
               [f act] = eric_calc_act_fast(win_row, win_col, dist_mat);
           end
                             
           %%% Save the activation of the winner for calculation of G on next cycle
           winact(stimulus) = act(win_row, win_col);
         
    %       if SINGLE_SESSION == 1,
	   %        if max(CYCLE == [1 10 20 25 30 50 100 ]),
	             %%% plot activation on kohonen layer
%                 eric_plot_activations(act);
%          end
%      end
                     
           %%% Update Weights
	       W = W + f.*(inp_mat-W);
                
      %    if SINGLE_SESSION == 1,
         %      if max(CYCLE == [1 5 NUM_ENCODING_CYCLES/2 15 NUM_ENCODING_CYCLES])
                   %%% Calculate dist_mat again to calculate activation for saving to file
          %    	   dist_mat_slices = (W - inp_mat).^2;
                      % First slice of this contains (squared) distances of x-coords,
                      % second slice contains (squared) distances of y-coords
           %        dist_mat = sum(dist_mat_slices,3);
                      % Sum across x and y slices to get total distance
            %       dist_mat = dist_mat/NUM_INPUT_DIMS;
                                     % Normailse by dividing by num_input_dims         
             %      [win_rows,win_cols] = find(dist_mat==min(min(dist_mat)));
                       % Finds the row and column of minimal distance grid point(s)
              %     rand_idx = ceil(length(win_rows)*rand);	% If length(win_Rows) is 2, chooses
                                                    % between first and second elements randomly
               %    win_row = win_rows(rand_idx);
                %   win_col = win_cols(rand_idx);          
                   
                   %% Get rid of any very small values.
          %         dist_mat(dist_mat<0.0001) = 0.0001;
                
                   %%% Calculate each unit's activation   
%                   act = log(ones(NUM_ROWS,NUM_COLS)./dist_mat);
         
                   %%% Some code to run checks %%%   
                %   count = count+1;
               %    winner_act(count) = act(win_row, win_col);
               %    [win_rows,win_cols] = find(act==max(max(act)));
                %   rand_idx = ceil(length(win_rows)*rand);	
                %   win_row = win_rows(rand_idx);
                %   win_col = win_cols(rand_idx);          
                %   winner_loc(count,1) = win_row;
                %   winner_loc(count,2) = win_col;
                   %%%%%%
%                   weightsfile = sprintf('/home/cowell/eric/eric_data_extract/PRETRAIN_REUSED/%s/PRh_%d_sampW.mat', EXPT, CYCLE);
 %                  save(weightsfile, 'W');
 %                  actsfile = sprintf('/Documents and Settings/rac32/Desktop/_Copy of WD Sync 01-08-2008/C/user1/lead/ro8084co/stochastic_FCOR/%s/PRh_%d_sampACT.mat', EXPT, CYCLE);
  %                 save(actsfile, 'act'); 
   %            end %end of if statement checking cycle
    %      end % End of if statement checking SINGLE_SESSION  
      end   %%% Go to next cycle %%%%%%%%%%%%%%%
   end %%% Go to next stimulus %%%%%%%%%
   w = W;
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% Caudal Layer %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
elseif NUM_INPUT_DIMS == 6,
   %Caudal layer, in which the two 2D features are presented interpolated, therefore show two alternating then the other two alternating.
   if TEST_PARADIGM == 1 | TEST_PARADIGM == 3,
       num_stimuli = 1;
   elseif TEST_PARADIGM == 2,
       num_stimuli = 2;
   end
   for stimulus = 1:num_stimuli, % i.e. the 6D stimulus(i) that have been obtained from eric_enter_inputs.
       count = 0;
       if stimulus == 1,
             inp_mat(:,:,:,1) = inp_1_mat(:,:,1:6);
             inp_mat(:,:,:,2) = inp_1_mat(:,:,7:12);
             inp_mat(:,:,:,3) = inp_1_mat(:,:,13:18);
             inp_mat(:,:,:,4) = inp_1_mat(:,:,19:24);
       elseif stimulus == 2,
             inp_mat(:,:,:,1) = inp_2_mat(:,:,1:6);
             inp_mat(:,:,:,2) = inp_2_mat(:,:,7:12);
             inp_mat(:,:,:,3) = inp_2_mat(:,:,13:18);
             inp_mat(:,:,:,4) = inp_2_mat(:,:,19:24);
       end    % End of if stimulus loop
          
       for grid = 1:4,
           %%Load the weights, if first sample stimulus only!
           if stimulus == 1,
               if WHICH_RAT == 1 && (TOTAL_INPUT_DIMS_CONDITIONS == 1 || TOTAL_INPUT_DIMS_CONDITIONS == 3)
                   location = sprintf('/Documents and Settings/rac32/Desktop/_Copy of WD Sync 01-08-2008/C/user1/lead/ro8084co/stochastic_FCOR/rat_%d/pretrainedW_grid%d_lesion.mat', RAT_NUM, grid);
               elseif (WHICH_RAT == 1 && TOTAL_INPUT_DIMS_CONDITIONS == 2) || (WHICH_RAT == 2 && TOTAL_INPUT_DIMS_CONDITIONS == 3)
                   location = sprintf('/Documents and Settings/rac32/Desktop/_Copy of WD Sync 01-08-2008/C/user1/lead/ro8084co/stochastic_FCOR/rat_%d/pretrainedW_grid%d_control.mat', RAT_NUM, grid);
               end
               load(location);
               fclose('all');
           elseif stimulus == 2,
               W = w(:,:,:,grid);
           end
           for CYCLE=1:NUM_ENCODING_CYCLES,                  
               if SINGLE_SESSION == 1,
                   if CYCLE == 1 & grid == 1,
                       ACT_FIG = ACT_FIG+1; %Increment ACT_FIG before each stimulus is presented.
                   elseif CYCLE > 1 & grid == 1,
                       ACT_FIG = ACT_FIG-2; % Decrease ACT_FIG value back down for segment 1, after segment 2 has been plotted.
                   elseif grid == 2,
                       ACT_FIG = ACT_FIG+1; %Increment ACT_FIG before each stimulus is presented.
                   elseif grid == 3,
                       ACT_FIG = ACT_FIG+1;
                   end
               end
           
               ETA = 0.35;
              
          %   ETA = learn_rate*CYCLE^(-A_samp);		% Learning rate - decreases from value at end of pre-training phase 
               if CYCLE == 1,
                   G = 0.5 + neighb_size*CYCLE; % Gaussian width parameter - takes value at end of pre-training phase
                   fprintf('\n\nWithin sampletrain, Grid %d, CYCLE %d, G = %f, ETA = %f', grid, CYCLE, G, ETA);
                 %             elseif CYCLE > 1,
                 %G = 0.5 + neighb_size*10*(1/winact(stimulus_segment));
               end
             
               if CYCLE == NUM_ENCODING_CYCLES
                   end_G = G;   %% Save the final G value for trace decay function
               end
        
  	           %%% Find winning node
	           dist_mat_slices = (W - inp_mat(:,:,:,grid)).^2; %% Use portion of stimulus corresponding to the current grid
                    % First slice of this contains (squared) distances of x-coords,
                    % second slice contains (squared) distances of y-coords
               dist_mat = sum(dist_mat_slices,3);
                    % Sum across x and y slices to get total distance
               dist_mat = dist_mat/NUM_INPUT_DIMS;
                            % Normalise by dividing by num_input_dims       
               [win_rows,win_cols] = find(dist_mat==min(min(dist_mat)));
                    % Finds the row and column of minimal distance grid point(s)
               rand_idx = ceil(length(win_rows)*rand);	% If length(win_rows) is 2, chooses between first and second elements randomly
               win_row = win_rows(rand_idx);
               win_col = win_cols(rand_idx);
                    % If two or more grid points tie for having shortest dist,
                    % we need to pick one of them at random to be the winner.
                    % These lines pick a random integer index, and pick the
                    % entry from the winners vectors with this index
            
               %% Get rid of any very small values.
      %         dist_mat(dist_mat<0.0001) = 0.0001;           
                %%% Calculate each unit's distance from winner and resultant activation    
               unique_counter = grid;
               if CYCLE == 1,
                   [f act peak_act total_act selectivity winners] = eric_calc_selectivity_fast(win_row, win_col, dist_mat);
                   clear peak_act total_act selectivity winners 
               else
                   [f act] = eric_calc_act_fast(win_row, win_col, dist_mat);
               end
             
               %%% Save the activation of the winner for calculation of G on next cycle
               winact(grid) = act(win_row, win_col);
                           
              %if SINGLE_SESSION == 1,
	           %   if max(CYCLE == [1 10 20 30 50 100]),
	                %%% plot activation on kohonen layer
 %                   eric_plot_activations(act);
                %  end 
%              end

   	         %%% Update Weights
	         W = W + f.*(inp_mat(:,:,:,grid)-W);
                      
             if SINGLE_SESSION == 1,
                 %% Calculate dist_mat to calculate activation for saving to file
             	 dist_mat_slices = (W - inp_mat(:,:,:,grid)).^2;
                      % First slice of this contains (squared) distances of x-coords,
                      % second slice contains (squared) distances of y-coords
                 dist_mat = sum(dist_mat_slices,3);
                      % Sum across x and y slices to get total distance
                  dist_mat = dist_mat/NUM_INPUT_DIMS;
                            % Normalise by dividing by num_input_dims    
                 [win_rows,win_cols] = find(dist_mat==min(min(dist_mat)));
                      % Finds the row and column of minimal distance grid point(s)
                 rand_idx = ceil(length(win_rows)*rand);	% If length(win_rows) is 2, chooses between first and second elements randomly
                 win_row = win_rows(rand_idx);
                 win_col = win_cols(rand_idx);     
                 
                 %% Get rid of any very small values.
            %     dist_mat(dist_mat<0.0001) = 0.0001;  
                
                 %%% Calculate each unit's activation          
                 act = log(ones(NUM_ROWS,NUM_COLS)./dist_mat);
                 if max(CYCLE == [1 5 NUM_ENCODING_CYCLES/2 15 NUM_ENCODING_CYCLES])
                    %%% Some code to run checks %%%
                   %  if stimulus_segment == 1, count = count+1; end
                    %     winner_act(count, stimulus_segment) = act(win_row, win_col);
                     %    [win_rows,win_cols] = find(act==max(max(act)));
                      %   rand_idx = ceil(length(win_rows)*rand);	
                      %   win_row = win_rows(rand_idx);
                      %   win_col = win_cols(rand_idx);          
                      %   winner_loc(count, 1, stimulus_segment) = win_row;
                      %   winner_loc(count, 2, stimulus_segment) = win_col;
                         %%%%%%
                         %weightsfile = sprintf('/Rosie_Models/Stochastic for PC Bank/%s/Caud_%d_sampW_seg%d.mat', EXPT, CYCLE, stimulus_segment);
                        % save(weightsfile, 'W');
                         actsfile = sprintf('/Documents and Settings/rac32/Desktop/_Copy of WD Sync 01-08-2008/C/user1/lead/ro8084co/stochastic_FCOR/%s/Caud_%d_sampACT_grid%d.mat', EXPT, CYCLE, grid);
                         save(actsfile, 'act');           
                     end
             end  %% End of if statement checking single session.
         
         end %%% Go to next cycle
         
         w(:,:,:,grid) = W; %% Save weights for each grid into the appropriate block of 'w' matrix.
         
     end   %%% Go to next grid %%%%%%%%%%%%%%%
   end %%% Go to next stimulus %%%%%%%%%%%%%    
end %end of 'if' statement distinguishing PRh and caudal layers.
