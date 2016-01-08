function generate_non_overlapping_pairs

size_stim_set = input('\nEnter number of stimuli in the set:');

double_stim_set = size_stim_set*2;

[poss_combinations] = generate_poss_combinations(100)

for stimulus = 1:size_stim_set
    for samp_stim =1:100
        for nov_stim = 1:100
            for segment_samp =1:4,
                for segment_nov = 1:4,
                    if poss_combinations(samp_stim, segment_nov
                
                
                
              inp_vector(1,:) = cat(2, avail_features((poss_combinations(stimulus,1)),:), avail_features((poss_combinations(stimulus,2)),:), ...
        avail_features((poss_combinations(stimulus,3)),:), avail_features((poss_combinations(stimulus,4)),:));
    inp_vector(2,:) = cat(2, avail_features((poss_combinations(stimulus+size_stim_set,1)),:), avail_features((poss_combinations(stimulus+size_stim_set,2)),:), ...
        avail_features((poss_combinations(stimulus+size_stim_set,3)),:), avail_features((poss_combinations(stimulus+size_stim_set,4)),:));
    stim_name_string = sprintf('stimuli%d = inp_vector;', stimulus);
    eval(stim_name_string);
end 