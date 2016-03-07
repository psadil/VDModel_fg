function [] = plotRecognition(firstRat, lastRat, folderName)
% analyze recognition

% scrsz = get(groot, 'ScreenSize');

saveFolder = [pwd,'/graphsAndSession/', folderName];

% load sample data file to get size of parameters
fileName = [saveFolder, '/Session', num2str(1), '_Rat', num2str(1)];
load(fileName)

numRats = lastRat-firstRat+1;

recognition = zeros(numRats,p.nSess/2,2,p.nTrials);

for rat = firstRat:lastRat
    for session = 1:p.nSess
        
        fileName = [saveFolder, '/Session', num2str(session), '_Rat', num2str(rat)];
        load(fileName)
        fprintf ('\nloading rat %d, session %d', rat, session);
        
        
        %------------------------------------------------------------------
        % collect all trial-wise selectivity of choice phase
        %------------------------------------------------------------------
        
        if session <= p.nSess/2 % lesion trials
            recognition(rat,session,1,:) = p.recognition;
        else % control trials
            recognition(rat,session-p.nSess/2,2,:) = p.recognition;
        end
    end
end

%%

% first average across trial, then across rats
meanRecog = squeeze(mean(squeeze(mean(recognition,4)),1));

% take mean of 4 trials (4th dim), then std across rats, and divide by
% sqrt(numRats)
recog_sem = squeeze(std(squeeze(mean(recognition,4)),1,1))./sqrt(numRats);


% convert to table for writting to csv
% recogT = table( squeeze(mean(recognition),1));
% recogT.Properties.VariableNames

% write that table as csv

%%
close all

figs(1) = figure;
hold on
plot(1:5,meanRecog(:,1), '--ok', 'MarkerSize',10)
plot(1:5,meanRecog(:,2),'-ok','MarkerFaceColor','k', 'MarkerSize',10)
ax = gca;
ax.XTick = 1:5;
legend('Lesion','Control')
legend('boxoff')

saveas(figs(1),[saveFolder, '/recog'],'fig');
saveas(figs(1),[saveFolder, '/recog'],'jpg');

figs(2) = figure;
hold on
plot(1:5,meanRecog(:,1), '--ok', 'MarkerSize',10)
ax = gca;
ax.XTick = 1:5;
legend('Lesion')
legend('boxoff')

saveas(figs(2),[saveFolder, '/recog_les'],'fig');
saveas(figs(2),[saveFolder, '/recog_les'],'jpg');


figs(3) = figure;
hold on
plot(1:5,meanRecog(:,2),'-ok','MarkerFaceColor','k', 'MarkerSize',10)
ax = gca;
ax.XTick = 1:5;
legend('Control')
legend('boxoff')

saveas(figs(3),[saveFolder, '/recog_contr'],'fig');
saveas(figs(3),[saveFolder, '/recog_contr'],'jpg');


figs(4) = figure;
subplot(1,2,1)
barweb(meanRecog(:,2), recog_sem(:,2), [], {'control'})
xlabel('stim condition');
ylabel('recognition');
legend({'0','200','400','600','800'},'Location','best');
figs(4).CurrentAxes.YLim = [min(meanRecog(:,2))-max(recog_sem(:,2)),...
    max(meanRecog(:,2))+max(recog_sem(:,2))];

subplot(1,2,2)
barweb(meanRecog(:,1), recog_sem(:,1), [], {'lesion'})
xlabel('stim condition');
ylabel('recognition');
legend({'0','200','400','600','800'},'Location','best');
figs(4).CurrentAxes.YLim = [min(meanRecog(:,1))-max(recog_sem(:,1)),...
    max(meanRecog(:,1))+max(recog_sem(:,1))];

saveas(figs(4),[saveFolder, '/recog_barweb'],'fig');
saveas(figs(4),[saveFolder, '/recog_barweb'],'jpg');


end

