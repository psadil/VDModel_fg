function [p, stims] = createDelayStimuli(p)
% VDcreateStimuli - creates stimuli for input to VD network


% ROOT = [pwd '\'];
% exptDir = [p.exptName, '\'];

nTotalDims = p.components / p.nDimReps;
nCaudalGrids = p.numGrids_Caudal;
nDimsCaudal = nTotalDims / nCaudalGrids;
nStimFactors = p.nStimFactors;
nSimpleConj = nDimsCaudal ^ nStimFactors;

% number of features to use for stimuli (less then total)
nStimsPerCond = 6;

LA_misMatch = zeros(p.nMismatch,nTotalDims,2); %one col for stim1, one col for stim2

count=1;
availFeat = zeros(nSimpleConj, nDimsCaudal);
for inp1 = 1:nCaudalGrids,
    for inp2 = 1:nStimFactors,
        availFeat(count,:) = [inp1 inp2];
        
        count=count+1;
    end
end

availFeat(availFeat==1)=0.05;
availFeat(availFeat==2)=0.35;
availFeat(availFeat==3)=0.65;
availFeat(availFeat==4)=0.95;

features = availFeat;

firstFeatureToCheck=(1:nDimsCaudal:nTotalDims);
lastFeatureToCheck = firstFeatureToCheck+(nDimsCaudal-1);


%% LA
for stimPair = 1:p.nMismatch,
    chosenFeat = zeros(nCaudalGrids,2);
    % sample until no features match
    while any(chosenFeat(:,1) == chosenFeat(:,2))
        chosenFeat = randi(nStimsPerCond,[nCaudalGrids,2]);
    end
    
    for feature = 1:nCaudalGrids
        %first stim in pair
        LA_misMatch(stimPair,firstFeatureToCheck(feature):lastFeatureToCheck(feature),1) = features(chosenFeat(feature,1),:);
        %second stim in pair
        LA_misMatch(stimPair,firstFeatureToCheck(feature):lastFeatureToCheck(feature),2) = features(chosenFeat(feature,2),:);
    end
end


stims.stimuli1 = reshape(repmat(reshape(LA_misMatch,...
        [1,p.nMismatch,1,p.numInputDims_PRC/p.nDimReps,1,2]),[1,1,p.nDimReps,1,1,1]),...
        [p.nMismatch,(p.numInputDims_PRC/p.nDimReps)*p.nDimReps,2]);

% %save stimuli
% if ~exist(strcat(ROOT,exptDir,'condition1'),'dir')
%     mkdir(strcat(ROOT,exptDir,'condition1'))
% end
% location = strcat(ROOT,exptDir,'condition1', '/stimuli.mat');
% save(location,'stimuli1');





