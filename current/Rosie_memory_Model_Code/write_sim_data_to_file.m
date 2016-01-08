function write_sim_data_to_file

%% Writes data to a .csv file, which can be opened in excel

%%Called from eric_choice.m, after all stimuli have been presented and
%%calculates statistics about simulation extracted by other functions called from eric_choice.m

global EXPT STIM_CONDITION STIM_SET NUM_ROWS NUM_COLS NUM_INPUT_DIMS NUM_ENCODING_CYCLES
global NUM_TRAINING_CYCLES NUM_INTERFERENCE_CYCLES RUN_SIM sess
global peak_act1 total_act1 select1 winners1 % All the PRh grid values
global peak_act2 total_act2 select2 winners2 
global peak_act3 total_act3 select3 winners3 
global peak_activation1 total_activation1 mean_selectivity1 winning_units1 %% All the Caudal grid values
global peak_activation2 total_activation2 mean_selectivity2 winning_units2 
global peak_activation3 total_activation3 mean_selectivity3 winning_units3 
%global dscore1 dscore2 %chosen_stim1 chosen_stim2
persistent output_matrix_lesion output_matrix_control selectivity_mat_control
global TOTAL_INPUT_DIMS_CONDITIONS TOTAL_ENCODING_CONDITIONS 
global TOTAL_TRAINING_CONDITIONS 
global TOTAL_INTERFERENCE_CONDITIONS TOTAL_STIM_CONDITIONS TOTAL_STIM_SETS
%global TOTAL_SIMULATIONS
global output_lesion output_control
global TEST_PARADIGM B
global WHICH_RAT
global RAT_NUM

%% To find the number of sessions
[r c] = size(RUN_SIM);
NUM_SESSIONS = r - 1;
num_trials = TOTAL_STIM_CONDITIONS*TOTAL_STIM_SETS*TOTAL_ENCODING_CONDITIONS*TOTAL_TRAINING_CONDITIONS*TOTAL_INTERFERENCE_CONDITIONS;

%% To find which group this simulation (half-rat) is from
if WHICH_RAT == 1 && (TOTAL_INPUT_DIMS_CONDITIONS == 1 || TOTAL_INPUT_DIMS_CONDITIONS == 3)
    GROUP = {'Lesion'};
elseif WHICH_RAT == 1 && TOTAL_INPUT_DIMS_CONDITIONS == 2 
    GROUP = {'Intact'};
elseif WHICH_RAT == 2 || WHICH_RAT == 3
    GROUP = {'Intact'};
end

%% Create correct file location for the current session.
if WHICH_RAT == 1 && (TOTAL_INPUT_DIMS_CONDITIONS == 1 || TOTAL_INPUT_DIMS_CONDITIONS == 3)
    file_location = sprintf('/Documents and Settings/rac32/Desktop/_Copy of WD Sync 01-08-2008/C/user1/lead/ro8084co/stochastic_FCOR/%s/condition%d/%s_LESION%d_tc%d_ec%d_ic%d.csv', EXPT, STIM_CONDITION, EXPT, RAT_NUM, NUM_TRAINING_CYCLES, NUM_ENCODING_CYCLES, NUM_INTERFERENCE_CYCLES); 
elseif (WHICH_RAT == 1 && TOTAL_INPUT_DIMS_CONDITIONS == 2) || WHICH_RAT == 2 || WHICH_RAT == 3
    file_location = sprintf('/Documents and Settings/rac32/Desktop/_Copy of WD Sync 01-08-2008/C/user1/lead/ro8084co/stochastic_FCOR/%s/condition%d/%s_CONTROL%d_tc%d_ec%d_ic%d.csv', EXPT, STIM_CONDITION, EXPT, RAT_NUM, NUM_TRAINING_CYCLES, NUM_ENCODING_CYCLES, NUM_INTERFERENCE_CYCLES); 
end

