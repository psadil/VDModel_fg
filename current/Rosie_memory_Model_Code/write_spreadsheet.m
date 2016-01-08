function write_spreadsheet(num_rats)

%% Load the sim_params file created at time of creating RUN_SIM
load SIM_PARAMS.mat  %%Need to make sure SIM_PARAMS is saved in the directory from which this function is called
SIM_PARAMS

%% Load values from SIM_PARAMS cell array, created by create_sim.m function
EXPT = SIM_PARAMS(1).EXPT;
TOTAL_INPUT_DIMS_CONDITIONS = SIM_PARAMS(1).TOTAL_INPUT_DIMS_CONDITIONS;
TOTAL_REPEATS = SIM_PARAMS(1).TOTAL_REPEATS;
TOTAL_STIM_CONDITIONS = SIM_PARAMS(1).TOTAL_STIM_CONDITIONS
TOTAL_TRAINING_CONDITIONS = SIM_PARAMS(1).TOTAL_TRAINING_CONDITIONS;
%NB number of rats to average is given as input argument
for level = 1: TOTAL_TRAINING_CONDITIONS,
    Num_Training_Cycles{level,1} = SIM_PARAMS(level).NUM_TRAINING_CYCLES; %A cell array containing num of cycles at each condition
end
TOTAL_ENCODING_CONDITIONS = SIM_PARAMS(1).TOTAL_ENCODING_CONDITIONS; 
for level = 1: TOTAL_ENCODING_CONDITIONS,
    Num_Encoding_Cycles{level,1} = SIM_PARAMS(level).NUM_ENCODING_CYCLES; %A cell array containing num of cycles at each condition
end
TOTAL_INTERFERENCE_CONDITIONS = SIM_PARAMS(1).TOTAL_INTERFERENCE_CONDITIONS
for level = 1: TOTAL_INTERFERENCE_CONDITIONS,
    Num_Interference_Cycles{level,1} = SIM_PARAMS(level).NUM_INT_CYCLES; %A cell array containing num of cycles at each condition
end
TOTAL_STIM_SETS = SIM_PARAMS(1).TOTAL_STIM_SETS;
TEST_PARADIGM = SIM_PARAMS(1).TEST_PARADIGM; 
A = SIM_PARAMS(1).A;
B = SIM_PARAMS(1).B;
PEAK_SIZE = SIM_PARAMS(1).PEAK_SIZE;
FORGETTING = SIM_PARAMS(1).FORGETTING;
NUM_ROWS = SIM_PARAMS(1).NUM_ROWS;
NUM_COLS = NUM_ROWS; %%%Assume each grid is square

%% Make storage matrices for all rats' averaged scores.
if TEST_PARADIGM ==1 || TEST_PARADIGM == 3,
    data_per_repeat_lesion = zeros(TOTAL_REPEATS, 1, num_rats);
    data_per_repeat_intact = zeros(TOTAL_REPEATS, 1, num_rats); 
    data_per_repeat_PRh = zeros(TOTAL_REPEATS, 1, num_rats);
elseif TEST_PARADIGM == 2,    
    data_per_repeat_lesion = zeros(TOTAL_REPEATS, 2, num_rats); 
    data_per_repeat_intact = zeros(TOTAL_REPEATS, 2, num_rats); %Why 2 columns when TEST_PARADIGM = 2? Because there are 2 sample stimuli,
    data_per_repeat_PRh = zeros(TOTAL_REPEATS, 2, num_rats);              %and therefore 2 Dscores
end

