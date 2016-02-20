function [weights, stopSampling, p] = VD_compare_stimuli(stimPair, weights, p, trial)
%VD_compare_stimuli_controllOfFixation called by visDiscrimModel.m

% want this function to: decide which features of the stimulus to present


% 11/2/14 ps in stick && fixation if statement, added a line to clear
%sample_feat before changing them to 1

% 5/18/15 ps
% commented out all assignments of activations (in an effort to speed up
% processing), since not looking at them directly right now.

%% storage variables
prevStimSelec = zeros(p.layer,p.numGrids_Caudal);
% prevInitialSelec = zeros(1,p.numGrids_Caudal);


% pktot.prevStimFin_act_peak = zeros(p.layer,1);
% pktot.prevStimFin_act_total = zeros(p.layer,1);
% pktot.prevStimInit_act_peak = zeros(p.layer,1);
% pktot.prevStimInit_act_total = zeros(p.layer,1);
%
% pktot.init_act_peak = zeros(p.layer,1);
% pktot.init_act_total = zeros(p.layer,1);
% pktot.fin_act_peak = zeros(p.layer,1);
% pktot.fin_act_total = zeros(p.layer,1);

% prevStimSelec = zeros(1,p.numGrids_Caudal);
% prevStimSelec = zeros(1,p.numGrids_Caudal);



% fixations = 0;
stim = 1;
first_stim_sampled = 1;
stopSampling = 0;
comparison = 0;
% p.fixations_total(trial) = 0;

%% preparing input stimulus for processing

stimPair = stimPair(1:p.components,:);
keepSampling = 0;
features_sampled_prev = zeros(p.numGrids_Caudal,1);

