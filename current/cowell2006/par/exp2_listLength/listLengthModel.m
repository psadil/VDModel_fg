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

% global ROOT



% Load the pretrained weights at beginning of visual discrimination task

% preTrainedWeights=zeros(p.layer,p.nRows,p.nRows,p.numInputDims(p.numLayers),p.numGrids(1));
%
% for layer=1:p.layer
%     nInpDims=p.numInputDims(layer);
%     for grid=1:p.nGrids(layer)
%         if ~p.setPre
%             location = strcat(ROOT,'rats/rat', num2str(p.ratNum), '/pretrainedW__layer', num2str(layer), 'grid', num2str(grid),'.mat');
%             load(location);
%             preTrainedWeights(layer,:,:,1:nInpDims,grid)=w;
%             fclose('all');
%
%         else
%             preTrainedWeights = rand(size(weights));
%         end
%     end
% end

preTrainedWeights=rand(p.layer,p.nRows,p.nRows,p.numInputDims(p.numLayers),p.numGrids(1));
% preTrainedWeights = weights_before;

% Get stimuli from stimulus files in '/p.expt/conditionXX/' directory.
% location = strcat(p.root, p.expt, '/condition', num2str(p.stimCond),'/stimuli.mat');
% fid = load(location);
% fclose('all');

%% initialize storage variables


%% begin trial loop
%----------------------------------------------------------------------
%%% Get the two stimuli for this simultaneous visual discrimination trial

pktot.fin_act_peak = zeros(p.numLayers,max(p.numGrids));
pktot.fin_act_total = zeros(p.numLayers,max(p.numGrids));
pktot.init_act_peak = zeros(p.numLayers,max(p.numGrids));
pktot.init_act_total = zeros(p.numLayers,max(p.numGrids));

for trial_present = 1:p.nTrials(p.stimCond)
    
    stimPair = squeeze(stims(trial_present,:,:,p.stimCond));
    
    % present initial sample stimulus
    [weights, ~, p, pktot] = ...
        present_stimulus(stimPair(:,1), preTrainedWeights, p, trial_present, pktot);
    
end

for trial_test = 1:p.nTrials(p.stimCond)
    
    selec_forComp = zeros(p.numLayers,max(p.nGrids),2);
    % re-present initial sample stimulus
    [~, selec_forComp(:,:,1), p, pktot] = ...
        present_stimulus(stimPair(:,1), weights, p, trial_test, pktot);
    
    % present initial novel stimulus
    [~, selec_forComp(:,:,2), p, pktot] = ...
        present_stimulus(stimPair(:,2), weights, p, trial_test, pktot);
    
    % calc recognition score
    [p] = calc_recognition(p, selec_forComp, trial_test);
    
end


end
