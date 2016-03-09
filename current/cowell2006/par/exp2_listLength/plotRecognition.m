function [] = plotRecognition(firstRat, lastRat, folderName)
% analyze recognition

% now called directly from create_sim

% currently, taking the maximum familiarity differences at each trial
% produces the set of most desirable results
% folderName must be a string (without / on either side)


saveFolder = [pwd,'/graphsAndSession/', folderName];

% load sample data file to get size of parameters
fileName = [saveFolder, '/Session', num2str(1), '_Rat', num2str(1)];
load(fileName)

numRats = lastRat-firstRat+1;

recognition = zeros(numRats,p.nSess/2,2,max(p.nTrials));
gaussRecognition = zeros(numRats,p.nSess/2,2,max(p.nTrials));

for rat = firstRat:lastRat
    for session = 1:p.nSess
        
        fileName = [saveFolder, '/Session', num2str(session), '_Rat', num2str(rat)];
        load(fileName)
        fprintf ('\nloading rat %d, session %d', rat, session);
        
        
        %------------------------------------------------------------------
        % collect all trial-wise selectivity of choice phase
        %------------------------------------------------------------------
        
        if session <= p.nSess/2
            recognition(rat,session,1,1:p.nTrials(session)) = p.recognition;
            gaussRecognition(rat,session,1,1:p.nTrials(session)) = p.recognition_gauss;
        else
            recognition(rat,session-p.nSess/2,2,1:p.nTrials(session-p.nSess/2)) = p.recognition;
            gaussRecognition(rat,session-p.nSess/2,2,1:p.nTrials(session-p.nSess/2)) = p.recognition_gauss;
        end
    end
end

%%

% first, find the average for a rat in a given condition
rats_first = squeeze(mean(recognition(:,1,:,1),4));
rats_second = squeeze(mean(recognition(:,2,:,1:6),4));
rats_third = squeeze(mean(recognition(:,3,:,1:12),4));
rats_fourth = squeeze(mean(recognition(:,4,:,1:18),4));

recog_mean = [mean(rats_first,1); mean(rats_second,1); mean(rats_third,1); mean(rats_fourth,1)];

recog_sem = [std(rats_first)./sqrt(numRats); ...
    std(rats_second)./sqrt(numRats); ...
    std(rats_third)./sqrt(numRats); ...
    std(rats_fourth)./sqrt(numRats)];

% now, look at gaussian results
rats_gauss_first = squeeze(mean(gaussRecognition(:,1,:,1),4));
rats_gauss_second = squeeze(mean(gaussRecognition(:,2,:,1:6),4));
rats_gauss_third = squeeze(mean(gaussRecognition(:,3,:,1:12),4));
rats_gauss_fourth = squeeze(mean(gaussRecognition(:,4,:,1:18),4));

recog_gauss_mean = [mean(rats_gauss_first,1); mean(rats_gauss_second,1);...
    mean(rats_gauss_third,1); mean(rats_gauss_fourth,1)];

recog_gauss_sem = [std(rats_gauss_first)./sqrt(numRats); ...
    std(rats_gauss_second)./sqrt(numRats); ...
    std(rats_gauss_third)./sqrt(numRats); ...
    std(rats_gauss_fourth)./sqrt(numRats)];


%%
close all

figs(1) = figure;
hold on
plot(1:4,recog_mean(:,1), '--ok', 'MarkerSize',10)
plot(1:4,recog_mean(:,2),'-ok','MarkerFaceColor','k', 'MarkerSize',10)
ax = gca;
ax.XTick = 1:4;
legend('Lesion','Control')
legend('boxoff')

saveas(figs(1),[saveFolder, '/recog'],'fig');
saveas(figs(1),[saveFolder, '/recog'],'jpg');

% gauss activation
figs(2) = figure;
hold on
plot(1:4,recog_gauss_mean(:,1), '--ok', 'MarkerSize',10)
plot(1:4,recog_gauss_mean(:,2),'-ok','MarkerFaceColor','k', 'MarkerSize',10)
ax = gca;
ax.XTick = 1:4;
legend('Lesion','Control')
legend('boxoff')

saveas(figs(2),[saveFolder, '/recogGauss'],'fig');
saveas(figs(2),[saveFolder, '/recogGauss'],'jpg');



% recognition, sigmoidal
figs(3) = figure;
subplot(1,2,1)
barweb(recog_mean(:,2), recog_sem(:,2), [], {'control'})
xlabel('stim condition');
ylabel('recognition');
legend({'1','6','12','18'},'Location','best');
figs(3).CurrentAxes.YLim = [min(recog_mean(:,2))-max(recog_sem(:,2)),...
    max(recog_mean(:,2))+max(recog_sem(:,2))];

subplot(1,2,2)
barweb(recog_mean(:,1), recog_sem(:,1), [], {'lesion'})
xlabel('stim condition');
ylabel('recognition');
legend({'1','6','12','18'},'Location','best');
figs(3).CurrentAxes.YLim = [min(recog_mean(:,1))-max(recog_sem(:,1)),...
    max(recog_mean(:,1))+max(recog_sem(:,1))];

saveas(figs(3),[saveFolder, '/recog_sigm_barweb'],'fig');
saveas(figs(3),[saveFolder, '/recog_sigm_barweb'],'jpg');


% recognition, gaussian
figs(4) = figure;
subplot(1,2,1)
barweb(recog_gauss_mean(:,2), recog_gauss_sem(:,2), [], {'control'})
xlabel('stim condition');
ylabel('recognition');
legend({'1','6','12','18'},'Location','best');
figs(4).CurrentAxes.YLim = [min(recog_gauss_mean(:,2))-max(recog_gauss_sem(:,2)),...
    max(recog_gauss_mean(:,2))+max(recog_gauss_sem(:,2))];

subplot(1,2,2)
barweb(recog_gauss_mean(:,1), recog_gauss_sem(:,1), [], {'lesion'})
xlabel('stim condition');
ylabel('recognition');
legend({'1','6','12','18'},'Location','best');
figs(4).CurrentAxes.YLim = [min(recog_gauss_mean(:,1))-max(recog_gauss_sem(:,1)),...
    max(recog_gauss_mean(:,1))+max(recog_gauss_sem(:,1))];

saveas(figs(4),[saveFolder, '/recog_gauss_barweb'],'fig');
saveas(figs(4),[saveFolder, '/recog_gauss_barweb'],'jpg');

end

