function [] = plotRecognition(firstRat, lastRat)
% analyze recognition

% called by: sometimes createSim
% calls: barweb, plotShaded


% input:
%    firstRat: first rat that was run (usually 1)
%    lastRat: last rat that was run. The range of these two rats are what
%       will be plotted
%   folderName: name of folder that the sessions for these rats can be
%      found in. character string, same as stored in p.nameOfFolder

% output:
%   NA -- but a suite of graphs relating to summarizing the run of these
%      networks that occured in folderName


%%
% request for experiment name
expt = input('\nEnter experiment name: \n1 - delay, \n2 - listLength, \n3 - tUnique \n');
if expt == 1
    exptFolder = 'delay';
elseif expt == 2
    exptFolder = 'lsitLength';
elseif expt == 3
    exptFolder = 'tUnique';
else
    error('not valid experiment');
end



folderName = input('\nEnter folder name (as char string) \n');

saveFolder = [pwd,'\graphsAndSession\', exptFolder, '\', folderName];

% load sample data file to get size of parameters
fileName = [saveFolder, '/Session', num2str(1), '_Rat', num2str(1)];
load(fileName)

numRats = lastRat-firstRat+1;

recog = zeros(numRats,p.nSess/2,2,max(p.nTrials),p.nStimSets);
recogByLayer = zeros(numRats,p.nSess,2,max(p.nTrials),p.nStimSets);

for rat = firstRat:lastRat
    for session = 1:p.nSess
        
        fileName = [saveFolder, '/Session', num2str(session), '_Rat', num2str(rat)];
        load(fileName)
        fprintf ('\nloading rat %d, session %d', rat, session);
        
        
        %------------------------------------------------------------------
        % collect all trial-wise selectivity of choice phase
        %------------------------------------------------------------------
        
        recogByLayer(rat,session,1,1:p.nTrials(p.stimCond),:) = p.recogByLayer(:,1,:);
        if p.layer == 1
            recog(rat,p.stimCond,1,1:p.nTrials(p.stimCond),:) = p.recognition;
        else
            recogByLayer(rat,session,2,1:p.nTrials(p.stimCond),:) = p.recogByLayer(:,2,:);
            recog(rat,p.stimCond,2,1:p.nTrials(p.stimCond),:) = p.recognition ;
        end
    end
end

%%

% first, find the average for a rat in a given condition
rats = zeros(numRats,length(p.nTrials),2);
for stimCond = 1:length(p.nTrials)
    rats(:,stimCond,:) = squeeze(mean(squeeze(mean(recog(:,stimCond,:,1:p.nTrials(stimCond),:),4)),3));
    
end
recog_mean = squeeze(mean(rats,1));
recog_sem = squeeze(std(rats,1) ./ sqrt(numRats));

shadedError = zeros(size(recog_mean,1),2,2);
shadedError(:,:,1) = recog_mean - recog_sem;
shadedError(:,:,2) = recog_mean + recog_sem;

% -------------------------------------------------------------------------
% recognition by layer
% -------------------------------------------------------------------------

% sigmoid
rats_byLayer = zeros(numRats,p.nSess,2);
for sess = 1:p.nSess
    
    % fill up with recognition calculated from each layer. Will be some 0s,
    % since PRC was only available on sessions 5-8
    if sess <= length(p.nTrials)
        rats_byLayer(:,sess,1) = squeeze(mean(recogByLayer(:,sess,1,1:p.nTrials(sess)),4));
    elseif sess > length(p.nTrials)
        idx = sess - length(p.nTrials);
        rats_byLayer(:,sess,:) = squeeze(mean(squeeze(mean(recogByLayer(:,sess,:,1:p.nTrials(idx),:),4)),3));
    end
end
recogByLayer_mean = squeeze(mean(rats_byLayer,1));
recogByLayer_sem = squeeze(std(rats_byLayer,1) ./ sqrt(numRats));


%% expt specific plotting parameters

f1 = @(x) sprintf('%d',x);
if expt == 1
    condLabels = cellfun(f1, num2cell(p.delayCycles), 'UniformOutput', false);
elseif expt == 2
    condLabels = cellfun(f1, num2cell(p.nMismatch), 'UniformOutput', false);
elseif expt == 3
    condLabels = {'trial unique', 'repeating'};
end



%%
close all

figs(1) = figure;
hold on
plot(1:size(recog_mean,1),recog_mean(:,1), '--ok', 'MarkerSize',10)
plot(1:size(recog_mean,1),recog_mean(:,2),'-ok','MarkerFaceColor','k', 'MarkerSize',10)
ax = gca;
ax.XTick = 1:size(recog_mean,1);
xlabel('stim condition');
ylabel('recognition');
legend('Lesion','Control')
legend('boxoff')
figs(1).CurrentAxes.YLim = [0,...
    max(recog_mean(:))+max(recog_sem(:))];

saveas(figs(1),[saveFolder, '/recog'],'fig');
saveas(figs(1),[saveFolder, '/recog'],'jpg');


% same as above, but with error
figs(2) = figure;
hold on
plot(1:size(recog_mean,1),recog_mean(:,1), '--ok', 'MarkerSize',10)
plot(1:size(recog_mean,1),recog_mean(:,2),'-ok','MarkerFaceColor','k', 'MarkerSize',10)

plotshaded(1:size(recog_mean,1),[shadedError(:,1,1), shadedError(:,1,2)],'g')
plotshaded(1:size(recog_mean,1),[shadedError(:,2,1), shadedError(:,2,2)],'r')

ax = gca;
ax.XTick = 1:size(recog_mean,1);
xlabel('stim condition');
ylabel('recognition');
legend('Lesion','Control')
legend('boxoff')
figs(2).CurrentAxes.YLim = [0,...
    max(recog_mean(:))+max(recog_sem(:))];

saveas(figs(2),[saveFolder, '/recog_shaded'],'fig');
saveas(figs(2),[saveFolder, '/recog_shaded'],'jpg');



% recognition, sigmoidal
figs(3) = figure;
subplot(1,2,1)
barweb(recog_mean(:,2), recog_sem(:,2), [], {'control'})
xlabel('stim condition');
ylabel('recognition');
legend(condLabels,'Location','best');
figs(3).CurrentAxes.YLim = [0,...
    max(recog_mean(:))+max(recog_sem(:))];

subplot(1,2,2)
barweb(recog_mean(:,1), recog_sem(:,1), [], {'lesion'})
xlabel('stim condition');
ylabel('recognition');
legend(condLabels,'Location','best');
figs(3).CurrentAxes.YLim = [0,...
    max(recog_mean(:))+max(recog_sem(:))];

saveas(figs(3),[saveFolder, '/recog_sigm_barweb'],'fig');
saveas(figs(3),[saveFolder, '/recog_sigm_barweb'],'jpg');


%% recognition by layer

% sigmoid
figs(4) = figure;
subplot(1,2,1)
barweb([recogByLayer_mean(1:size(recog_mean,1),2),recogByLayer_mean(size(recog_mean,1)+1:end,2)]',...
    [recogByLayer_sem(1:size(recog_mean,1),2),recogByLayer_sem(size(recog_mean,1)+1:end,2)]', [], {'PRC, lesion', 'PRC, control'})
xlabel('stim condition');
ylabel('recognition');
legend(condLabels,'Location','best');
figs(4).CurrentAxes.YLim = [0,...
    max(recogByLayer_mean(:))+max(recogByLayer_sem(:))];

subplot(1,2,2)
barweb([recogByLayer_mean(1:size(recog_mean,1),1),recogByLayer_mean(size(recog_mean,1)+1:end,1)]',...
    [recogByLayer_sem(1:size(recog_mean,1),1),recogByLayer_sem(size(recog_mean,1)+1:end,1)]', [], {'caudal, lesion', 'caudal, control'})
xlabel('stim condition');
ylabel('recognition');
legend(condLabels,'Location','best');
figs(4).CurrentAxes.YLim = [0,...
    max(recogByLayer_mean(:))+max(recogByLayer_sem(:))];

saveas(figs(4),[saveFolder, '/recogByLayer_sigm_barweb'],'fig');
saveas(figs(4),[saveFolder, '/recogByLayer_sigm_barweb'],'jpg');


end