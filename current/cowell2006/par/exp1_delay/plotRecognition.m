function [] = plotRecognition(firstRat, lastRat, folderName)
% analyze recognition

% now called directly from create_sim

% currently, taking the maximum familiarity differences at each trial
% produces the set of most desirable results
% folderName must be a string (without / on either side)

% folderName = '1encod_p6Ratio1p2_1sampVar5_0noise_100train_20Max25_5peak_100rows_A01_B4_forceSamp_NOshrinkingLearn_etaExp5p_Gexpp8_stim4Diff_NOfives';

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

%%
close all

figure
hold on
plot(1:5,meanRecog(:,1), '--ok', 'MarkerSize',10)
plot(1:5,meanRecog(:,2),'-ok','MarkerFaceColor','k', 'MarkerSize',10)
ax = gca;
ax.XTick = 1:5;
legend('Lesion','Control')
legend('boxoff')



end

