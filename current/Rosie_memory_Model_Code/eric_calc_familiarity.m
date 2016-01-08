function [familiarity] = eric_calc_familiarity(select_samp, select_novel)

%% This function called from within eric_choice.m

global NUM_ROWS NUM_COLS

%%%%%%%%%%%%%%%%%%%%%% Calculate familiarity score %%%%%%%%%%%%%%%%%%%%%%%%%

familiarity = (select_samp - select_novel)/(select_samp + select_novel);

%% Used to combine familiarity and discriminability
%% dscore = discriminability*familiarity;
%% Not for the time being (22nd March 2005).








