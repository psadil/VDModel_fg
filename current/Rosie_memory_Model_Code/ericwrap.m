%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Matlab code for making a Self Organising Feature Map grid (SOFM)
%
% Rosie Cowell (May 2004)
%  
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% Represent the SOFM as a 2-D grid of x,y coordinates
% i.e. 3 dimensions in all: Rows, Cols, Slices
% 3rd-Dimension slice 1: x-coords 
% 3rd-Dimension slice 2: y-coords
 
global G ETA A B A_samp sess
global PHASE %ACT_FIG ACT_WEIGHT
global simulation_number
global TEST_PARADIGM
global PRETRAIN FORGETTING %CHOICE_PHASE 
global fid
global grid_mat %%Matrix for calculating city-block distance later
global NUM_ROWS NUM_COLS
global NUM_TRAINING_CYCLES

clear input_data;
%CHOICE_PHASE = 0; %% Set this variable to zero at beginning of simulation to indicate not choice phase yet.

%%Make the grid_matrix for calculating city-block distance later.
for count = 1:NUM_ROWS
    grid_mat_rows(:,count) = (1:NUM_ROWS);
end
for count = 1:NUM_COLS
    grid_mat_cols(count,:) = (1:NUM_COLS)';
end
grid_mat = cat(3, grid_mat_rows, grid_mat_cols);

%%% Initialise weight matrix with small x and y coords, centred on the origin
m_init = eric_init_weights;
%%% Pretrain the network on data randomly distrubuted over the input space
ACT_FIG = 1;
ACT_WEIGHT = 13;

if PRETRAIN == 1,
    [l_rate n_size] = eric_pretrain(m_init);
elseif PRETRAIN == 0,
    l_rate = NUM_TRAINING_CYCLES^(-A);
    n_size = 10*NUM_TRAINING_CYCLES^(-B);
end

clear m_init;  %% To save memory

%%% Train the network on the sample stimulus
[m_sample input_1_matrix input_2_matrix learn_rate] = eric_sample_train(l_rate, n_size);

%%% Perform forgetting by trace interference
if FORGETTING == 1
    fprintf('\n\nForgetting being implemented by interference method...\n');
    m_distorted = trace_interference(m_sample, learn_rate);
    clear m_sample; %% To save memory
elseif FORGETTING == 0
    fprintf('\n\nNo forgetting occurring.\n\n');
end

if TEST_PARADIGM == 3,
    %% No need to reload stimuli now that 'fid' is a global variable
  %  location = sprintf('/Documents and Settings/rac32/Desktop/_Copy of WD Sync 01-08-2008/C/user1/lead/ro8084co/stochastic_FCOR/%s/condition%d/stimuli.mat', EXPT, STIM_CONDITION);
  %  f = load(location);
  %  fclose('all'); 
    stim_name = sprintf('stimuli%d', STIM_SET);
    S = fid.(stim_name);
    inp_1_vect = S(2, :);       
    input_1_matrix = cat(3, inp_1_vect(1)*ones(NUM_ROWS,NUM_COLS), inp_1_vect(2)*ones(NUM_ROWS,NUM_COLS), ...
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
end

%% No need to reload stimuli now that 'fid' is a global variable
%location = sprintf('/Documents and Settings/rac32/Desktop/_Copy of WD Sync 01-08-2008/C/user1/lead/ro8084co/stochastic_FCOR/%s/condition%d/stimuli.mat', EXPT, STIM_CONDITION);
%f = load(location);
%fclose('all');
stim_name = sprintf('stimuli%d', STIM_SET);
S = fid.(stim_name);
inp_3_vect = S(3, :);
input_3_matrix = cat(3, inp_3_vect(1)*ones(NUM_ROWS,NUM_COLS), inp_3_vect(2)*ones(NUM_ROWS,NUM_COLS), ...
               inp_3_vect(3)*ones(NUM_ROWS,NUM_COLS), inp_3_vect(4)*ones(NUM_ROWS,NUM_COLS), ...
               inp_3_vect(5)*ones(NUM_ROWS,NUM_COLS), inp_3_vect(6)*ones(NUM_ROWS,NUM_COLS), ...
               inp_3_vect(7)*ones(NUM_ROWS,NUM_COLS), inp_3_vect(8)*ones(NUM_ROWS,NUM_COLS), ...
               inp_3_vect(9)*ones(NUM_ROWS,NUM_COLS), inp_3_vect(10)*ones(NUM_ROWS,NUM_COLS), ...
               inp_3_vect(11)*ones(NUM_ROWS,NUM_COLS), inp_3_vect(12)*ones(NUM_ROWS,NUM_COLS), ...
               inp_3_vect(13)*ones(NUM_ROWS,NUM_COLS), inp_3_vect(14)*ones(NUM_ROWS,NUM_COLS), ...
               inp_3_vect(15)*ones(NUM_ROWS,NUM_COLS), inp_3_vect(16)*ones(NUM_ROWS,NUM_COLS), ...
               inp_3_vect(17)*ones(NUM_ROWS,NUM_COLS), inp_3_vect(18)*ones(NUM_ROWS,NUM_COLS), ...
               inp_3_vect(19)*ones(NUM_ROWS,NUM_COLS), inp_3_vect(20)*ones(NUM_ROWS,NUM_COLS), ...
               inp_3_vect(21)*ones(NUM_ROWS,NUM_COLS), inp_3_vect(22)*ones(NUM_ROWS,NUM_COLS), ...
               inp_3_vect(23)*ones(NUM_ROWS,NUM_COLS), inp_3_vect(24)*ones(NUM_ROWS,NUM_COLS));

%%% Test the network on sample stimulus and foil
if FORGETTING == 0,
    eric_choice(m_sample, input_1_matrix, input_2_matrix, input_3_matrix);
elseif FORGETTING == 1,
    eric_choice(m_distorted, input_1_matrix, input_2_matrix, input_3_matrix);
end

%ACT_FIG = 0;
%ACT_WEIGHT = 0;
    