%%
while ((p.fixations(trial) < p.maxFix) && stopSampling == 0) || (keepSampling && stopSampling == 0)  % stop when enough evidence accumulated or maxFix saccades made
    
    comparison = comparison + 1;
    sample_feat = zeros(p.numGrids_Caudal,1);
    avail_feat = randperm(p.numGrids_Caudal);
    sample_feat(avail_feat(1:p.nFeaturesToSample)) = 1; %sample features (at random)
    p.fixations(trial) = p.fixations(trial) + 1; %% total fixations across both stimuli
    
    if ~first_stim_sampled %force at least one feature in newly sampled stim to
        % be compared with features samped from prev
        % stim.
        while ~any(sample_feat(features_sampled_prev))
            sample_feat = zeros(p.numGrids_Caudal,1);
            avail_feat = randperm(p.numGrids_Caudal);
            sample_feat(avail_feat(1:p.nFeaturesToSample)) = 1; %sample features (at random)
        end
    end
    
    stick = 1;
    while stick == 1,
        %------------------------------------------------------------------
        % decide whether to stick or switch stimulus (using fixation ratio)
        %------------------------------------------------------------------
        
        stick_switch = rand;
        %         stickProb = p.fixn_ratio/(p.fixn_ratio+1);
        if stick_switch <= p.fixn_ratio
            stick = 1;
        else %if stick_switch >= stickProb
            stick = 0;
            continue;
        end
        
        %------------------------------------------------------------------
        %if stick, sample more features
        %------------------------------------------------------------------
        
        if stick %&& (p.fixations(trial) <= p.maxFix),
            % sample 3 features on each fixation (note: remove one already-sampled feature, if 1st or 2nd fixation on this stim)
            if length(avail_feat) > p.nFeaturesToSample, % make sure that enough features are left to sample from
                avail_feat = avail_feat(2:end);
                %NOTE: all features can only be sampled once (features are being totted up over fixations and sampled at the end)
                p.fixations(trial) = p.fixations(trial) + 1;
                avail_feat = avail_feat(randperm(length(avail_feat)));
                sample_feat(avail_feat(1:p.nFeaturesToSample)) = 1; %sample features
            else
                stick = 0;
            end
        end
    end
    
    p.sample_feat(trial,:) = sample_feat;
    p.featsSampedByComparison(stim,trial, comparison) = sum(sample_feat);
    
    %     % incriment total fixation counter (used to shrink learning parameter)
    %     p.fixations_total = p.fixations_total+fixations;
    
    % Incorporate all evidence together into stimulus presentation; grab stimulus, sample the specified features, fill remaining inputs with 0.5
    features_sampled = find(sample_feat==1);
    
    %next few lines translate the sampled features into correct input dimensions in the 15 element input vector
    inputs = (features_sampled-1)*3+1;
    inputs = cat(1,inputs, inputs+1, inputs+2);
    nonInputs = ones(p.components,1);
    nonInputs(inputs)=0;
    stimulus = stimPair(:,stim);
    stimulus(nonInputs==1)=0.5;
    
    %----------------------------------------------------------------------
    % Expose network to this stimulus, calculate selectivity, and update weights
    %----------------------------------------------------------------------
    
    %     pktot.fin_act_peak = zeros(p.numLayers,max(p.numGrids));
    %     pktot.fin_act_total = zeros(p.numLayers,max(p.numGrids));
    %     pktot.init_act_peak = zeros(p.numLayers,max(p.numGrids));
    %     pktot.init_act_total = zeros(p.numLayers,max(p.numGrids));
    %     pktot.prevStimFin_act_peak = zeros();
    
    
    %     weights = zeros(p.numLayers,p.nRows,p.nRows,p.numInputDims(p.layer),max(p.numGrids));
    %     [weights, selectivity, initial_selec, p, ~, usePRC, acts, initial_acts] = VD_present_stimulus(stimulus, weights, p, features_sampled, trial, ~);
    
    
    % Function called by VD_present_stimulus.m. Presents the network with the two stimuli on this trial.
    % Choose whichever layer demonstrates higher selectivity
    
    % present chosen features of stimulus to all layers. pick the layer with
    % the highest selectivity, and output that selectivity
    
    % 5/18/15 ps
    % commented out all assignments of activations (in an effort to speed up
    % processing), since not looking at them directly right now.
    
    inp_mat = repmat(reshape(stim,[1 1 length(stim)]), [p.nRows p.nRows 1]);
    
    activations = zeros(p.layer,p.nRows,p.nRows,p.maxNumGrids); % 5 grids (only 1 stimulus)
    initial_acts = zeros(p.layer,p.nRows,p.nRows,p.maxNumGrids);
    selec = zeros(p.numLayers,max(p.numGrids));
    initial_selec = zeros(p.numLayers,max(p.numGrids));
    
    acts = zeros(p.nRows,p.nRows);
    % pktot.fin_act_peak = zeros(p.numLayers,max(p.numGrids));
    % pktot.fin_act_total = zeros(p.numLayers,max(p.numGrids));
    % pktot.init_act_peak = zeros(p.numLayers,max(p.numGrids));
    % pktot.init_act_total = zeros(p.numLayers,max(p.numGrids));
    % winact = zeros(p.numLayers,p.maxNumGrids,2);  % activation in each grid in x,y coordinates?
    
    row_dist_mat = zeros(p.numRows,p.numRows,2);
    col_dist_mat = zeros(p.numRows,p.numRows,2);
    selectivity = 0;
    act_peak = 0;
    act_total = 0;
    
    % only use PRC layer if available and enough features were sampled
    if (p.layer == 2) && (length(features_sampled) == p.numGrids_Caudal)
        2;
        usePRC = 1;
    else
        usePRC = 0;
    end
    
    %% Expose network to stimuli and update weights
    % switchRatio = 0;
    
    % fix = 0;
    % while switchRatio < p.fixn_ratio_lowHigh(p.stimCond)
    %
    %     % if fixation wasn't outside of stimulus, incriment fixations
    %     % for each encoding cycle
    %     p.fixations(trial) = p.fixations(trial) + 1; %% total fixations across both stimuli
    %
    for layer=1:p.layer
        
        firstFeatureToCheck=(1:p.numInputDims(layer):p.nGrids(layer)*p.numInputDims(layer));
        lastFeatureToCheck = firstFeatureToCheck+p.numInputDims(layer)-1;
        
        
        for grid = 1:p.nGrids(layer),
            
            input_mat=zeros(p.nRows,p.nRows,p.numInputDims(layer));
            
            % should end with a (:,:,15) input_mat for PRC layer that checks features 1:15, and a (:,:,3) input_mat for caudal, where each 4th-dim checks three features
            input_mat(:,:,:)=inp_mat(:,:,(firstFeatureToCheck(grid):lastFeatureToCheck(grid)));
            
            % put the variable 'weights' into the format previously accepted by the model.
            weights_child = weights(layer,:,:,1:p.numInputDims(layer),grid);
            weights_child = squeeze(weights_child);
            
            % if no features that this grid pays attention to were sampled,
            % or if dealing with PRC but 5 features weren't sampled, skip
            % presenting
            %         if (layer==1 && (~any(features_sampled==grid) || usePRC)) || (layer==2 && ~usePRC)
            if ~p.fives
                if (layer==1 && (~any(features_sampled==grid))) || (layer==2 && ~usePRC)
                    if layer ==2
                        2;
                    end
                    
                    continue
                end
            end
            
            nEncodCycles = p.nEncodCycles;
            if p.variableEncode
                stick_switch = rand;
                while stick_switch < p.fixn_ratio_lowHigh(p.stimCond)
                    nEncodCycles = nEncodCycles+p.nEncodCycles;
                    p.fixations(trial) = p.fixations(trial) + 1; %% total fixations across both stimuli
                    stick_switch = rand;
                end
            end
            
            
            %------------------------------------------------------------------
            % Find winning node
            %--------------------------------------------------------------
            [win_row, win_col, dist_mat] = findWinningNode(weights_child, input_mat(:,:,:), p.numInputDims(layer));
            
            for cycle=1:nEncodCycles
                
                
                %             p.winning(layer,grid,trial,1:2) = [win_row, win_col];
                
                %--------------------------------------------------------------
                %Calculate each unit's distance from winner and activation
                %--------------------------------------------------------------
                
                
                %             [f, acts, selectivity, p, act_peak, act_total] = VD_calc_selectivity_fast(win_row, win_col, dist_mat, p, p.numInputDims(layer), trial, layer);
                %%% Calculate city-block distance from winner in grid, with wraparound
                
                
                %%find distance of each unit from winner (using gridMat, which stores the position of each unit in the grid)
                %%create a matrix with a slice for each of the two potential minimum distances for rows and cols
                row_dist_mat(:,:,1) = abs(p.gridMat(:,:,1) - win_row);
                row_dist_mat(:,:,2) = p.nRows - abs(p.gridMat(:,:,1) - win_row);
                col_dist_mat(:,:,1) = abs(p.gridMat(:,:,2) - win_col);
                col_dist_mat(:,:,2) = p.nRows - abs(p.gridMat(:,:,2) - win_col);
                
                %%find the minimum of the two values for row and for col
                min_row_dist_mat = min(row_dist_mat,[],3);
                min_col_dist_mat = min(col_dist_mat,[],3);
                %%Sum the two minimum distances to get the city_block distance
                grid_dist = min_row_dist_mat + min_col_dist_mat;
                
                % find how far away each node is from the winner
                % grid_idx = pdist2(p.idxMat,[win_row,win_col],'cityblock');
                % grid_dist = reshape(grid_idx,[p.numRows,p.numRows]);
                % grid_dist(grid_dist>p.numRows) = grid_dist(grid_dist>p.numRows)-p.numRows;
                
                f_1dim = p.etaExp*exp(-(grid_dist/p.G_exp).^2);
                
                % f_out=zeros(p.numRows,p.numRows,nInpDims);
                f = repmat(f_1dim,[1,1,p.numInputDims(layer)]);
                
                acts = log(ones(p.nRows,p.nRows)./dist_mat);   % create this ln thing that deals with distance of nodes away from original stimulus vector
                %                                                   (not winning node, because this is used for 'recognition' ratio ((S_samp-S_nov)/(S_samp+S_nov)))
                acts = 1./(1+exp(-1*acts)); %squashing function   (why squash?)
                %may make sense to go back to version where we 'cap' the distance (because then the dynamic range of
                %outputs starts at 0 rather than 0.5)
                
                winners = zeros(p.sizeOfPeak,2);
                winners(1,:) = [win_row win_col];
                %city block distance 1 neighbours
                winners(2,:) = [win_row win_col+1];
                winners(3,:) = [win_row win_col-1];
                winners(4,:) = [win_row+1 win_col];
                winners(5,:) = [win_row-1 win_col];
                %city block distance 2 neighbours
                winners(6,:) = [win_row+1 win_col+1];
                winners(7,:) = [win_row+1 win_col-1];
                winners(8,:) = [win_row-1 win_col-1];
                winners(9,:) = [win_row-1 win_col+1];
                %city block distance 2-in-a-line neighbours
                winners(10,:) = [win_row win_col+2];
                winners(11,:) = [win_row win_col-2];
                winners(12,:) = [win_row+2 win_col];
                winners(13,:) = [win_row-2 win_col];
                %city block distance 3 neighbours
                winners(14,:) = [win_row+1 win_col+2];
                winners(15,:) = [win_row+1 win_col-2];
                winners(16,:) = [win_row-1 win_col+2];
                winners(17,:) = [win_row-1 win_col-2];
                winners(18,:) = [win_row+2 win_col+1];
                winners(19,:) = [win_row+2 win_col-1];
                winners(20,:) = [win_row-2 win_col+1];
                winners(21,:) = [win_row-2 win_col-1];
                %city block distance 3-in-a-line neighbours
                winners(22,:) = [win_row win_col+3];
                winners(23,:) = [win_row win_col-3];
                winners(24,:) = [win_row+3 win_col];
                winners(25,:) = [win_row-3 win_col];
                
                for win_unit = 1:p.sizeOfPeak %% however many winners in peak
                    if winners(win_unit,1) > p.nRows,
                        winners(win_unit,1) = winners(win_unit,1) - p.nRows;
                    elseif winners(win_unit,1) <= 0,
                        winners(win_unit,1) = winners(win_unit,1) + p.nRows;
                    end
                    if winners(win_unit,2) > p.nRows,
                        winners(win_unit,2) = winners(win_unit,2) - p.nRows;
                    elseif winners(win_unit,2) <= 0,
                        winners(win_unit,2) = winners(win_unit,2) + p.nRows;
                    end
                end
                
                % if any(isnan(act_out))
                %    act_out(isnan(act_out))=0;
                % end
                
                act_peak = 0;
                for unit = 1:p.sizeOfPeak
                    act_peak = act_peak + acts(winners(unit,1), winners(unit,2));
                end
                
                % p.act_peak(trial,layer) = act_peak;
                
                act_total = sum(sum(acts));
                selectivity = act_peak/act_total;
                
                %%
                if cycle==1,  %need to compare last set of weights of old grid to
                    initial_selec(layer,grid) = selectivity;
