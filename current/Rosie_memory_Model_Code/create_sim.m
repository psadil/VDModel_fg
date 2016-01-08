function create_sim

%% Creates a run_sim file for a single, yoked-pair simulation.

global TOTAL_INPUT_DIMS_CONDITIONS TOTAL_ENCODING_CONDITIONS 
global TOTAL_TRAINING_CONDITIONS TOTAL_DECAY_CONDITIONS
global TOTAL_INTERFERENCE_CONDITIONS TOTAL_STIM_CONDITIONS TOTAL_STIM_SETS
global TEST_PARADIGM NOISE_INCREMENT %TOTAL_SIMULATIONS
%global REFERENCE_VECTORS
global FORGETTING
global A B 
global Num_Training_Cycles Num_Encoding_Cycles Num_Interference_Cycles Num_Input_Dims
global LIST_LENGTH PEAK_SIZE
global TOTAL_REPEATS NUM_TRIALS TOTAL_TRIALS

%% Set all variables to default values, which can be overwritten subsequently.

Num_Rows = 200;
Num_Cols = 200;
Num_Input_Dims = [6 6 24];
A = 0.2; %% Pre-training parameter. The bigger A is, the faster ETA decreases, and the smaller the amount of learning on the weights for all units.
B = 0.4; %% Pre-training parameter. The bigger B is, the faster G decreases, and the smaller the neighbourhood of the winner that gets updated.
%A_samp = 0.05; % As for A, but this is the value at beginning of sample phase. No longer used (ETA constant during sample training).
%B_type = 2; %% Set to be 2 so that B is variable on caudal layer, by default (1 = constant).
Num_Training_Cycles = 100;
Num_Encoding_Cycles = 20;
Num_Decay_Steps = 0;
Num_Interference_Cycles = 0;
%NOISE_INCREMENT = [0.3; 0.3; 0.3];
%REFERENCE_VECTORS = 0; % Choose 0 for no reference vectors, 1 to include reference vectors in training.
FORGETTING = 0; % Set default to be no forgetting.
TOTAL_INPUT_DIMS_CONDITIONS = 3; %%Once with small DIMS for caudal, once each with small and large DIMS for intact
%% Set the number of conditions to be 1 by default, for all conditions except INPUT_DIMS.
TOTAL_TRAINING_CONDITIONS = 1; 
TOTAL_ENCODING_CONDITIONS = 1;
%TOTAL_DECAY_CONDITIONS = 1;
TOTAL_INTERFERENCE_CONDITIONS = 1;
TOTAL_STIM_CONDITIONS = 1;
TOTAL_STIM_SETS = 1;
TOTAL_SIMULATIONS = 1;
EXPT = 'null'; %% For when running a single session
LIST_LENGTH = 0;
PEAK_SIZE = 1; %% If 1, there are 9 winners in peak, if 2, there are 13 winners in peak, if 3, there are 25 winners in peak.

fprintf('Creating a new experiment...\n');
EXPT = input('\nEnter experiment name: ');
TOTAL_STIM_CONDITIONS = input('\nEnter no. of stimulus conditions: ');
TOTAL_STIM_SETS = input('\nEnter no. of stimulus sets: ');
%NB always going to have ONE simulation per run_sim, so that jobs are spread across different PCs.
%TOTAL_SIMULATIONS = input('\nEnter no. of simulations per stimulus set: ');

