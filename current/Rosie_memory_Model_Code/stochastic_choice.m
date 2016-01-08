function [chosen_stimulus] = stochastic_choice(selectivity1, selectivity2)

%%Called from eric_choice.m

global TEST_PARADIGM 

   selectivity_sum = selectivity1+selectivity2;
   %fprintf('selectivity sum = %f', selectivity_sum);
   mult_factor = 1/selectivity_sum;
   familiarity1 = selectivity1*mult_factor;
  
   %Generate a comparison number which is a random value between 0 and 1
   comparison_num = rand(1);

   %Compare the familiarity values for each stimulus to the random number. */
   if (familiarity1 > comparison_num)
       chosen_stimulus = 1;
   elseif (familiarity1 < comparison_num)
       chosen_stimulus = 0;
      % fprintf('\nChosen Stimulus = %d', chosen_stimulus);
   end
    
   %% Old bit of code for checking selectivities are above a minimum value.
 %  if selectivity_sum < min_selectivity_sum
  %     fprintf('\nCHOOSING RESPONSE RANDOMLY.');
   %    if rand(1) < 0.5
    %       chosen_stimulus = 1;
    %    else
   %        chosen_stimulus = 0;
   %    end
  % elseif...