%% Write out the titles of the columns and the stimulus values
if RUN_SIM{sess,11} ~= RUN_SIM{sess-1,11} %%If the first session for any half-rat
    if WHICH_RAT == 1 || (WHICH_RAT == 2 && TOTAL_INPUT_DIMS_CONDITIONS == 3) %% Open a new file if a new whole-rat.
        file = fopen(file_location, 'w');
        fprintf(file, '\nGroup %s\n', GROUP{1});
        fprintf(file, 'Experiment:, %s, \n', EXPT);
       % fprintf(file, 'Stim Condition:, %d, \n \r', STIM_CONDITION);
     %% Load stimulus files
        stim_location = sprintf('/Documents and Settings/rac32/Desktop/_Copy of WD Sync 01-08-2008/C/user1/lead/ro8084co/stochastic_FCOR/%s/condition%d/stimuli.mat', EXPT, STIM_CONDITION);
        f = load(stim_location);
       %% Loop over all stim sets...
        for stimulus_set=1: TOTAL_STIM_SETS,
            stim_name = sprintf('stimuli%d', stimulus_set);
            S = f.(stim_name);
            fprintf(file, 'Stimulus Set %d:\n', stimulus_set);
            fprintf(file,  '%s, [ %.3f %.3f, %.3f %.3f, %.3f %.3f, %.3f %.3f ],', 'Sample 1: ', S(1,1), S(1,4), S(1,7), S(1,10), S(1,13), S(1,16),  S(1,19), S(1,22));
            if TEST_PARADIGM == 2 %| TEST_PARADIGM == 3,
               fprintf(file,  '%s, [ %.3f %.3f, %.3f %.3f, %.3f %.3f, %.3f %.3f ],', 'Sample 2: ', S(2,1), S(2,4), S(2,7), S(2,10), S(2,13), S(2,16), S(2,19), S(2,22));
            end
            fprintf(file,  '%s, [ %.3f %.3f, %.3f %.3f, %.3f %.3f, %.3f %.3f ] \r', 'Novel: ', S(3,1), S(3,4), S(3,7), S(3,10), S(3,13), S(3,16), S(3,19), S(3,22));
        end
        if NUM_INPUT_DIMS == 24,
            fprintf(file, '\n\nStimulus Set, Stimulus, Peak Act, Total Act, Selectivity, Win Co-ords');
        elseif NUM_INPUT_DIMS == 6,
            fprintf(file, '\n\nStimulus Set, Stimulus, Pk Act seg1, Pk Act seg2, Pk Act seg3, Pk Act seg4, Mean Peak Act, Tot Act seg1, Tot Act seg2, Tot Act seg3, Tot Act seg4, Mean Tot Act, Selectivity, Win Co-ords 1, Win Co-ords 2, Win Co-ords 3, Win Co-ords 4');
        end
        fclose(file);
    end %%End of if statement to check for a new whole-rat
end %%End of if statement to check for a new half-rat

%% Now re-open the correct file (whether started on this run of write_data_to_file or a previous one)
file = fopen(file_location, 'a'); %% Append onto the end of what is already written in the appropriate file

%% And write out the data for this run
if NUM_INPUT_DIMS == 24,
    if RUN_SIM{sess,11} ~= RUN_SIM{sess-1,11} %%If beginning of the second half of an intact rat
         fprintf(file, '\n\nStimulus Set, Stimulus, Peak Act, Total Act, Selectivity, Win Co-ords');
    end
    fprintf(file, '\n %d, %s, %.6f, %.6f, %.6f, [%d %d]', STIM_SET, 'Sample 1', peak_act1, total_act1, select1, ...
                    winners1(1,1), winners1(1,2));
    if TEST_PARADIGM == 2,
        fprintf(file, '\n %d, %s, %.6f, %.6f, %.6f, [%d %d]', STIM_SET, 'Sample 2', peak_act2, total_act2, select2, ...
             winners2(1,1), winners2(1,2));
    end
    fprintf(file, '\n %d, %s, %.6f, %.6f, %.6f, [%d %d]', STIM_SET, 'Choice Nov', peak_act3, total_act3, select3, ...
        winners3(1,1), winners3(1,2));
