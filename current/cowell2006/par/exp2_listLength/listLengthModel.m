function p = listLengthModel(p,stims,weights_before)

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Matlab code for making a Self Organising Feature Map grid (SOFM)
%
% Rosie Cowell (Dec 2011)
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%



% uncomment when randomizing initial weights
% weights_before = rand(size(weights_before));

%% begin trial loop
for stimSet = 1:p.nStimSets
    
    for trial_study = 1:p.nTrials(p.stimCond)
        
        stimPair = squeeze(stims(trial_study,:,:,p.stimCond,stimSet));
        
        % want fresh weights for only the first stim, but updated weights for
        % stims after that
        if trial_study == 1
            % present initial sample stimulus
            [weights, ~, p,~] = ...
                present_stimulus(stimPair(:,1), weights_before, p, trial_study);
        else
            [weights, ~, p,~] = ...
                present_stimulus(stimPair(:,1), weights, p, trial_study);
        end
        
    end
    
    
    for trial_test = 1:p.nTrials(p.stimCond)
        
        stimPair = squeeze(stims(trial_test,:,:,p.stimCond,stimSet));
        
        selec_forComp = zeros(p.numLayers,max(p.nGrids),2);
        actGauss = zeros(size(selec_forComp));
        % re-present initial sample stimulus
        [~, selec_forComp(:,:,1), p, actGauss(:,:,1)] = ...
            present_stimulus(stimPair(:,1), weights, p, trial_test);
        
        % present initial novel stimulus
        [~, selec_forComp(:,:,2), p, actGauss(:,:,2)] = ...
            present_stimulus(stimPair(:,2), weights, p, trial_test);
        
        gauss = 0;
        % calc recognition score
        [p] = calc_recognition(p, selec_forComp, trial_test, gauss,stimSet);
        
        gauss = 1;
        % calc Guass
        [p] = calc_recognition(p, actGauss, trial_test, gauss,stimSet);
    end
    
end

end