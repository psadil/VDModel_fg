function [ stopSampling, p, whichCaudal ] = determineMisMatch( judging, p, trial)
%% determineMisMatch: determines if stimuli are misMatching
stopSampling = 0;
whichCaudal = 0;
% compares the difference in the maximumly selective layer of the network
% to the current and previous stim to a funning familiarity difference

% might be called again if not enough evidence has been accrued.

%% Gather selectivity

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
        
        
    elseif layer_new == 2 && (all(p.usePRC(:,trial)))
        
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
        
%         familDiff_caudal = abs(meanSelectivity_caudal_prev - meanSelectivity_caudal_new);
        familDiff_caudal = meanSelectivity_caudal_prev - meanSelectivity_caudal_new;
        
        % determine which grid in caudal layer would be used for judgement
%         whichCaudal = find(abs(familDiff_caudal)==max(abs(familDiff_caudal)));
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
        %         p.familDiff_PRC(trial) = abs(p.meanSelectivity_PRC_prev(trial) - p.meanSelectivity_PRC_new(trial));
        p.familDiff_PRC(trial) = p.meanSelectivity_PRC_prev(trial) - p.meanSelectivity_PRC_new(trial);
        
    end
end


noise = p.decision_noise;
thresh_caudal = mean(p.famil_diff_thresh(1,:));

familDiff_caudal = p.familDiff_caudal(trial);

lower_caudal = familDiff_caudal - noise;
upper_caudal = familDiff_caudal + noise;

familDiff_caudal = lower_caudal + (upper_caudal - lower_caudal)*rand;

if p.layer == 2
    thresh_PRC = mean(p.famil_diff_thresh(p.numThresh,:));    
    
    familDiff_PRC = p.familDiff_PRC(trial);
    lower_PRC = familDiff_PRC - noise;
    upper_PRC = familDiff_PRC + noise;
    
    familDiff_PRC = lower_PRC + (upper_PRC - lower_PRC)*rand;

    
    % the following should be uncommented when noise loads on to thresh
    familDiffs_temp = [familDiff_caudal - thresh_caudal, familDiff_PRC - thresh_PRC];
    
    [~, whichFamilDiff] = max(familDiffs_temp);
    
%     if trial >= 40
%         2;
%     end
    
    
    if whichFamilDiff == 2
        familDiff = familDiff_PRC;
        thresh = thresh_PRC;
        p.usePRC(:,trial) = 1;
    else
        familDiff = familDiff_caudal;
        thresh = thresh_caudal;
        p.usePRC(:,trial) = 0;
    end
    
else
    familDiff = familDiff_caudal;
    thresh = thresh_caudal;
    p.usePRC(:,trial) = 0;
    
end

%% compare differences in selectivity with threshold

p.familDiff_withNoise(trial) = familDiff;


if p.familDiff_withNoise(trial) > thresh    
    % we have misMatching feature! So, stop sampling
    stopSampling = 1;                  
    
else
    % no evidence for misMatch of stimuli
    stopSampling = 0;
    
end


p.famil_difference(trial) = p.familDiff_withNoise(trial);
p.threshToPlot(trial) = thresh;


end

