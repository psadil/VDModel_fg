function p = model(p,stims,weights_before)
% model -- contains experimental procedure for the task assigned
% to the given model.

% see Experiment 2 of Cowell et al. 2006

% called by: runSim
% calls: present_stimulus, calc_recognition

% input
%   p: experimental structure
%   stims: stimuli, defined by createListLengthStimuli
%   weights_before: preTrained weights of current rat

% output
%   p: experimental structure, will contain calculated recognition scores


%% grab task specific stims

if p.expt == 3
    if p.stimCond == 1
        stimuli = stims.misMatch;
    elseif p.stimCond == 2
        stimuli = stims.match;
    end
else
    stimuli = stims.misMatch; 
end
% uncomment when randomizing initial weights
% weights_before = rand(size(weights_before));

%% begin

% repeat experiment once for each stimulus set
for stimSet = 1:p.nStimSets
   
    studyOrder = randperm(p.nTrials(p.stimCond));
    
    %% study phase
    
    
    % present all study items. For initial item, use fresh weights. For
    % every item after the first, use updated weights
    for trial_study = 1:p.nTrials(p.stimCond)
        
        % grab pair of stimuli used in this trial
        stimPair = squeeze(stimuli(studyOrder(trial_study),:,:,p.stimCond,stimSet));
        
        % want fresh weights for only the first stim, but updated weights for
        % stims after that
        if trial_study == 1
            [weights, ~, p, ~] = ...
                present_stimulus(stimPair(:,1), weights_before, p, trial_study);
        else
            [weights, ~, p, ~] = ...
                present_stimulus(stimPair(:,1), weights, p, trial_study);
        end
        
    end
    
    %% delay phase
    
    % simulate delay for appropriate cycles
    % for expt 1 (delay), stim cond will index within here how many
    %    interference cycles to simulate
    % expt == 2 (listLength), no interference cycles should occur
    % expt == 3 (tUnique), should always be 200 interference cycles
    
    [p, weights] = interfere(p, weights);
    
    
    %% choice phase
    % in test, use updated weights. However, do not update weights further.
    for trial_test = 1:p.nTrials(p.stimCond)
        
        stimPair = squeeze(stimuli(studyOrder(trial_test),:,:,p.stimCond,stimSet));
        
        % selectivity of network to each stim. Final dim == 2 because there
        % is a selectivity for both the studied and novel stim. 1 ==
        % studied, 2 == novel.
        selec_forComp = zeros(p.nLayers,max(p.nGrids),2);
        acts_forComp = zeros(p.nLayers,p.nRows,p.nRows,max(p.nGrids),2);
        
        % re-present initial sample stimulus
        [~, selec_forComp(:,:,1), p, acts_forComp(:,:,:,:,1)] = ...
            present_stimulus(stimPair(:,1), weights, p, trial_test);
        
        % present initial novel stimulus
        [~, selec_forComp(:,:,2), p, acts_forComp(:,:,:,:,2)] = ...
            present_stimulus(stimPair(:,2), weights, p, trial_test);
        
        % calc recognition score
        [p] = calc_recognition(p, selec_forComp, trial_test, stimSet);
        
        % calc correlation score
        [p] = calc_corr(p, acts_forComp, trial_test, stimSet);
        
    end
    
end

end