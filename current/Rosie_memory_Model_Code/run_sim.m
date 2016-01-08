function run_sim(rat_num, seed_num)

% run_sim - runs the simulation defined in the RUN_SIM.mat file

global EXPT STIM_CONDITION STIM_SET SIMULATION NUM_ROWS NUM_COLS 
global NUM_INPUT_DIMS TEST_PARADIGM NUM_ENCODING_CYCLES WHICH_RAT
global NUM_TRAINING_CYCLES NUM_INTERFERENCE_CYCLES
global sess PRETRAIN
global TOTAL_INPUT_DIMS_CONDITIONS TOTAL_ENCODING_CONDITIONS TOTAL_TRAINING_CONDITIONS
global TOTAL_INTERFERENCE_CONDITIONS TOTAL_STIM_CONDITIONS TOTAL_STIM_SETS
%global TOTAL_SIMULATIONS 
global TEST_PARADIGM PEAK_SIZE
global output_lesion output_control
global RUN_SIM 
global WHICH_RAT RAT_NUM
global A B
%global NUM_SESSIONS NUM_TRIALS
%global winning_units1 winning_units3 winners1 winners3

if nargin == 2
    fprintf('\nShould be scanning file for previous seed.');
    seed_fid = fopen('seed.txt', 'r');
    seed = fscanf(seed_fid, '%f')
else
    fprintf('\nSetting new seed by clock.');
    seed = fix(1e6*sum(clock));
    seed_fid = fopen('seed.txt', 'w');
    fprintf(seed_fid, '%.0f', seed);
    fclose(seed_fid);
end
rand('state', seed);

pre_train = 1; %%Set to 1 if pretraining desired, set to zero if pre-trained weights already saved. 
RAT_NUM = rat_num;

%% Clear persistent storage matrices before first simulation
fprintf('\n\n\nCLEARING MATRICES!!!\n\n');
clear output_matrix_lesion;
clear output_matrix_control;
clear selectivity_mat_control;

%create_sim;
%% Don't call the function create_sim.m because have already made RUN_SIM array on local machine
load RUN_SIM.mat RUN_SIM
load SIM_PARAMS.mat SIM_PARAMS

%Load values from SIM_PARAMS cell array, created by create_sim.m function
TOTAL_INPUT_DIMS_CONDITIONS = SIM_PARAMS(1).TOTAL_INPUT_DIMS_CONDITIONS;
TOTAL_REPEATS = SIM_PARAMS(1).TOTAL_REPEATS;
TOTAL_STIM_CONDITIONS = SIM_PARAMS(1).TOTAL_STIM_CONDITIONS;
TOTAL_TRAINING_CONDITIONS = SIM_PARAMS(1).TOTAL_TRAINING_CONDITIONS;
TOTAL_ENCODING_CONDITIONS = SIM_PARAMS(1).TOTAL_ENCODING_CONDITIONS; 
TOTAL_INTERFERENCE_CONDITIONS = SIM_PARAMS(1).TOTAL_INTERFERENCE_CONDITIONS;
TOTAL_STIM_SETS = SIM_PARAMS(1).TOTAL_STIM_SETS;
TEST_PARADIGM = SIM_PARAMS(1).TEST_PARADIGM; 
A = SIM_PARAMS(1).A;
B = SIM_PARAMS(1).B;
PEAK_SIZE = SIM_PARAMS(1).PEAK_SIZE;
FORGETTING = SIM_PARAMS(1).FORGETTING;

fprintf ('\nThere will be %d sessions in total.\n', size(RUN_SIM,1)-1);

% To find the number of simulations per condition
[r c] = size(RUN_SIM);
%  num_conditions = RUN_SIM{r,2}; %% Read out Condition Number of last row to give number of conditions.
%  sims_per_condition = (r-1)/num_conditions;
% NUM_SESSIONS = r-1;

for sess = 2:size(RUN_SIM, 1),
    PRETRAIN = 0; %%Reset pretrain variable to zero, so that only set to 1 if an appropriate run.
    EXPT = RUN_SIM{sess,1};
    STIM_CONDITION = RUN_SIM{sess,2};
    STIM_SET = RUN_SIM{sess,3};
    NUM_ROWS = RUN_SIM{sess,4}; 
    NUM_COLS = RUN_SIM{sess,5};
    TEST_PARADIGM = RUN_SIM{sess,6};
    NUM_TRAINING_CYCLES = RUN_SIM{sess,7};
    NUM_ENCODING_CYCLES = RUN_SIM{sess,8};
    NUM_INTERFERENCE_CYCLES = RUN_SIM{sess,9};
    NUM_INPUT_DIMS = RUN_SIM{sess,10}; 
    WHICH_RAT = RUN_SIM{sess,11}; 
    fprintf('\n\nSESSION %d\n', sess-1);
    if RUN_SIM{sess,11} ~= RUN_SIM{sess-1,11} %%If a new half-rat
        if pre_train == 1, %NB For the pre-train parameter you only need to know if it's a new half-rat
            PRETRAIN = 1;  %because all 'REPEATS' for each half rat happen successively, so only reset
        else               %PRETRAIN after they've all been run and simulation has moved onto a new half-rat.
            PRETRAIN = 0;
        end
        if WHICH_RAT == 1 && (TOTAL_INPUT_DIMS_CONDITIONS == 1 || TOTAL_INPUT_DIMS_CONDITIONS == 3)
            fprintf('\nGroup "Lesion", Caudal Layer:'); 
        elseif WHICH_RAT == 1 && TOTAL_INPUT_DIMS_CONDITIONS == 2 
            fprintf('\nGroup "Control", Caudal Layer:'); 
        elseif WHICH_RAT == 2 && TOTAL_INPUT_DIMS_CONDITIONS == 3
            fprintf('\nGroup "Control", Caudal Layer'); 
        elseif WHICH_RAT == 2 && TOTAL_INPUT_DIMS_CONDITIONS == 2
            fprintf('\nGroup "Control", Perirhinal Layer'); 
        elseif WHICH_RAT == 3
            fprintf('\nGroup "Control", Perirhinal Layer');
        end
        fprintf('\nEXPT %s; STIM_CONDITION %d; STIM_SET %d; NUM_INP_DIMS %d; NUM_ROWS %d; NUM_COLS %d; TEST_PARA %d; \n', RUN_SIM{sess,1}, RUN_SIM{sess,2}, RUN_SIM{sess,3}, RUN_SIM{sess,10}, RUN_SIM{sess,4}, RUN_SIM{sess,5}, RUN_SIM{sess,6});
    end
    ericwrap;
 end

%get_allsim_data(output_lesion, output_control);
fprintf ('\n\nFinished. \r')
