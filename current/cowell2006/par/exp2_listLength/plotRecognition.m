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

% first average across rats, then across trials
meanRecog_rats = squeeze(mean(recognition,1));
first = mean(meanRecog_rats(1,:,1),3);
second = mean(meanRecog_rats(2,:,1:6),3);
third = mean(meanRecog_rats(3,:,1:12),3);
fourth = mean(meanRecog_rats(4,:,1:18),3);

meanRecog = [first(1), first(2); second(1), second(2);...
    third(1), third(2); fourth(1), fourth(2)];

meanRecogGauss_rats = squeeze(mean(recognition,1));
first = mean(meanRecogGauss_rats(1,:,1),3);
second = mean(meanRecogGauss_rats(2,:,1:6),3);
third = mean(meanRecogGauss_rats(3,:,1:12),3);
fourth = mean(meanRecogGauss_rats(4,:,1:18),3);

meanRecogGauss = [first(1), first(2); second(1), second(2);...
    third(1), third(2); fourth(1), fourth(2)];


%%
close all

figs(1) = figure;
hold on
plot(1:4,meanRecog(:,1), '--ok', 'MarkerSize',10)
plot(1:4,meanRecog(:,2),'-ok','MarkerFaceColor','k', 'MarkerSize',10)
ax = gca;
ax.XTick = 1:4;
legend('Lesion','Control')
legend('boxoff')

saveas(figs(1),[saveFolder, '/recog'],'fig');
saveas(figs(1),[saveFolder, '/recog'],'jpg');

% gauss activation
figs(2) = figure;
hold on
plot(1:4,meanRecogGauss(:,1), '--ok', 'MarkerSize',10)
plot(1:4,meanRecogGauss(:,2),'-ok','MarkerFaceColor','k', 'MarkerSize',10)
ax = gca;
ax.XTick = 1:4;
legend('Lesion','Control')
legend('boxoff')

saveas(figs(2),[saveFolder, '/recogGauss'],'fig');
saveas(figs(2),[saveFolder, '/recogGauss'],'jpg');


end

