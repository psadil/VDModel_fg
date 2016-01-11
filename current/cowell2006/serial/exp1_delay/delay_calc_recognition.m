function [ p ] = delay_calc_recognition( p, selec_forComp, trial)
%% delay_calc_recognition: calcs recognition socres


%%
%--------------------------------------------------------------------------
% find average of layers' selectivity
%--------------------------------------------------------------------------

meanSelectivity_nov = mean(selec_forComp(:,:,2),2);
meanSelectivity_samp = mean(selec_forComp(:,:,1),2);

p.recognition(trial,:) = mean(meanSelectivity_samp,1) - mean(meanSelectivity_nov,1) / ...
    mean(meanSelectivity_samp,1) + mean(meanSelectivity_nov,1);

end

