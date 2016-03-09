function p = listLengthModel(p,stims,weights_before)

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Matlab code for making a Self Organising Feature Map grid (SOFM)
%
% Rosie Cowell (Dec 2011)
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% Represent the SOFM as a 2-D grid of x,y coordinates
% i.e. 3 dimensions in all: Rows, Cols, Slices
% 3rd-Dimension, slice 1: x-coords
% 3rd-Dimension, slice 2: y-coords

%% storage variables
pktot.fin_act_peak = zeros(p.numLayers,max(p.numGrids));
pktot.fin_act_total = zeros(p.numLayers,max(p.numGrids));
pktot.init_act_peak = zeros(p.numLayers,max(p.numGrids));
pktot.init_act_total = zeros(p.numLayers,max(p.numGrids));




%% Load the pretrained weights at beginning of visual discrimination task
preTrainedWeights = weights_before;


%% begin trial loop

for trial_present = 1:p.nTrials(p.stimCond)
    
    stimPair = squeeze(stims(trial_present,:,:,p.stimCond));
    
    % present initial sample stimulus
    [weights, ~, p, pktot,~] = ...
        present_stimulus(stimPair(:,1), preTrainedWeights, p, trial_present, pktot);
    
end

for trial_test = 1:p.nTrials(p.stimCond)
    
    selec_forComp = zeros(p.numLayers,max(p.nGrids),2);
    actGauss = zeros(p.numLayers,max(p.nGrids),2);
    % re-present initial sample stimulus
    [~, selec_forComp(:,:,1), p, pktot, actGauss(:,:,1)] = ...
        present_stimulus(stimPair(:,1), weights, p, trial_test, pktot);
    
    % present initial novel stimulus
    [~, selec_forComp(:,:,2), p, pktot, actGauss(:,:,2)] = ...
        present_stimulus(stimPair(:,2), weights, p, trial_test, pktot);
    
    % calc recognition score
    [p] = calc_recognition(p, selec_forComp, trial_test, actGauss);
    
end


end
