function p = model_exp3(p,stims,weights_before)
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

%% begin

% repeat experiment once for each stimulus set
for stimSet = 1:p.nStimSets
   
    if p.stimCond == 1;
        studyOrder = randperm(p.nTrials(p.stimCond));
    end
    %% study phase
    
    
    % present all study items. For initial item, use fresh weights. For
    % every item after the first, use updated weights
    for trial = 1:p.nMismatch  % always 30 trials
        
        % grab pair of stimuli used in this trial
        if p.stimCond == 1;
            stimPair = squeeze(stimuli(studyOrder(trial),:,:,p.stimCond,stimSet));
        else
            stimPair = Shuffle(stimuli',1);
        end
        
        % want fresh weights for only the first stim, but updated weights for
        % stims after that
        if trial == 1
            [weights, ~, p, ~] = ...
                present_stimulus(stimPair(:,1), weights_before, p, trial);
        else
            [weights, ~, p, ~] = ...
                present_stimulus(stimPair(:,1), weights, p, trial);
        end
       
        %% delay phase
        
        % expt == 3 (tUnique), should always be the same number of
        % interfence cycles, and it should happen after each study sample
        
        [p, weights] = interfere(p, weights);

        
        %% choice phase
        % selectivity of network to each stim. Final dim == 2 because there
        % is a selectivity for both the studied and novel stim. 1 ==
        % studied, 2 == novel.
        selec_forComp = zeros(p.nLayers,max(p.nGrids),2);
        
        % re-present initial sample stimulus
        [~, selec_forComp(:,:,1), p, ~] = ...
            present_stimulus(stimPair(:,1), weights, p, trial);
        
        % present initial novel stimulus
        [~, selec_forComp(:,:,2), p, ~] = ...
            present_stimulus(stimPair(:,2), weights, p, trial);
        
        % calc recognition score
        [p] = calc_recognition(p, selec_forComp, trial, stimSet);
        
        
        
    end
    
end

end