TEST_PARADIGM = input('\nEnter which test paradigm (1=one-sample, 2=two-sample; 3=?): ');
OPEN_MENU = input('\nPress 1 to continue, any other number to set more options: ');
while OPEN_MENU ~=1,
   fprintf('\n      Cancel - 1 ');
   fprintf('\n      NUM_INPUT_DIMS - 2');
   fprintf('\n      NUM_TRAINING_CYCLES - 3');
   fprintf('\n      NUM_ENCODING_CYCLES - 4');
   fprintf('\n      FORGETTING - 5');
   CHANGE = input('\nPlease enter a number 1-5: ');
   if CHANGE == 1,
       Open_Menu = 1;
   elseif CHANGE == 2,
       TOTAL_INPUT_DIMS_CONDITIONS = input('\nHow many grids would you like to run: ');
       if TOTAL_INPUT_DIMS_CONDITIONS == 1,
           Num_Input_Dims(1) = input('\nEnter number of input dimensions: ');
           Num_Input_Dims(2) = 0;
           Num_Input_Dims(3) = 0;
       elseif TOTAL_INPUT_DIMS_CONDITIONS == 2,
           Num_Input_Dims(1) = input('\nEnter number of input dimensions 1: ');
           Num_Input_Dims(2) = input('\nEnter number of input dimensions 2: ');
           Num_Input_Dims(3) = 0;
       elseif TOTAL_INPUT_DIMS_CONDITIONS == 3,
           Num_Input_Dims(1) = input('\nEnter number of input dimensions 1: ');
           Num_Input_Dims(2) = input('\nEnter number of input dimensions 2: ');
           Num_Input_Dims(3) = input('\nEnter number of input dimensions 3: ');
       end       
   elseif CHANGE == 3,
       TOTAL_TRAINING_CONDITIONS = input('\nEnter number of training conditions: ');
       for training_cond = 1: TOTAL_TRAINING_CONDITIONS,
           fprintf('\nTraining condition %d, ', training_cond);
           Num_Training_Cycles(training_cond) = input('Enter number of pre-training cycles: ');
       end
   elseif CHANGE == 4,
       TOTAL_ENCODING_CONDITIONS = input('\nEnter number of encoding conditions: ');
       for encoding_cond = 1: TOTAL_ENCODING_CONDITIONS,
           fprintf('\nEncoding condition %d, ', encoding_cond);
           Num_Encoding_Cycles(encoding_cond) = input('Enter number of encoding cycles: ');
       end
   elseif CHANGE == 5,
       FORGETTING = 1;
       TOTAL_INTERFERENCE_CONDITIONS = input('\nEnter number of interference conditions: ');
       for interference_cond = 1: TOTAL_INTERFERENCE_CONDITIONS
           fprintf('\nInterference condition %d, ', interference_cond);
           Num_Interference_Cycles(interference_cond) = input('Enter number of interference steps: ');
       end
   end
   OPEN_MENU = input('\nPress 1 to continue, any other number to set more options: ');
end %% End of while loop.

%%%%%%%%%% Code here which sets up the RUN_SIM matrix %%%%%%%%%%%%

%% Some numbers I'll need in this function
NUM_TRIALS = TOTAL_STIM_CONDITIONS*TOTAL_STIM_SETS; %% i.e. number of trials per "rat"
TOTAL_REPEATS = TOTAL_STIM_CONDITIONS*TOTAL_TRAINING_CONDITIONS*TOTAL_ENCODING_CONDITIONS*TOTAL_INTERFERENCE_CONDITIONS;

%% Create EXPT column of RUN_SIM array
expt(2:NUM_TRIALS+1,1) = {EXPT};
expt(1,1) = {'EXPT'};  

%% Create STIM_CONDITION column of RUN_SIM array
for fill_up = 1: TOTAL_STIM_CONDITIONS,
   stim_condition((fill_up-1)*TOTAL_STIM_SETS+2:fill_up*TOTAL_STIM_SETS+1, 1) = {fill_up}; %% plus 2 to leave first element for col heading
end

stim_condition(1,1) = {'STIM_COND'};

%% Create STIM_SET column of RUN_SIM array
for fill_up_again = 1: TOTAL_STIM_CONDITIONS,
    for fill_up = 1: TOTAL_STIM_SETS,
       stim_set((fill_up_again-1)*TOTAL_STIM_SETS+fill_up+1,1) = {fill_up};
    end
end

stim_set(1,1) = {'STIM_SET'};

%% Create next three columns of RUN_SIM array
for fill_up = 1: NUM_TRIALS,
    num_rows(fill_up+1,1) = {Num_Rows};
    num_cols(fill_up+1,1) = {Num_Cols};
    test_paradigm(fill_up+1,1) = {TEST_PARADIGM};
end
num_rows(1,1) = {'NUM_ROWS'};
num_cols(1,1) = {'NUM_COLS'};
test_paradigm(1,1) = {'TEST_PARADIGM'};

%% Squidge together the columns we have so far...
interim_matrix_1 = cat(2, expt, stim_condition, stim_set, num_rows, num_cols, test_paradigm);

%% And multiply the matrix by the number of other conditions we have
[r c] = size(interim_matrix_1);
r = r-1;

%% Multiply matrix by TOTAL_TRAINING_CONDITIONS
for concatenate = 1: TOTAL_TRAINING_CONDITIONS,
    for row = 1:r,
       interim_matrix_2((concatenate-1)*r+1+row,:) = interim_matrix_1(row+1,:);
    end
    %% And make a new column
    num_training_cycles((concatenate-1)*r+1+1:concatenate*r+1,1) = {Num_Training_Cycles(concatenate)};
end
interim_matrix_2 = cat(2, interim_matrix_2, num_training_cycles);

[r c] = size(interim_matrix_2);
r = r-1;

