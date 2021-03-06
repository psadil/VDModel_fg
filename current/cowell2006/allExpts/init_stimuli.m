function stims = init_stimuli(p)
% createListLengthStimuli - creates stimuli used for an experiment with a
% given rat. These stims are seen in every session. Stims are composed in
% pairs, such that one stim is presented for study while the other remains
% novel. Relative recognition of these two stimuli will eventually be
% compared.

% called by: runSim
% calls: permn

% input:
%   p: experimental structure. Used for many dimension and structure params

% output:
%   stims: array containing the stims that will be input.
%      nTrials x components x 2 x numListLengths x numStimSets.
%      NOTE: 2 refers to two stimuli per pair, one to be trained upon, one
%      that remains novel.


%%

% usful params, mainly to avoid always writing .p
nTotalDims = p.components;
nCaudalGrids = p.nGrids_Caudal;
nDimsCaudal = nTotalDims / nCaudalGrids;
nStimFactors = p.nStimFactors;
nSimpleConj = nStimFactors ^ nDimsCaudal;


% number of features to use for stimuli (in some expts, this is reduced to
% less than all possible simpleConjs
nStimsPerCond = nSimpleConj;


% first contains every possible combination of simple features. rows ==
% total number of stimuli possible. cols == number of simple conjunctions
% attended to by PRC layer.
first = int16(permn(1:nStimsPerCond,p.nInputDims_PRC/p.nInputDims_Caudal));

% rows of first are defined in simple conjunctions. But, we'll need to be
% able to define those simple conjunctions in terms of elemental features.
% So, 'final' will contain a row for every possible stimulus input, where
% the columns are -- not simple conjunctions -- but actual features. As
% such, 'final' is rows == total possible stims, cols == components per
% feature.
final = single(permn([0.05,0.35,0.65,0.95],p.components));


%% define the stimulus

% inner while loop accomplishes the bulk of the task. Stimuli need to be
% generated such that pairs share only nMatchingLA features (typically 0).
% A potential set of study stimuli are pulled (defined as
% 'trials_LA_misMatch1.' Since these are pulled from 'final' every stimulus
% is unique. Those unique stimuli that were used are stored in 'used.'
% Then, for every stim in 'trials_LA_misMatch1,' a potential partner is
% grabbed from 'final' that shares nMatchingLA features. That feature
% declared as 'used' and isn't available for as a novel stim in the
% remaining pairs

% NOTE: although every item is trial unique within a given
% stimSet/stimCond, stimuli are allowed to repeat across sets and
% conditions.


stims.misMatch = zeros(max(p.nTrials),p.components,2,length(p.nMismatch),p.nStimSets);

% make as many stims as stimSets requested
for stimSet = 1:p.nStimSets;
    
    % each stim condition has a different number of stims
    for stimCond = 1:length(p.nMismatch)
        
        % allowance for how many features can be matching in a sample/novel
        % stimulus
        nMatchingLA = 0;
        
        tryAgain = 1;
        while tryAgain
            breakOut = 0;
            
            % pull random sample from 'final'
            trials_LA = reshape(randsample(size(final,1),p.nMismatch(stimCond)*2),...
                [p.nMismatch(stimCond),2]);
            
            % set aside that sample as those stims to be sudied
            trials_LA_misMatch1 = trials_LA(:,1);
            
            % the stims that we've already used
            used = trials_LA(:);
            
            % initialize the novel stims as 0
            trials_LA_misMatch2 = zeros(size(trials_LA_misMatch1));
            
            % grab match for the stimuli
            for stim = 1:p.nMismatch(stimCond)
                if breakOut
                    break
                end
                
                % NOTE: we are probing with 'first' as opposed to 'final'
                % because we just don't want simple conjunctions to repeat
                % across a stim pair. Elemental features can repeat, but
                % just not the 2-d combinations of them.
                probeWith = first(trials_LA_misMatch1(stim),:);
                
                % To avoid from always pulling from the beginning of
                % 'first,' we need a random row index
                row_randIdx = randperm(size(first,1));
%                 row_randIdx2 = randmat(1,size(first,1), size(first,1));
                for row = 1:size(first,1)
                    
                    % don't try this row if we've already used it somewhere
                    if ismember(row_randIdx(row),used)
                        continue
                    end
                    
                    % what are the features defined by 'row'
                    probed = first(row_randIdx(row),:);
                    
                    % assess whether this row shares the required number of
                    % features.
                    if sum(probeWith == probed) == nMatchingLA
                        
                        % If it does, grab this stim from the pre-tmp
                        trials_LA_misMatch2(stim) = row_randIdx(row);
                        
                        % declare that row as used
                        used = [used;row_randIdx(row)]; %#ok<AGROW>
                        
                        % stop searching for a matching stim
                        break % the row loop
                    end
                    
                    % if we've reached the end of all rows
                    if row == size(first,1)
                        breakOut = 1;
                    end
                end
                
                % for when we broke out of the rows
                if breakOut
                    break
                end
                
            end
            
            % for when we've broken out of the stim loop
            if breakOut
                continue
            end
            
            % but, if we've made it this far..
            tryAgain=0;
            
        end
        
        
        %%
        
        % at this point, we have a bunch of features defined in terms of
        % rows. For this final bit, grab the actual stims out of 'final'
        % defined by these row indicies.
        
        % grab all of the trial unique stims for the trial-unique pairs
        stims.misMatch(1:p.nMismatch(stimCond),:,1,stimCond,stimSet) = final(trials_LA_misMatch1,:);
        stims.misMatch(1:p.nMismatch(stimCond),:,2,stimCond,stimSet) = final(trials_LA_misMatch2,:);
        
        % used in expt 3, when there are some matching trials
        if p.nMatch > 0
            
            % grab only the first and second stim generated from the repeating stims
            stims.match = zeros(size(stims.misMatch));
            stims.match(1:p.nMatch(stimCond),:,1,stimCond,stimSet) = final(trials_LA(:,2),:);
            stims.match(1:p.nMatch(stimCond),:,2,stimCond,stimSet) = final(trials_LA(:,2),:);
            
            
        end
        
        
    end
    
end

end


% 
% function A=randmat(m,n,upper)
% % (m x n) matrix, with elements from 1 to upper
% % every row never have repeated elements
% 
% [~, A] = sort(rand(m,upper),2);
% A(:,n+1:end)=[];
% 
% end % randmat


