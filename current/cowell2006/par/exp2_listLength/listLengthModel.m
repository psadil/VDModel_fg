function p = listLengthModel(p,stims,weights_before)

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Matlab code for making a Self Organising Feature Map grid (SOFM)
%
% Rosie Cowell (Dec 2011)
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


%% storage variables
pktot.fin_act_peak = zeros(p.numLayers,max(p.numGrids));
pktot.fin_act_total = zeros(p.numLayers,max(p.numGrids));
pktot.init_act_peak = zeros(p.numLayers,max(p.numGrids));
pktot.init_act_total = zeros(p.numLayers,max(p.numGrids));




%% Load the pretrained weights at beginning of visual discrimination task
preTrainedWeights = weights_before;
% preTrainedWeights = rand(size(weights_before));

%% begin trial loop

for trial_present = 1:p.nTrials(p.stimCond)
    
    stimPair = squeeze(stims(trial_present,:,:,p.stimCond));
    
    % want fresh weights for only the first stim, but updated weights for
    % stims after that
    if trial_present == 1
        % present initial sample stimulus
        [weights, ~, p, pktot,~] = ...
            present_stimulus(stimPair(:,1), preTrainedWeights, p, trial_present, pktot);
    else
        [weights, ~, p, pktot,~] = ...
            present_stimulus(stimPair(:,1), weights, p, trial_present, pktot);
    end
    
end

for trial_test = 1:p.nTrials(p.stimCond)
    
    stimPair = squeeze(stims(trial_test,:,:,p.stimCond));
    
    selec_forComp = zeros(p.numLayers,max(p.nGrids),2);
    actGauss = zeros(p.numLayers,max(p.nGrids),2);
    % re-present initial sample stimulus
    [~, selec_forComp(:,:,1), p, pktot, actGauss(:,:,1)] = ...
        present_stimulus(stimPair(:,1), weights, p, trial_test, pktot);
    
    % present initial novel stimulus
    [~, selec_forComp(:,:,2), p, pktot, actGauss(:,:,2)] = ...
        present_stimulus(stimPair(:,2), weights, p, trial_test, pktot);
    
    gauss = 0;
    % calc recognition score
    [p] = calc_recognition(p, selec_forComp, trial_test, gauss);
    
    gauss = 1;
    % calc Guass
    [p] = calc_recognition(p, actGauss, trial_test, gauss);
end


end
