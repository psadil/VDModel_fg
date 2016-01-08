function eric_choice(weights, inp_1_mat, inp_2_mat, inp_3_mat)

%%This function called from ericwrap.m
%%This function calls the functions eric_calc_selectivity.m, eric_calc_discriminibility.m,
%%eric_calc_output.m, eric_calc_winner_location, eric_write_data_to_file.m
%%from within itself

global NUM_ROWS NUM_COLS NUM_INPUT_DIMS NUM_TRAINING_CYCLES NUM_ENCODING_CYCLES  
global G ETA A B 
global CYCLE ACT_FIG PEAK_SIZE
global EXPT CONDITION STIM_SET sess 
global simulation_number
global TEST_PARADIGM EXPT STIM_CONDITION STIM_SET SIMULATION
global peak_act1 total_act1 select1 winners1 
global peak_act2 total_act2 select2 winners2 
global peak_act3 total_act3 select3 winners3
global dscore1 dscore2 chosen_stim1 chosen_stim2
global peak_activation1 total_activation1 mean_selectivity1 winning_units1
global peak_activation2 total_activation2 mean_selectivity2 winning_units2 
global peak_activation3 total_activation3 mean_selectivity3 winning_units3
%global CHOICE_PHASE
%global unique_counter
global WHICH_RAT TOTAL_INPUT_DIMS_CONDITIONS%%for working out which half-rat the simulation corresponds to.

%CHOICE_PHASE = 1; %% Variable to indicate to plot_activations.m that choice_phase is calling it.
write_data = 0; %set to 0 as default.
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% If PRh Layer %%%%%%%%%%%%%%%%%%%%%%%%%%%%
count = 0;
%% PRh grid

if NUM_INPUT_DIMS == 24,
    W = weights;
    %%% Present first sample stimulus to the network and calculate selectivity
    %%% Find winning node
	dist_mat_slices = (W - inp_1_mat).^2;
              % First slice of this contains (squared) distances of x-coords,
              % second slice contains (squared) distances of y-coords
    dist_mat = sum(dist_mat_slices,3);
              % Sum across x and y slices to get total distance
    dist_mat = dist_mat/NUM_INPUT_DIMS;
                            % Normalise by dividing by num_input_dims          
	[win_rows,win_cols] = find(dist_mat==min(min(dist_mat)));
              % Finds the row and column of minimal distance grid point(s)
	rand_idx = ceil(length(win_rows)*rand);	% If length(win_rows) is 2, chooses
                                            % between first and second elements randomly
	win_row = win_rows(rand_idx);
	win_col = win_cols(rand_idx);
            
	%% Get rid of any very small values.
    dist_mat(dist_mat<0.0001) = 0.0001;
    %%% Calculate each unit's distance from winner and resultant activation          
    [f act1 peak_act1 total_act1 select1 winners1] = eric_calc_selectivity_fast(win_row, win_col, dist_mat);
    fprintf('\nChoice Phase, Sample stimulus 1:\n');
    fprintf('selectivity1 = %f\n', select1);

    %%% Plot activation of network by first sample stimulus
  %  ACT_FIG = 4; %Set to 4 because want to overwrite the saved figures.
  %  if SINGLE_SESSION == 1, eric_plot_activations(act1); end

    %% Set parameters for sample 2 stimulus to be zero so that they are not
    %% undefined in eric_write_data_to_file.m if TEST_PARADIGM = 1
    peak_act2 = 0;
    total_act2 = 0;
    select2 = 0;
    winners2 = [0 0];

    %%% Repeat Process for second sample stimulus
   if TEST_PARADIGM == 2,
        %%% Find winning node
	    dist_mat_slices = (W - inp_2_mat).^2;
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
        dist_mat(dist_mat<0.0001) = 0.0001;
        %%% Calculate each unit's distance from winner and resultant activation          
        [f act2 peak_act2 total_act2 select2 winners2] = eric_calc_selectivity_fast(win_row, win_col, dist_mat);
        fprintf('\nChoice Phase, Sample stimulus 2: \n');
        fprintf('selectivity2 = %f\n', select2);   
 
        %%% Plot activation of network by second sample stimulus
        ACT_FIG = 5;
 %       if SINGLE_SESSION == 1, eric_plot_activations(act2); end          
    end %%% End of if statement to check test paradigm = 2 (for presenting second sample stim) %%%%%%%%%%%%%%

    %%% Present novel stimulus to network and calculate selectivity
    fprintf('\nChoice Phase, Novel Stimulus: \n');
    %%% Find winning node
	dist_mat_slices = (W - inp_3_mat).^2;
              % First slice of this contains (squared) distances of x-coords,
              % second slice contains (squared) distances of y-coords
    dist_mat = sum(dist_mat_slices,3);
              % Sum across x and y slices to get total distance
    dist_mat = dist_mat/NUM_INPUT_DIMS;
                            % Normalise by dividing by num_input_dims         
	[win_rows,win_cols] = find(dist_mat==min(min(dist_mat)));
              % Finds the row and column of minimal distance grid point(s)
	rand_idx = ceil(length(win_rows)*rand);	% If length(win_rows) is 2, chooses
                                            % between first and second elements randomly
	win_row = win_rows(rand_idx);
	win_col = win_cols(rand_idx);
    
	%% Get rid of any very small values.
    dist_mat(dist_mat<0.0001) = 0.0001;
    %%% Calculate each unit's distance from winner and resultant activation          
    [f act3 peak_act3 total_act3 select3 winners3] = eric_calc_selectivity_fast(win_row, win_col, dist_mat);
    
    actsfile = sprintf('/Documents and Settings/rac32/Desktop/_Copy of WD Sync 01-08-2008/C/user1/lead/ro8084co/stochastic_FCOR/%s/PRh_novACT.mat', EXPT);
    save(actsfile, 'act3');  
    fprintf('selectivity3 = %f\n', select3);  

    %%% Plot activation of network by foil stimulus
    %ACT_FIG = ACT_FIG+1;
    %if SINGLE_SESSION == 1, eric_plot_activations(act3); end

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% If caudal layer %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

