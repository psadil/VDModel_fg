function [ stopSampling, p, whichCaudal ] = determineMisMatch( judging, p, trial)
%% determineMisMatch: determines if stimuli are misMatching
stopSampling = 0;
whichCaudal = 0;
% compares the difference in the maximumly selective layer of the network
% to the current and previous stim to a funning familiarity difference

% might be called again if not enough evidence has been accrued.

%% Gather selectivity

%% storage variables 

meanSelectivity_caudal_new = 0;

%%
%--------------------------------------------------------------------------
% Decide which features were compared. Only necessary for caudal layer (or)
% any layer that has more than 1 grid.
%--------------------------------------------------------------------------


featuresToCompare = zeros(1,p.numGrids_Caudal);
for feat = 1:p.numGrids_Caudal
    if any(judging.featuresSampled_new==feat) && any(judging.featuresSampled_prev==feat)
        featuresToCompare(feat) = 1;
    end
end
if ~sum(featuresToCompare);
    return;
end
p.comparedFeat(trial,:) = featuresToCompare;

%--------------------------------------------------------------------------
% determine which layer is most selective for each stimulus
%--------------------------------------------------------------------------

%first, look at most recent stim
for layer_new = 1:p.numLayers
    if layer_new == 1
        %         p.meanSelectivity_caudal_new(trial,:) = judging.initial_selec(layer_new,:).*featuresToCompare; % only look at layers for which features were sampled
        meanSelectivity_caudal_new = judging.initial_selec(layer_new,:).*featuresToCompare;
        
        
    elseif layer_new == 2 && (sum(p.usePRC(:,trial))==2)
        
        % when plotting, need to make sure that the p.usePRC==(0 || 1) cases aren't
        % looked at...
        p.meanSelectivity_PRC_new(trial,:) = judging.initial_selec(layer_new,1);
        
        
    end
end


%now, look at prevoius stim
for layer_prev = 1:p.numLayers
    if layer_prev == 1
        %         p.meanSelectivity_caudal_prev(trial,:) = judging.selectivity_prev(layer_prev,:).*featuresToCompare; % only look at grids for which features were sampled
        meanSelectivity_caudal_prev = judging.selectivity_prev(layer_prev,:).*featuresToCompare;
        
        familDiff_caudal = abs(meanSelectivity_caudal_prev - meanSelectivity_caudal_new);
        
        % determine which grid in caudal layer would be used for judgement
        whichCaudal = find(familDiff_caudal==max(familDiff_caudal));
        
        if length(whichCaudal)>1
            whichCaudal = whichCaudal(1);
        end
        
        if isempty(whichCaudal)
            2;
        end
        
        p.meanSelectivity_caudal_prev(trial) = meanSelectivity_caudal_prev(whichCaudal);
        p.meanSelectivity_caudal_new(trial) = meanSelectivity_caudal_new(whichCaudal);
        
        p.familDiff_caudal(trial) = familDiff_caudal(whichCaudal);
        
    elseif (layer_prev == 2) && (all(p.usePRC(:,trial)))
        p.meanSelectivity_PRC_prev(trial) = judging.selectivity_prev(layer_prev,1);
        p.familDiff_PRC(trial) = abs(p.meanSelectivity_PRC_prev(trial) - p.meanSelectivity_PRC_new(trial));
        
    end
end


if ~p.diffEncode
    
    % only use PRC layer if p.numGrids_Caudal features were sampled for both stimuli
    if (all(p.usePRC(:,trial))) && (p.which_gp_layer==2)
        familDiff = p.familDiff_PRC(trial);
        thresh = p.famil_diff_thresh(p.numThresh,:);
    else
        familDiff = p.familDiff_caudal(trial);
        thresh = p.famil_diff_thresh(1,:);
    end
    
else
    
    if p.layer == 2
        
        familDiffs_temp = [p.familDiff_caudal(trial) - mean(p.famil_diff_thresh(1,:)), p.familDiff_PRC(trial) - mean(p.famil_diff_thresh(p.numThresh,:))];
        [~, whichFamilDiff] = max(familDiffs_temp);
        
        if whichFamilDiff == 2
            familDiff = p.familDiff_PRC(trial);
            thresh = p.famil_diff_thresh(p.numThresh,:);
        else
            familDiff = p.familDiff_caudal(trial);
            thresh = p.famil_diff_thresh(1,:);
            p.usePRC(:,trial) = 0;
        end
        
    else
        familDiff = p.familDiff_caudal(trial);
        thresh = p.famil_diff_thresh(1,:);
        p.usePRC(:,trial) = 0;
        
    end
    
end
%% compare differences in selectivity with threshold
% p.famil_difference_most(trial) = abs(mostSelectiveLayer_new - mostSelectiveLayer_prev);% /(mostSelectiveLayer_new+mostSelectiveLayer_prev); %+ (rand*2-1)*p.decision_noise;
% familDiff = p.familDiff_max(trial);
% noise = p.decision_noise.*rand;
noise = p.decision_noise;
p.familDiff_withNoise(trial) = (familDiff-noise)+(familDiff-(familDiff-noise)).*rand; %familDiff + noise;%  ((rand(1,5)*2-1)*p.decision_noise);
% p.familDiff_withNoise(trial) = familDiff;
% thresh = (thresh-noise)+(thresh-(thresh-noise)).*rand;

if any(p.familDiff_withNoise(trial) > (mean(thresh)))
    % we have misMatching feature! So, stop sampling
    stopSampling = 1;                  % threshold is running av. of last 6 trials famil differences
    
else
    % no evidence for misMatch of stimuli
    stopSampling = 0;
    
end

% temporarily commenting out to see if caudal layre can be same in lesion
% and control

% record the famil diff of the grids that looked at that stimuli
% if (p.layer == 2) && (all(p.usePRC(:,trial))) % if PRC layer not available, or not enough features were sampled...
%     p.famil_difference(trial) = familDiff;
% else
%     %     because sometimes two grids can match, need to select just one of
%     %     them
%     famil_diff_temp = familDiff(whichCaudal);
%     p.famil_difference(trial) = famil_diff_temp(1);
% end

p.famil_difference(trial) = p.familDiff_withNoise(trial);



end

