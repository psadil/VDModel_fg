function [ p ] = calc_recognition( p, selec_forComp, trial, actGauss)
%% delay_calc_recognition: calcs recognition socres


%%
%--------------------------------------------------------------------------
% find average of layers' selectivity
%--------------------------------------------------------------------------

if p.layer == 2
    selec = mean([squeeze(mean(selec_forComp(1,:,:),2)), squeeze(selec_forComp(2,1,:))],2);   
    selec_gauss = mean([squeeze(mean(actGauss(1,:,:),2)), squeeze(actGauss(2,1,:))],2); 
else
    selec = squeeze(mean(selec_forComp(1,:,:),2));
    selec_gauss = squeeze(mean(actGauss(1,:,:),2));
end

p.recognition(trial,:) = (selec(1) - selec(2)) / (selec(1) + selec(2));
p.recognition_gauss(trial,:) = (selec_gauss(1) - selec_gauss(2)) / (selec_gauss(1) + selec_gauss(2));


end

