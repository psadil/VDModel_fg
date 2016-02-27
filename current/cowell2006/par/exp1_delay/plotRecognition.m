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
        
        if session <= p.nSess/2
            recognition(rat,session,1,:) = p.recognition;
        else
            recognition(rat,session-p.nSess/2,2,:) = p.recognition;
        end
    end
end

%%

% first average across rats, then across trials
meanRecog = mean(squeeze(mean(recognition,1)),3);

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

end