%% Multiply matrix by TOTAL_ENCODING_CONDITIONS
for concatenate = 1: TOTAL_ENCODING_CONDITIONS,
    for row = 1:r,
       interim_matrix_3((concatenate-1)*r+1+row,:) = interim_matrix_2(row+1,:);
    end
    %% And make a new column
    num_encoding_cycles((concatenate-1)*r+1+1:concatenate*r+1,1) = {Num_Encoding_Cycles(concatenate)};
end
interim_matrix_3 = cat(2, interim_matrix_3, num_encoding_cycles);

[r c] = size(interim_matrix_3);
r = r-1;

%% Multiply matrix by TOTAL_INTERFERENCE_CONDITIONS
for concatenate = 1: TOTAL_INTERFERENCE_CONDITIONS,
    for row = 1:r,
       interim_matrix_4((concatenate-1)*r+1+row,:) = interim_matrix_3(row+1,:);
    end
    %% And make a new column
    num_interference_cycles((concatenate-1)*r+1+1:concatenate*r+1,1) = {Num_Interference_Cycles(concatenate)};
end
interim_matrix_4 = cat(2, interim_matrix_4, num_interference_cycles);

[r c] = size(interim_matrix_4);
r = r-1;

n = length(interim_matrix_1(1,:));

%% Multiply matrix by TOTAL_INPUT_DIMS_CONDITIONS
for concatenate = 1: TOTAL_INPUT_DIMS_CONDITIONS,
    for row = 1:r,
       interim_matrix_5((concatenate-1)*r+1+row,:) = interim_matrix_4(row+1,:);  
    end
    %% And make a new column for NUM_INPUT_DIMS
    num_input_dims((concatenate-1)*r+1+1:concatenate*r+1,1) = {Num_Input_Dims(concatenate)};
    %% And a new column to say which "rat" this session is simulating
    which_rat((concatenate-1)*r+1+1:concatenate*r+1,1) = {concatenate};
end

interim_matrix_5 = cat(2, interim_matrix_5, num_input_dims, which_rat);

%% Now put the headings back on and add new ones.
for col = 1:n,
    interim_matrix_5(1, col) = interim_matrix_1(1,col);
end

[r c] = size(interim_matrix_5);
r = r-1;

interim_matrix_5{1,n+1} = 'NUM_TRAIN_CYC';
interim_matrix_5{1,n+2} = 'NUM_ENCOD_CYC';
interim_matrix_5{1,n+3} = 'NUM_INT_CYC';    
interim_matrix_5{1,n+4} = 'NUM_INP_DIMS';
interim_matrix_5{1,n+5} = 'WHICH_RAT';
RUN_SIM = interim_matrix_5;

RUN_SIM

save RUN_SIM.mat RUN_SIM

for int_cond = 1:TOTAL_INTERFERENCE_CONDITIONS
    num_int_cycles{int_cond,1} = Num_Interference_Cycles(int_cond);
end
for train_cond = 1:TOTAL_TRAINING_CONDITIONS
    num_train_cycles{train_cond,1} = Num_Training_Cycles(train_cond);
end
for encod_cond = 1:TOTAL_ENCODING_CONDITIONS
    num_encod_cycles{encod_cond,1} = Num_Encoding_Cycles(encod_cond);
end

%% Create struct array for run_sim.m and write_spreadsheet.m functions
SIM_PARAMS = struct('EXPT', EXPT, 'RAT_TYPES', TOTAL_INPUT_DIMS_CONDITIONS, ...
                    'TOTAL_REPEATS', TOTAL_REPEATS, 'TOTAL_STIM_CONDITIONS', TOTAL_STIM_CONDITIONS, ...
                    'TOTAL_TRAINING_CONDITIONS', TOTAL_TRAINING_CONDITIONS, 'NUM_TRAINING_CYCLES', num_train_cycles, ...
                    'TOTAL_ENCODING_CONDITIONS',TOTAL_ENCODING_CONDITIONS, 'NUM_ENCODING_CYCLES', num_encod_cycles, ...
                    'TOTAL_INTERFERENCE_CONDITIONS', TOTAL_INTERFERENCE_CONDITIONS, 'NUM_INT_CYCLES', num_int_cycles, ...
                    'TOTAL_STIM_SETS', TOTAL_STIM_SETS, 'TEST_PARADIGM', TEST_PARADIGM, ...
                    'NUM_ROWS', Num_Rows, 'A', A, ...
                    'B', B, 'PEAK_SIZE', PEAK_SIZE, ...
                    'FORGETTING', FORGETTING, 'TOTAL_INPUT_DIMS_CONDITIONS', TOTAL_INPUT_DIMS_CONDITIONS);

save SIM_PARAMS.mat SIM_PARAMS