elseif NUM_INPUT_DIMS == 6,
    fprintf(file, '\n %d, %s, %.6f, %.6f, %.6f, %.6f, %.6f, %.6f, %.6f, %.6f, %.6f, %.6f, %.6f, [%d %d], [%d %d], [%d %d], [%d %d]', ...
        STIM_SET, 'Sample 1', peak_activation1(1), peak_activation1(2), peak_activation1(3), peak_activation1(4), mean(peak_activation1), ... 
        total_activation1(1), total_activation1(2), total_activation1(3), total_activation1(4), mean(total_activation1), mean_selectivity1, ...
        winning_units1(1,1,1), winning_units1(1,2,1), winning_units1(1,1,2), winning_units1(1,2,2), winning_units1(1,1,3), winning_units1(1,2,3), winning_units1(1,1,4),winning_units1(1,2,4));
    if TEST_PARADIGM == 2,
        fprintf(file, '\n %d, %s, %.6f, %.6f, %.6f, %.6f, %.6f, %.6f, %.6f, %.6f, %.6f, %.6f, %.6f, [%d %d], [%d %d], [%d %d], [%d %d]', ...
            STIM_SET, 'Sample 2', peak_activation2(1), peak_activation2(2), peak_activation2(3), peak_activation2(4),mean(peak_activation2), ...
            total_activation2(1), total_activation2(2), total_activation2(3), total_activation2(4), mean(total_activation2), mean_selectivity2, ...
            winning_units2(1,1,1), winning_units2(1,2,1), winning_units2(1,1,2), winning_units2(1,2,2), winning_units2(1,1,3), winning_units2(1,2,3), winning_units2(1,1,4), winning_units2(1,2,4));
    end
    fprintf(file, '\n %d, %s, %.6f, %.6f, %.6f, %.6f, %.6f, %.6f, %.6f, %.6f, %.6f, %.6f, %.6f, [%d %d], [%d %d], [%d %d], [%d %d]', ...
        STIM_SET, 'Choice Nov', peak_activation3(1), peak_activation3(2), peak_activation3(3), peak_activation3(4), mean(peak_activation3),...
        total_activation3(1), total_activation3(2), total_activation3(3), total_activation3(4), mean(total_activation3), mean_selectivity3, ...
        winning_units3(1,1,1), winning_units3(1,2,1), winning_units3(1,1,2), winning_units3(1,2,2), winning_units3(1,1,3), winning_units3(1,2,3), winning_units3(1,1,4), winning_units3(1,2,4));
    fprintf('\n');
end
    
fclose(file);
  
%% For each simulation add a line to the output matrix for get_allsim_data.

%First need to determine which row of output matrix to add the data to.
if TOTAL_INPUT_DIMS_CONDITIONS == 1, %%Running Lesion Only
    row = sess-1;
elseif TOTAL_INPUT_DIMS_CONDITIONS == 2, %%Running Control Only
    if ((sess-1) <= num_trials), %Caudal layer
       row = sess-1;
    elseif ((sess-1) > num_trials), %PRh layer
       row = (sess-1) - num_trials;
    end
elseif TOTAL_INPUT_DIMS_CONDITIONS == 3, %%Running Lesion and Control
    if ((sess-1) <= num_trials),  %Caudal Layer lesion group
       row = sess-1;
    elseif (sess-1 > num_trials) && (sess-1 <= num_trials*2), %Caudal layer control group       
       row = (sess-1) - num_trials;
    elseif sess-1 > num_trials*2,  %PRh layer control group
       row = (sess-1) - num_trials*2; 
    end
end

if GROUP{1} == 'Lesion'
    %Calculate d_score
    [dscore1] = eric_calc_familiarity(mean_selectivity1, mean_selectivity3);
    fprintf('\nDscore for Sample 1 versus Novel = %f', dscore1);
    %Put dscore into storage matrix
    output_matrix_lesion(row,1) = dscore1
 %   output_matrix_lesion(row,2) = chosen_stim1
    if TEST_PARADIGM == 2,
        %%% Calculate network's stochastic choice between the two stimuli
        [dscore2] = eric_calc_familiarity(mean_selectivity2, mean_selectivity3);
        fprintf('\nDScore for Sample 2 versus Novel = %f', dscore2);
        %Put dscore into storage matrix
        output_matrix_lesion(row,2) = dscore2;
     %   output_matrix_lesion(row,4) = chosen_stim2;
    end
    