for rat = 1:num_rats,
    %files should be labelled 'results01' to 'results0n' so easy to get them.
    num = num2str(rat);
    filename = strcat('sim_data', num)
    fn = ['load(''' filename ''');'];
    eval(fn) %% to load the correct intact results file
        
    output_matrix_lesion
    output_matrix_control
    
    %%Average over stimulus sets, for each repeat.
    if TOTAL_INPUT_DIMS_CONDITIONS == 1,
        %%only lesioned rat
        for repeat = 1:TOTAL_REPEATS,
            data_per_repeat_lesion(repeat,:,rat) = sum(output_matrix_lesion((repeat-1)*TOTAL_STIM_SETS+1:(repeat-1)*TOTAL_STIM_SETS+TOTAL_STIM_SETS, :))/TOTAL_STIM_SETS;
        end
    elseif TOTAL_INPUT_DIMS_CONDITIONS == 2,
        %%only intact rat
        for repeat = 1:TOTAL_REPEATS,
            data_per_repeat_intact(repeat,1,rat) = sum(output_matrix_control((repeat-1)*TOTAL_STIM_SETS+1:(repeat-1)*TOTAL_STIM_SETS+TOTAL_STIM_SETS, 1))/TOTAL_STIM_SETS;
            data_per_repeat_caud(repeat,1,rat) = sum(output_matrix_control((repeat-1)*TOTAL_STIM_SETS+1:(repeat-1)*TOTAL_STIM_SETS+TOTAL_STIM_SETS, 2))/TOTAL_STIM_SETS;
            data_per_repeat_PRh(repeat,1,rat) = sum(output_matrix_control((repeat-1)*TOTAL_STIM_SETS+1:(repeat-1)*TOTAL_STIM_SETS+TOTAL_STIM_SETS, 3))/TOTAL_STIM_SETS;
            if TEST_PARADIGM == 2,
                data_per_repeat_intact(repeat,2,rat) = sum(output_matrix_control((repeat-1)*TOTAL_STIM_SETS+1:(repeat-1)*TOTAL_STIM_SETS+TOTAL_STIM_SETS, 4))/TOTAL_STIM_SETS;
                data_per_repeat_caud(repeat,2,rat) = sum(output_matrix_control((repeat-1)*TOTAL_STIM_SETS+1:(repeat-1)*TOTAL_STIM_SETS+TOTAL_STIM_SETS, 5))/TOTAL_STIM_SETS;
                data_per_repeat_PRh(repeat,2,rat) = sum(output_matrix_control((repeat-1)*TOTAL_STIM_SETS+1:(repeat-1)*TOTAL_STIM_SETS+TOTAL_STIM_SETS, 6))/TOTAL_STIM_SETS;           
            end
        end
    elseif TOTAL_INPUT_DIMS_CONDITIONS == 3,
        %First do lesioned rat
        for repeat = 1:TOTAL_REPEATS,
         %   fprintf('\nLesioned rat');
         %   fprintf('\nRat %d, Repeat %d\n', rat, repeat);
          %  size(data_per_repeat_lesion)
          %  size(output_matrix_lesion)
          %  sum(output_matrix_lesion((repeat-1)*TOTAL_STIM_SETS+1:(repeat-1)*TOTAL_STIM_SETS+TOTAL_STIM_SETS, :))/TOTAL_STIM_SETS
          data_per_repeat_lesion(repeat,:,rat) = sum(output_matrix_lesion((repeat-1)*TOTAL_STIM_SETS+1:(repeat-1)*TOTAL_STIM_SETS+TOTAL_STIM_SETS, :))/TOTAL_STIM_SETS;
%            fprintf('\nRat %d, Repeat %d, Dscores = %f, %f, %f', rat, repeat, output_matrix_lesion((repeat-1)*TOTAL_STIM_SETS+1,1),output_matrix_lesion((repeat-1)*TOTAL_STIM_SETS+2,1),output_matrix_lesion((repeat-1)*TOTAL_STIM_SETS+3,1));
% %            startrow = (repeat-1)*TOTAL_STIM_SETS+1
% %            endrow = (repeat-1)*TOTAL_STIM_SETS+TOTAL_STIM_SETS
% %            data_per_repeat_lesion(repeat,:,rat)
        end
        %%then do intact rat
        for repeat = 1:TOTAL_REPEATS,
       %     fprintf('\nIntact rat');
        %    fprintf('\nRat %d, Repeat %d\n', rat, repeat);
            data_per_repeat_intact(repeat,1,rat) = sum(output_matrix_control((repeat-1)*TOTAL_STIM_SETS+1:(repeat-1)*TOTAL_STIM_SETS+TOTAL_STIM_SETS, 1))/TOTAL_STIM_SETS;
            data_per_repeat_caud(repeat,1,rat) = sum(output_matrix_control((repeat-1)*TOTAL_STIM_SETS+1:(repeat-1)*TOTAL_STIM_SETS+TOTAL_STIM_SETS, 2))/TOTAL_STIM_SETS;
            data_per_repeat_PRh(repeat,1,rat) = sum(output_matrix_control((repeat-1)*TOTAL_STIM_SETS+1:(repeat-1)*TOTAL_STIM_SETS+TOTAL_STIM_SETS, 3))/TOTAL_STIM_SETS;
            if TEST_PARADIGM == 2,
                data_per_repeat_intact(repeat,2,rat) = sum(output_matrix_control((repeat-1)*TOTAL_STIM_SETS+1:(repeat-1)*TOTAL_STIM_SETS+TOTAL_STIM_SETS, 4))/TOTAL_STIM_SETS;
                data_per_repeat_caud(repeat,2,rat) = sum(output_matrix_control((repeat-1)*TOTAL_STIM_SETS+1:(repeat-1)*TOTAL_STIM_SETS+TOTAL_STIM_SETS, 5))/TOTAL_STIM_SETS;
                data_per_repeat_PRh(repeat,2,rat) = sum(output_matrix_control((repeat-1)*TOTAL_STIM_SETS+1:(repeat-1)*TOTAL_STIM_SETS+TOTAL_STIM_SETS, 6))/TOTAL_STIM_SETS;           
            end 
        end
    end %% End of if statement checking number of input dims conditions (i.e. which rat types)
end %%End of for loop over all rats in experiment.
    
%% Write matrices to a .csv file
%for write_out = 1:2,
 %   if write_out == 1,
        %%% Write out data from rat_scores matrices into a useful .csv format
        location = sprintf('/Documents and Settings/rac32/Desktop/_Copy of WD Sync 01-08-2008/C/user1/lead/ro8084co/stochastic_FCOR/%s/spreadsheet_d.csv', EXPT); 
 %   elseif write_out == 2,
 %       location = sprintf('/Documents and Settings/rac32/Desktop/_Copy of WD Sync 01-08-2008/C/user1/lead/ro8084co/stochastic_FCOR/%s/spreadsheet_stoch.csv', EXPT); 
 %   end
    file = fopen(location, 'w');
    fprintf(file,'\nExperiment:, %s', EXPT);
    new_location = sprintf('/Documents and Settings/rac32/Desktop/_Copy of WD Sync 01-08-2008/C/user1/lead/ro8084co/stochastic_FCOR/%s/condition1/stimuli.mat', EXPT);
    f = load(new_location);
    fprintf(file,'\nStimuli for condition 1:');
    for stimulus_set=1: TOTAL_STIM_SETS,
        stim_name = sprintf('stimuli%d', stimulus_set);
        S = f.(stim_name);
        fprintf(file, '\nStimulus Set %d:\n', stimulus_set);
        fprintf(file,  '%s, [ %.3f %.3f, %.3f %.3f, %.3f %.3f, %.3f %.3f ],', 'Sample 1: ', S(1,1), S(1,4), S(1,7), S(1,10), S(1,13), S(1,16), S(1,19), S(1,22));
        if TEST_PARADIGM == 2 | TEST_PARADIGM == 3,
            fprintf(file,  '%s, [ %.3f %.3f, %.3f %.3f, %.3f %.3f, %.3f %.3f ],', 'Samp2 or A": ', S(2,1), S(2,4), S(2,7), S(2,10), S(2,13), S(2,16), S(2,19), S(2,22));
        end
        fprintf(file,  '%s, [ %.3f %.3f, %.3f %.3f, %.3f %.3f, %.3f %.3f ] \r', 'Novel: ', S(3,1), S(3,4), S(3,7), S(3,10), S(3,13), S(3,16), S(3,19), S(3,22));
    end
    fprintf(file, '\nTotal stimulus conditions: %d ,Total stimulus sets: %d', TOTAL_STIM_CONDITIONS, TOTAL_STIM_SETS);
    fprintf(file, '\nNUM_ROWS = %d, A: %.3f  B: %.3f', NUM_ROWS, A, B);
    fprintf(file, '\nPEAK_SIZE: %d, (9 winners if 1, 13 winners if 2)', PEAK_SIZE);
    fprintf(file, '\nTotal training conditions: %d ,Steps: ,', TOTAL_TRAINING_CONDITIONS);
    for level = 1: TOTAL_TRAINING_CONDITIONS,
        fprintf(file, '%d,', Num_Training_Cycles{level}); 
    end
    fprintf(file, '\nTotal encoding conditions: %d ,Steps: ,',  TOTAL_ENCODING_CONDITIONS);
    for level = 1: TOTAL_ENCODING_CONDITIONS,
        fprintf(file, '%d,', Num_Encoding_Cycles{level});
    end
    if FORGETTING == 0,
        fprintf(file, '\nNo interference.');
    elseif FORGETTING == 1,
        fprintf(file, '\nNum interference conditions: %d, Steps: ,', TOTAL_INTERFERENCE_CONDITIONS);
        for level = 1: TOTAL_INTERFERENCE_CONDITIONS,
            fprintf(file, '%d,', Num_Interference_Cycles{level} );
        end
    end
    fprintf(file, '\nNum input dims conditions: %d', TOTAL_INPUT_DIMS_CONDITIONS);
    fprintf(file, '\n\n\n');
        
    if TEST_PARADIGM == 1 | TEST_PARADIGM == 3,
        for repeat = 1:TOTAL_REPEATS,
            fprintf(file, ' ,Repeat:  %d', repeat);
            fprintf(file, '\n');
          % for stim_condition = 1: TOTAL_STIM_CONDITIONS, Think I can delete
                          % this because going to include stim_condition as a repeat type
                if TOTAL_INPUT_DIMS_CONDITIONS == 1,
                    %blah
                elseif TOTAL_INPUT_DIMS_CONDITIONS == 2,
                    %blah
                elseif TOTAL_INPUT_DIMS_CONDITIONS == 3,
                    fprintf(file, ' ,Rat ,Dscore Intact,,Dscore Lesion,,Dscore PRh of Control,,Dscore Caud of Control \n');
                    for rat = 1:num_rats,
                        fprintf(file, ' ,%d,%.4f,,%.4f,,%.4f,,%.4f\n', rat, data_per_repeat_intact(repeat,1,rat), data_per_repeat_lesion(repeat,1,rat),data_per_repeat_PRh(repeat,1,rat), data_per_repeat_caud(repeat,1,rat));
                    end
                    %% Calculate SEM across rats
                    SEM_dscore_lesion(repeat)  = std(data_per_repeat_lesion(repeat, 1, 1:num_rats))/sqrt(num_rats-1);
                    SEM_dscore_intact(repeat) = std(data_per_repeat_intact(repeat, 1, 1:num_rats))/sqrt(num_rats-1);
                    SEM_dscore_PRh(repeat) = std(data_per_repeat_PRh(repeat, 1, 1:num_rats))/sqrt(num_rats-1);
                    SEM_dscore_caud(repeat) = std(data_per_repeat_caud(repeat, 1, 1:num_rats))/sqrt(num_rats-1);
                    fprintf(file, ' ,Average,%.4f,,%.4f,,%.4f,,%.4f\n', sum(data_per_repeat_intact(repeat, 1, 1:num_rats))/num_rats, sum(data_per_repeat_lesion(repeat, 1, 1:num_rats))/num_rats, sum(data_per_repeat_PRh(repeat, 1, 1:num_rats))/num_rats, sum(data_per_repeat_caud(repeat, 1, 1:num_rats))/num_rats);
                    fprintf(file, ' ,SEM, %.4f,,%.4f,,%.4f,,%.4f\n\n\n', SEM_dscore_intact(repeat), SEM_dscore_lesion(repeat), SEM_dscore_PRh(repeat),SEM_dscore_caud(repeat));
                end %% End of total_input_dims_conditions check
%    end %% over stim_condition loop
        end %%over repeat loop
    elseif TEST_PARADIGM == 2,
        for repeat = 1: TOTAL_REPEATS,
            fprintf(file, ' ,Repeat:  %d', repeat);
             %   for repeat_label = 1:num_repeat_types, WILL NEED THIS SOMEHOW!
             %        fprintf(file, ',%s', REPEAT(repeat, repeat_label).type);
             %   end
            fprintf(file, '\n');
           %     for stim_condition = 1: TOTAL_STIM_CONDITIONS,
                if TOTAL_INPUT_DIMS_CONDITIONS == 1,
                    %blah
                elseif TOTAL_INPUT_DIMS_CONDITIONS == 2,
                    %blah
                elseif TOTAL_INPUT_DIMS_CONDITIONS == 3,
                    fprintf(file, ' ,,Dscore Intact,,,Dscore Lesion,,,Dscore PRh of Control,,,Dscore Caud of Control\n');
                    fprintf(file, ' ,Rat,Sample 1,Sample 2,,Sample 1,Sample 2,,Sample1, Sample2,,Sample1, Sample2 \n');
                    for rat = 1:num_rats, %%cols 1 and 3, because dscore but test-para 2
                        fprintf(file, ' ,%d,%.4f,%.4f,,%.4f,%.4f,,%.4f,%.4f,,%.4f,%.4f\n', rat, data_per_repeat_intact(repeat,1,rat), data_per_repeat_intact(repeat,2,rat), data_per_repeat_lesion(repeat,1,rat), data_per_repeat_lesion(repeat,2,rat),...
                                    data_per_repeat_PRh(repeat,1,rat), data_per_repeat_PRh(repeat,2,rat), data_per_repeat_caud(repeat,1,rat), data_per_repeat_caud(repeat,2,rat));
                    end
                    SEM_dscore_lesion(repeat,1)  = std(data_per_repeat_lesion(repeat, 1, 1:num_rats))/sqrt(num_rats-1);
                    SEM_dscore_intact(repeat,1) = std(data_per_repeat_intact(repeat, 1, 1:num_rats))/sqrt(num_rats-1);
                    SEM_dscore_PRh(repeat,1)  = std(data_per_repeat_PRh(repeat, 1, 1:num_rats))/sqrt(num_rats-1);
                    SEM_dscore_caud(repeat,1) = std(data_per_repeat_caud(repeat, 1, 1:num_rats))/sqrt(num_rats-1);                    
                    SEM_dscore_lesion(repeat,2)  = std(data_per_repeat_lesion(repeat, 2, 1:num_rats))/sqrt(num_rats-1);
                    SEM_dscore_intact(repeat,2) = std(data_per_repeat_intact(repeat, 2, 1:num_rats))/sqrt(num_rats-1);
                    SEM_dscore_PRh(repeat,2)  = std(data_per_repeat_PRh(repeat, 2, 1:num_rats))/sqrt(num_rats-1);
                    SEM_dscore_caud(repeat,2) = std(data_per_repeat_caud(repeat, 2, 1:num_rats))/sqrt(num_rats-1);                     
                    fprintf(file, ' ,Average,%.4f,%.4f,,%4f,%.4f,,%4f,%.4f,,%4f,%.4f\n', sum(data_per_repeat_intact(repeat, 1, 1:num_rats))/num_rats, sum(data_per_repeat_intact(repeat, 2, 1:num_rats))/num_rats, ...
                                    sum(data_per_repeat_lesion(repeat, 1, 1:num_rats))/num_rats,sum(data_per_repeat_lesion(repeat, 2, 1:num_rats))/num_rats, ...
                                    sum(data_per_repeat_PRh(repeat, 1, 1:num_rats))/num_rats,sum(data_per_repeat_PRh(repeat, 2, 1:num_rats))/num_rats, ...
                                    sum(data_per_repeat_caud(repeat, 1, 1:num_rats))/num_rats,sum(data_per_repeat_caud(repeat, 2, 1:num_rats))/num_rats);
                    fprintf(file, ' ,SEM,%.4f,%.4f,,%.4f,%.4f,,%.4f,%.4f,,%.4f,%.4f\n\n\n', SEM_dscore_intact(repeat,1),SEM_dscore_intact(repeat,2), ...
                                    SEM_dscore_lesion(repeat,1),SEM_dscore_lesion(repeat,2), SEM_dscore_PRh(repeat,1), SEM_dscore_PRh(repeat,2), SEM_dscore_caud(repeat,1), SEM_dscore_caud(repeat,2));       
                end  
              %  end
        end %end 'for repeat'
    end %end 'if test_paradigm'
    fclose(file);