elseif NUM_INPUT_DIMS == 6,
    %Pre-allocate memory for arrays.
    peak_activation1 = zeros(1,4);
    peak_activation2 = zeros(1,4);
    peak_activation3 = zeros(1,4);
    total_activation1 = zeros(1,4);
    total_activation2 = zeros(1,4);
    total_activation3 = zeros(1,4);
    selectivity1 = zeros(1,4);
    selectivity2 = zeros(1,4);
    selectivity3 = zeros(1,4);
    c_fos_number1 = zeros(1,4);
    c_fos_number2 = zeros(1,4);
    c_fos_number3 = zeros(1,4);
    if PEAK_SIZE == 1,
        winning_units1 = ones(9,2,4);
        winning_units2 = ones(9,2,4);
        winning_units3 = ones(9,2,4);
    elseif PEAK_SIZE == 2,
        winning_units1 = ones(13,2,4);
        winning_units2 = ones(13,2,4);
        winning_units3 = ones(13,2,4);
    elseif PEAK_SIZE == 3,
        winning_units1 = ones(25,2,4);
        winning_units2 = ones(25,2,4);
        winning_units3 = ones(25,2,4);
    end
    %% Divide the input stimulus into 4 segments
    inp_mat(:,:,:,1) = inp_1_mat(:,:,1:6);
    inp_mat(:,:,:,2) = inp_1_mat(:,:,7:12);
    inp_mat(:,:,:,3) = inp_1_mat(:,:,13:18);
    inp_mat(:,:,:,4) = inp_1_mat(:,:,19:24);
    
    fprintf('\nChoice Phase, Sample stimulus 1:\n');
    for grid = 1:4,
        %% Load correct weight set
        W = weights(:,:,:,grid);
        %unique_counter = grid;
        %%% Find winning node
    	dist_mat_slices = (W - inp_mat(:,:,:,grid)).^2;
              % First slice of this contains (squared) distances of x-coords,
              % second slice contains (squared) distances of y-coords
        dist_mat = sum(dist_mat_slices,3);
              % Sum across x and y slices to get total distance
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
       
    	%% Get rid of any very small values.
        dist_mat(dist_mat<0.0001) = 0.0001;
     
        %%% Calculate each unit's distance from winner and resultant activation          
        [f act1 pk_act1 tot_act1 sel1 wins1] = eric_calc_selectivity_fast(win_row, win_col, dist_mat);
    
        peak_activation1(grid) = pk_act1;
        total_activation1(grid) = tot_act1;
        selectivity1(grid) = sel1;
        winning_units1(:,:,grid) = wins1;
        
        fprintf('selectivity1 = %f\n', selectivity1(grid)); 
           
    end %% End of loop over stimulus segments

    %%% If necessary, (2-sample OR) repeat process for second sample stimulus
    if TEST_PARADIGM == 2,
        %% Divide the input stimulus into 3 segments
        inp_mat(:,:,:,1) = inp_2_mat(:,:,1:6);
        inp_mat(:,:,:,2) = inp_2_mat(:,:,7:12);
        inp_mat(:,:,:,3) = inp_2_mat(:,:,13:18);
        inp_mat(:,:,:,4) = inp_2_mat(:,:,19:24);
        fprintf('\nChoice Phase, Sample stimulus 2:\n');
        for grid = 1:4,
            %% Load correct weight set
            W = weights(:,:,:,grid);
            %%% Find winning node
        	dist_mat_slices = (W - inp_mat(:,:,:,grid)).^2;
              % First slice of this contains (squared) distances of x-coords,
              % second slice contains (squared) distances of y-coords
            dist_mat = sum(dist_mat_slices,3);
              % Sum across x and y slices to get total distance
            dist_mat = dist_mat/NUM_INPUT_DIMS;
                            % Normalise by dividing by num_input_dims          
        	[win_rows,win_cols] = find(dist_mat==min(min(dist_mat)));
              % Finds the row and column of minimal distance grid point(s)
        	rand_idx = ceil(length(win_rows)*rand);	% If length(win_rows) is 2, chooses
                                            % between first and second elements randomly
        	win_row = win_rows(rand_idx);
        	win_col = win_cols(rand_idx);
              % If two or more grid points tie for having shortest dist, pick one of them at random to be the winner.
              % These lines pick a random integer index, and pick the entry from the winners vectors with this index.
	
	       %% Get rid of any very small values.
            dist_mat(dist_mat<0.0001) = 0.0001;
        
           %%% Calculate each unit's distance from winner and resultant activation          
            [f act2 pk_act2 tot_act2 sel2 wins2] = eric_calc_selectivity_fast(win_row, win_col, dist_mat);
             
            peak_activation2(grid) = pk_act2;
            total_activation2(grid) = tot_act2;
            selectivity2(grid) = sel2;
            winning_units2(:,:,grid) = wins2;
            
            fprintf('selectivity2 = %f\n', selectivity2(grid)); 
            
        end % End of for loop over stimulus segments.

    end %%% End of if statement to check which test paradigm %%%%%%%%%%%%%%

    %%% Get input data for novel stimulus from user
    fprintf('\nChoice Phase, Novel Stimulus: \n');

    % Divide the input stimulus into 4 segments
    inp_mat(:,:,:,1) = inp_3_mat(:,:,1:6);
    inp_mat(:,:,:,2) = inp_3_mat(:,:,7:12);
    inp_mat(:,:,:,3) = inp_3_mat(:,:,13:18);
    inp_mat(:,:,:,4) = inp_3_mat(:,:,19:24);

    for grid = 1:4,
        %% Load correct weight set
        W = weights(:,:,:,grid);%%% Find winning node
        %unique_counter = grid;
        dist_mat_slices = (W - inp_mat(:,:,:,grid)).^2;
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
                  % If two or more grid points tie for having shortest dist,
                  % we need to pick one of them at random to be the winner.
                  % These lines pick a random integer index, and pick the
                  % entry from the winners vectors with this index

         %% Get rid of any very small values.
         dist_mat(dist_mat<0.0001) = 0.0001;

        %%% Calculate each unit's distance from winner and resultant
        %%% activation          
        [f act3 pk_act3 tot_act3 sel3 wins3] = eric_calc_selectivity_fast(win_row, win_col, dist_mat);
        %%% Calculate location of the stimulus's winner(s), hence discriminability
        [act_winner3 winner_loc3 winner_coords3] = eric_calc_winner_location(act3);

        actsfile = sprintf('/Documents and Settings/rac32/Desktop/_Copy of WD Sync 01-08-2008/C/user1/lead/ro8084co/stochastic_FCOR/%s/Caud_novACT_grid%d.mat', EXPT, grid);
        save(actsfile, 'act3'); 
        fprintf('selectivity3 = %f\n', sel3); 
        peak_activation3(grid) = pk_act3;
        total_activation3(grid) = tot_act3;
        selectivity3(grid) = sel3;
        winning_units3(:,:,grid) = wins3;

        %%% Plot activation of network by foil stimulus
    %    if SINGLE_SESSION == 1 & grid == 1, 
     %       ACT_FIG = ACT_FIG+1;
    %        eric_plot_activations(act3);
    %  end

    end %%% End of for loop over 4 caudal grids with 4 segments of novel stimulus.

    %%%%%%%%% Calculate average familiarities %%%%%
    mean_selectivity1 = mean(selectivity1);
    mean_selectivity2 = mean(selectivity2);
    mean_selectivity3 = mean(selectivity3);
    fprintf('\n\nMean Selectivity1 = %f\n', mean_selectivity1); 
    fprintf('Mean Selectivity2 = %f\n', mean_selectivity2); 
    fprintf('Mean Selectivity3 = %f\n', mean_selectivity3); 
    
end %%%% End of if statement checking NUM_INPUT_DIMS %%%%%%%%%%%%%%%%

%% Call function which writes data from each session to a .csv file
%if write_data == 1,
write_sim_data_to_file;
%end
