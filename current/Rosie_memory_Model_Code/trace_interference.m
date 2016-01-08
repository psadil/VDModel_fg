function m_interfere = trace_interference(weights,learn_rate)

global EXPT CONDITION STIM_SET SIMULATION NUM_ROWS NUM_COLS NUM_INPUT_DIMS TEST_PARADIGM NUM_ENCODING_CYCLES
global NUM_INTERFERENCE_CYCLES PHASE SINGLE_SESSION
global NUM_ROWS NUM_COLS NUM_INPUT_DIMS unique_counter
global A_samp B_samp cycle ACT_FIG ETA G
global RAT_NUM

if NUM_INPUT_DIMS == 6,
    grid_type = 'Caud';
%    NUM_INTERFERENCE_CYLES = NUM_INTERFERENCE_CYCLES*3;
elseif NUM_INPUT_DIMS == 24,
    grid_type = 'PRh';
end

%%%%%%%%%%%%%%% Train network on randomly generated vectors %%%%%%%%%%%%%%%%
count = 0;  
%ETA = learn_rate; %% Reset ETA to learn_rate so that I know for sure it takes value from end of sample phase.

ETA = 0.05;

%% Need to load sample stimuli into here so that can look at activation elicited by it for plot_activations...
    
fprintf('\nWithin trace_interference, G = %f, ETA = %f\n', G, ETA);
 
W = weights;

for cycle = 1:NUM_INTERFERENCE_CYCLES
    %%% Generate an object-sized stimulus input vector from the set of available features
    [inp_mat] = eric_gen_limited_input(24);
    
  %  fprintf('ETA = %f\n', ETA);	%%% ETA and G take values they had at end of sample encoding phase
  %  fprintf('G = %f\n', G);
        
   if NUM_INPUT_DIMS == 6,     
        input_matrix(:,:,:,1) = inp_mat(:,:,1:6);
        input_matrix(:,:,:,2) = inp_mat(:,:,7:12);
        input_matrix(:,:,:,3) = inp_mat(:,:,13:18);     
        input_matrix(:,:,:,4) = inp_mat(:,:,19:24);
        %% Find winning node for interfering stimulus
        for grid = 1:4,
            dist_mat_slices = (W(:,:,:,grid) - input_matrix(:,:,:,grid)).^2;
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
            dist_mat(dist_mat<0.0001) = 0.0001;
           
            %% Calculate each unit's activation and f for interference weight changes.
            [f act_int] = eric_calc_act_fast(win_row, win_col, dist_mat);
                        
%            values = input_matrix(:,:,:,stim_seg)-W;
 %           integers = ceil(values); %Make all values 0 or 1
  %         signs = 0.001*(2*integers - 1);        
                           
            %% Update Weights
            W(:,:,:,grid) = W(:,:,:,grid) + f.*(input_matrix(:,:,:,grid)-W(:,:,:,grid));        %signs;      %
           
        end % End of for loop over grids
        
      % ACT_FIG = 9;
        
   elseif NUM_INPUT_DIMS == 24,
       dist_mat_slices = (W - inp_mat).^2;
           % First slice of this contains (squared) distances of x-coords,
           % second slice contains (squared) distances of y-coords
       dist_mat = sum(dist_mat_slices,3);
           % Sum across x and y slices to get total distance
       dist_mat = dist_mat/NUM_INPUT_DIMS;
           % Normalise by dividing by num_input_dims
       [win_rows,win_cols] = find(dist_mat==min(min(dist_mat)));
            % Finds the row and column of minimal distance grid point(s)
       rand_idx = ceil(length(win_rows)*rand);	% If length(win_rows) is 2, chooses between first and second elements randomly
       win_row_int = win_rows(rand_idx);
       win_col_int = win_cols(rand_idx);
     %   int_stim_W = W;
      %  int_stim_winner_inp = inp_mat(win_row, win_col,:);
       % int_stim_winner_dist = dist_mat(win_row, win_col);
        %dist_mat_int = dist_mat;
       % int_stim_winner_coords = [win_row win_col];
       
       %% Get rid of any very small values.
       dist_mat(dist_mat<0.0001) = 0.0001;     
              
       %% Calculate each unit's activation and f for interference weight changes.
       [f act_int] = eric_calc_act_fast(win_row_int, win_col_int, dist_mat);
               
      % values = inp_mat-W;
     %  integers = ceil(values); %Make all values 0 or 1
    %   signs = 0.001*(2*integers - 1);        
                          
       %% Update Weights
       W = W + f.*(inp_mat - W);   %signs; 
              
    %   ACT_FIG = 5;
        
    end %% End of if statement checking input dims             
end  %%% Go to next cycle %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%%%%%%%%%%%%%%%%%%%%%%% All of this stuff has to go inside the cycle loop, either side of W update, if I want to use it %%%%%%%%%%%%        
 
     %weightsfile = sprintf('/home/cowell/eric/eric_data_extract/%s/%s_%d_interferenceW.mat', EXPT, grid_type, cycle);
     %save(weightsfile, 'W');
     %actsfile = sprintf('/home/cowell/eric/eric_data_extract/%s/%s_%d_interferenceACT.mat', EXPT, grid_type, cycle); 
     %save(actsfile, 'act');
    
m_interfere = W;