elseif GROUP{1} == 'Intact'
    if NUM_INPUT_DIMS == 6, %If caudal half of control rat
        selectivity_mat_control(row,1,1) = mean_selectivity1; %Put caudal layer selectivity into first slice of matrix.
        selectivity_mat_control(row,2,1) = mean_selectivity3;
        if TEST_PARADIGM == 2,
            selectivity_mat_control(row,3,1) = mean_selectivity2;
            selectivity_mat_control(row,4,1) = mean_selectivity3;
        end
    elseif NUM_INPUT_DIMS == 24 %If PRh half of control rat
        selectivity_mat_control(row,1,2) = select1; %Put PRh layer selectivity into second slice of matrix.
        selectivity_mat_control(row,2,2) = select3;
        if TEST_PARADIGM == 2,
            selectivity_mat_control(row,3,2) = select2;
            selectivity_mat_control(row,4,2) = select3;
        end
    end
 
    if (rem((sess-1), num_trials) == 0) && (WHICH_RAT == TOTAL_INPUT_DIMS_CONDITIONS) %%if the last session in a control rat
        %%Average the selectivity values
      %  selectivity_mat_control(:,:,3) = mean(selectivity_mat_control,3) %Create third slice which is average of first two slices.
        fprintf('\n\nOverall Scores for Intact Network:\n');
        for trial = 1: num_trials,
         %   selectivity1 = selectivity_mat_control(trial,1,3)
        %    selectivity3 = selectivity_mat_control(trial,2,3)
            %Calculate d_score
            fprintf('\n\nTrial %d', trial);
            %Put dscore into storage matrix
            select_caud1 = selectivity_mat_control(trial,1,1);
            select_caud3 = selectivity_mat_control(trial,2,1);
            [dscore_caud1] = eric_calc_familiarity(select_caud1, select_caud3);
                        
            select_PRh1 = selectivity_mat_control(trial,1,2);
            select_PRh3 = selectivity_mat_control(trial,2,2);
            [dscore_PRh1] = eric_calc_familiarity(select_PRh1, select_PRh3);
            
            dscore1 = (dscore_caud1 + dscore_PRh1)/2;
            fprintf('\nDscore for Sample 1 versus Novel = %f', dscore1);
            
            output_matrix_control(trial,1) = dscore1
            output_matrix_control(trial,2) = dscore_caud1;
            output_matrix_control(trial,3) = dscore_PRh1;
            if TEST_PARADIGM == 2,
                %Calculate d_score      
                select_caud2 = selectivity_mat_control(trial,3,1);
                select_caud3 = selectivity_mat_control(trial,4,1);
                [dscore_caud2] = eric_calc_familiarity(select_caud2, select_caud3);

                select_PRh2 = selectivity_mat_control(trial,3,2);
                select_PRh3 = selectivity_mat_control(trial,4,2);
                [dscore_PRh2] = eric_calc_familiarity(select_PRh2, select_PRh3);  
                
                dscore2 = (dscore_caud2 + dscore_PRh2)/2;
                fprintf('\nDscore for Sample 2 versus Novel = %f', dscore2);
                
                output_matrix_control(trial,4) = dscore2; 
                output_matrix_control(trial,5) = dscore_caud2; 
                output_matrix_control(trial,6) = dscore_PRh2; 
            end  %end of statement to check test_paradigm
        end % end of loop over number of trials
    end % end of loop to check if last trial for the control rat
end %end of if statement checking which group
 

if (rem((sess-1), num_trials) == 0) && (WHICH_RAT == TOTAL_INPUT_DIMS_CONDITIONS) %%If last session in the simulation
    %%% Following code saves my output matrices to a .mat file at the end of each simulation
    %%Files if running on local computer
    datafile = sprintf('/Documents and Settings/rac32/Desktop/_Copy of WD Sync 01-08-2008/C/user1/lead/ro8084co/stochastic_FCOR/%s/sim_data%d.mat', EXPT, RAT_NUM);
    save(datafile, 'output_matrix_lesion', 'output_matrix_control');
    output_lesion = output_matrix_lesion
    output_control = output_matrix_control
end
