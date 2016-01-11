function [ p ] = listLength_calc_recognition( p, selec_forComp, trial)
%% listLength_calc_recognition: calcs recognition socres


%%
%--------------------------------------------------------------------------
% find average of layers' selectivity
%--------------------------------------------------------------------------

if p.layer == 2
    selec = mean([squeeze(mean(selec_forComp(1,:,:),2)), squeeze(selec_forComp(2,1,:))],2);    
else
    selec = squeeze(mean(selec_forComp(1,:,:),2));
end

p.recognition(trial,:) = (selec(1) - selec(2)) / (selec(1) + selec(2));

end

