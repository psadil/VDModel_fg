function assess_stimuli(num_stimuli)

f = load('/user1/lead/ro8084co/stochastic_FCOR/unique_vs_repeated/unique/condition1/stimuli.mat');

for stim = 1:num_stimuli
    stim_name = sprintf('stimuli%d', stim);
    S = f.(stim_name);
   
  %  fprintf('\nStimuli %d:\n', stim);
 %   fprintf('Sample: %.2f %.2f   %.2f %.2f   %.2f %.2f   %.2f %.2f\n', S(1,1), S(1,4), S(1,7), S(1,10), S(1,13), S(1,16), S(1,19), S(1,22));
 %   fprintf('Novel:  %.2f %.2f   %.2f %.2f   %.2f %.2f   %.2f %.2f\n', S(2,1), S(2,4), S(2,7), S(2,10), S(2,13), S(2,16), S(2,19), S(2,22));

    S_vect = [S(1,1), S(1,4); S(1,7), S(1,10); S(1,13), S(1,16); S(1,19), S(1,22); ...
              S(2,1), S(2,4); S(2,7), S(2,10); S(2,13), S(2,16); S(2,19), S(2,22)];
    
 %   avail_features = [ .05 .05 ; .05 .333 ; .05 .667 ; .05 .95 ; ...
      %                 .333 .05 ; .333 .333; .333 .667; .333 .95; ... 
          %             .667 .05; .667 .333; .667 .667; .667 .95; ...
                %       .95 .05; .95 .333; .95 .667; .95 .95];
                   
    for check = 1:8
        for check_two = 1:8
            diff = S_vect(check,:) - S_vect(check_two,:);
            if (diff == 0) & (check ~= check_two)
                fprintf('\nOverlapping feature, stimulus pair %d\n', stim);
                S_vect
            end
        end
    end          
                       
end