%                     pktot.init_act_peak(layer,grid) = act_peak;
%                     pktot.init_act_total(layer,grid) = act_total;
                    
                    % initial weights of new grid.
                    initial_acts(layer,:,:,grid) = acts;
                    
                end
                
                
                %%% Update Weights
                weights_child = weights_child + f.*(input_mat(:,:,:)-weights_child);  % update based on spire around winning node
                
                
            end %%% Go to next cycle (if switchRatio is low enough)
            weights(layer,:,:,1:p.numInputDims(layer),grid) = weights_child; %% Overwrite weight values in the orignial W matrix, for this grid.
            activations(layer,:,:,grid) = acts; % use activations as calculated AFTER final weight update
            selec(layer,grid) = selectivity;
%             pktot.fin_act_peak(layer,grid) = act_peak;
%             pktot.fin_act_total(layer,grid) = act_total;
            
        end  % end of loop for each grid
        
    end % end of layer loop
    
    
    
    
    
    
    
    
    
    
    %%
    % after completing within-stimulus fixations, some fixations can land,
    % not on the other stimulus, but outside of both
    nothingRatio = rand;
    if nothingRatio > p.outsideRatio(p.stimCond)
        p.fixations(trial) = p.fixations(trial) + 1; %% total fixations across both stimuli
    end
    
    if first_stim_sampled == 0 %|| (first_stim_sampled == 1 && p.fixations(trial) >= p.maxFix)% to indicate that we have another stim's worth of activations
        %         p.fixations(trial) = fixations;
        
        
        %------------------------------------------------------------------
        % look at grids
        %------------------------------------------------------------------
        
        %         plotTempActs(prevStimActs, initial_acts, p.layer)
        
        %------------------------------------------------------------------
        % complie structure for determining mismatch
        %------------------------------------------------------------------
        
        judging.selectivity_new = selectivity;
        judging.selectivity_prev = prevStimSelec;
        judging.featuresSampled_new = features_sampled;
        judging.featuresSampled_prev = features_sampled_prev;
        %         judging.activations_new = activations;
        %         judging.activations_prev = prevStimActs;
        %         judging.initial_acts = initial_acts;
        judging.initial_selec = initial_selec;
        
        % storing whether PRC is used
        % second row is always new stim
        p.usePRC(stim,trial) = usePRC;
        
        %%
        %------------------------------------------------------------------
        % determine which layer is most selective
        %------------------------------------------------------------------
        %         [stopSampling, p, whichCaudal] = determineMisMatch(judging, p, trial);
        stopSampling = 0;
        whichCaudal = 0;
        % compares the difference in the maximumly selective layer of the network
        % to the current and previous stim to a funning familiarity difference
        
        % might be called again if not enough evidence has been accrued.
        
        %% Gather selectivity
        
        %% storage variables
        
        meanSelectivity_caudal_new = 0;
        
        %%
        %--------------------------------------------------------------------------
        % Decide which features were compared. Only necessary for caudal layer (or)
        % any layer that has more than 1 grid.
        %--------------------------------------------------------------------------
        
        
        featuresToCompare = zeros(1,p.numGrids_Caudal);
        for feat = 1:p.numGrids_Caudal
            if any(judging.featuresSampled_new==feat) && any(judging.featuresSampled_prev==feat)
                featuresToCompare(feat) = 1;
            end
        end
        if ~sum(featuresToCompare);
            return;
        end
        p.comparedFeat(trial,:) = featuresToCompare;
        
        %--------------------------------------------------------------------------
        % determine which layer is most selective for each stimulus
        %--------------------------------------------------------------------------
        
        %first, look at most recent stim
        for layer_new = 1:p.numLayers
            if layer_new == 1
                %         p.meanSelectivity_caudal_new(trial,:) = judging.initial_selec(layer_new,:).*featuresToCompare; % only look at layers for which features were sampled
                meanSelectivity_caudal_new = judging.initial_selec(layer_new,:).*featuresToCompare;
                
                
            elseif layer_new == 2 && (sum(p.usePRC(:,trial))==2)
                
                % when plotting, need to make sure that the p.usePRC==(0 || 1) cases aren't
                % looked at...
                p.meanSelectivity_PRC_new(trial,:) = judging.initial_selec(layer_new,1);
                
                
            end
        end
        
        
        %now, look at prevoius stim
        for layer_prev = 1:p.numLayers
            if layer_prev == 1
                %         p.meanSelectivity_caudal_prev(trial,:) = judging.selectivity_prev(layer_prev,:).*featuresToCompare; % only look at grids for which features were sampled
                meanSelectivity_caudal_prev = judging.selectivity_prev(layer_prev,:).*featuresToCompare;
                
                familDiff_caudal = abs(meanSelectivity_caudal_prev - meanSelectivity_caudal_new);
                
                % determine which grid in caudal layer would be used for judgement
                whichCaudal = find(familDiff_caudal==max(familDiff_caudal));
                
                %                 if length(whichCaudal)>1
                whichCaudal = whichCaudal(1);
                %                 end
                
                if isempty(whichCaudal)
                    2;
                end
                
                p.meanSelectivity_caudal_prev(trial) = meanSelectivity_caudal_prev(whichCaudal);
                p.meanSelectivity_caudal_new(trial) = meanSelectivity_caudal_new(whichCaudal);
                
                p.familDiff_caudal(trial) = familDiff_caudal(whichCaudal);
                
            elseif (layer_prev == 2) && (all(p.usePRC(:,trial)))
                p.meanSelectivity_PRC_prev(trial) = judging.selectivity_prev(layer_prev,1);
                p.familDiff_PRC(trial) = abs(p.meanSelectivity_PRC_prev(trial) - p.meanSelectivity_PRC_new(trial));
                
            end
        end
        
        
        if ~p.diffEncode
            
            % only use PRC layer if p.numGrids_Caudal features were sampled for both stimuli
            if (all(p.usePRC(:,trial))) && (p.which_gp_layer==2)
                familDiff = p.familDiff_PRC(trial);
                thresh = p.famil_diff_thresh(p.numThresh,:);
            else
                familDiff = p.familDiff_caudal(trial);
                thresh = p.famil_diff_thresh(1,:);
            end
            
        else
            
            if p.layer == 2
                
                familDiffs_temp = [p.familDiff_caudal(trial) - mean(p.famil_diff_thresh(1,:)), p.familDiff_PRC(trial) - mean(p.famil_diff_thresh(p.numThresh,:))];
                [~, whichFamilDiff] = max(familDiffs_temp);
                
                if whichFamilDiff == 2
                    familDiff = p.familDiff_PRC(trial);
                    thresh = p.famil_diff_thresh(p.numThresh,:);
                else
                    familDiff = p.familDiff_caudal(trial);
                    thresh = p.famil_diff_thresh(1,:);
                    p.usePRC(:,trial) = 0;
                end
                
            else
                familDiff = p.familDiff_caudal(trial);
                thresh = p.famil_diff_thresh(1,:);
                p.usePRC(:,trial) = 0;
                
            end
            
        end
        %% compare differences in selectivity with threshold
        % p.famil_difference_most(trial) = abs(mostSelectiveLayer_new - mostSelectiveLayer_prev);% /(mostSelectiveLayer_new+mostSelectiveLayer_prev); %+ (rand*2-1)*p.decision_noise;
        % familDiff = p.familDiff_max(trial);
        % noise = p.decision_noise.*rand;
        noise = p.decision_noise;
        p.familDiff_withNoise(trial) = (familDiff-noise)+(familDiff-(familDiff-noise)).*rand; %familDiff + noise;%  ((rand(1,5)*2-1)*p.decision_noise);
        % p.familDiff_withNoise(trial) = familDiff;
        % thresh = (thresh-noise)+(thresh-(thresh-noise)).*rand;
        
        if any(p.familDiff_withNoise(trial) > (mean(thresh)))
            % we have misMatching feature! So, stop sampling
            stopSampling = 1;                  % threshold is running av. of last 6 trials famil differences
            
        else
            % no evidence for misMatch of stimuli
            stopSampling = 0;
            
        end
        
        % temporarily commenting out to see if caudal layre can be same in lesion
        % and control
        
        % record the famil diff of the grids that looked at that stimuli
        % if (p.layer == 2) && (all(p.usePRC(:,trial))) % if PRC layer not available, or not enough features were sampled...
        %     p.famil_difference(trial) = familDiff;
        % else
        %     %     because sometimes two grids can match, need to select just one of
        %     %     them
        %     famil_diff_temp = familDiff(whichCaudal);
        %     p.famil_difference(trial) = famil_diff_temp(1);
        % end
        
        p.famil_difference(trial) = p.familDiff_withNoise(trial);
        
        
        
        
        %%
        % save peak and total activation for later plotting
        %         [p] = save_peakTotActs(pktot, p, trial, whichCaudal);
        
        
        if p.layer == 2
            2;
        end
        
        %         if (p.layer == 2) && (all(p.usePRC(:,trial)))
        %             % note: caudal is layer 1 (first index), PRC layer 2 (first index)
        %             p.prevStimFin_act_peak(2,trial) = pktot.prevStimFin_act_peak(2,1);
        %             p.prevStimFin_act_total(2,trial) = pktot.prevStimFin_act_total(2,1);
        %
        %             % don't know how to care about previous stim's initial acts yet
        %             p.prevStimInit_act_peak(2,trial) = pktot.prevStimInit_act_peak(2,1);
        %             p.prevStimInit_act_total(2,trial) = pktot.prevStimInit_act_total(2,1);
        %
        %             % look at new stimuli (which has final different from initial only
        %             % in trials that were determined to be matching
        %             p.newStimInit_act_peak(2,trial) = pktot.init_act_peak(2,1);
        %             p.newStimInit_act_total(2,trial) = pktot.init_act_total(2,1);
        %
        %             % look at new stimuli (which has final different from initial only
        %             % in trials that were determined to be matching
        %             p.newStimFin_act_peak(2,trial) = pktot.fin_act_peak(2,1);
        %             p.newStimFin_act_total(2,trial) = pktot.fin_act_total(2,1);
        %
        %         else
        %             % note: caudal is layer 1 (first index), PRC layer 2 (first index)
        %             p.prevStimFin_act_peak(1,trial) = pktot.prevStimFin_act_peak(1,whichCaudal);
        %             p.prevStimFin_act_total(1,trial) = pktot.prevStimFin_act_total(1,whichCaudal);
        %
        %             % don't know how to care about previous stim's initial acts yet
        %             p.prevStimInit_act_peak(1,trial) = pktot.prevStimInit_act_peak(1,whichCaudal);
        %             p.prevStimInit_act_total(1,trial) = pktot.prevStimInit_act_total(1,whichCaudal);
        %
        %             % look at new stimuli (which has final different from initial only
        %             % in trials that were determined to be matching
        %             p.newStimInit_act_peak(1,trial) = pktot.init_act_peak(1,whichCaudal);
        %             p.newStimInit_act_total(1,trial) = pktot.init_act_total(1,whichCaudal);
        %
        %             % look at new stimuli (which has final different from initial only
        %             % in trials that were determined to be matching
        %             p.newStimFin_act_peak(1,trial) = pktot.fin_act_peak(1,whichCaudal);
        %             p.newStimFin_act_total(1,trial) = pktot.fin_act_total(1,whichCaudal);
        %         end
        
        
        
        
        
        
        %%
        %------------------------------------------------------------------
        %stop sampling if evidence of mismatch acquired
        %------------------------------------------------------------------
        if stopSampling==1,
            continue;
        end
        
    end
    
    
    %----------------------------------------------------------------------
    %save weights and activations from this stimulus
    %----------------------------------------------------------------------
    
    features_sampled_prev = features_sampled;
    prevStimSelec = selectivity;
    %     prevInitialSelec = initial_selec;
    %     prevInitialActs = initial_acts;
    %     prev_mean_act = mean_act;
    %     pktot.prevStimFin_act_peak = pktot.fin_act_peak;
    %     pktot.prevStimFin_act_total = pktot.fin_act_total;
    %     pktot.prevStimInit_act_peak = pktot.init_act_peak;
    %     pktot.prevStimInit_act_total = pktot.init_act_total;
    
    %     prevStimActs = acts;
    
    % first row is always previous stim
    p.usePRC(stim,trial) = usePRC;
    
    
    %----------------------------------------------------------------------
    %switch to other stim (last thing you do)
    %----------------------------------------------------------------------
    
    stim = (stim+2)/stim - 1; %1 goes to 2, 2 goes to 1
    if first_stim_sampled == 1 && p.fixations(trial) >= p.maxFix
        keepSampling = 1;
    elseif first_stim_sampled == 0
        keepSampling = 0;
    end
    first_stim_sampled = 0; %to indicate that we are no longer on the first stim being sampled (so a comparison should be made from now on)
    
end