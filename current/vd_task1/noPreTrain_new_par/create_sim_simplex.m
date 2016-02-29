% function dPrimePredictions = create_sim_simplex(firstRat, lastRat, etaExp, G_exp)

function [dPrimePredictions] = create_sim_simplex(firstRat, lastRat, parms, nOfFolder)

if exist('p', 'var')
    clear p
end

outerDir = strcat(pwd, '/graphsAndSession');
if ~exist(outerDir, 'dir'),
    mkdir(outerDir);
end

% for rat = firstRat:lastRat
%     ratDir = strcat(pwd,'/rats/rat',num2str(rat));
%     if ~exist(ratDir, 'dir'),
%         mkdir(ratDir);
%     end
% end
% rng('shuffle');





for rat = firstRat:lastRat
    
    p = struct();
    p.ratNum = rat;
    
   
    A = [.2,.2];
    B = [.1,.1];
    train = 500;
    eta = parms;  
    % g = .5+10*train^-B;
    k = .25;
    leng = 6;
    startCrit = eta/1000; % go through ~ 20 eta in 1 fixation (because 20 encoding cycles)
    % so, set criterion to be 1/4 of that (20/4)
    noise = startCrit*.75; 
    % sigma2 = parms(2)^2;
    sigma2 = 1;
    g = sigma2;
    % current goal: get pk selectivity to saturate at 5
   
    
    startParms = [ eta , g, k ];
    
    etaExp = startParms(1);
    G_exp = startParms(2);
    k_expt = startParms(3);
    
    p.exptName = '20feb2016';

    p.nameOfFolder = nOfFolder;
%     p.nameOfFolder = ['eta', num2str(eta), '_g', num2str(g), ...
%         '_K', num2str(k), '_A', num2str(A) ,'_B', num2str(B), '_20enc20_', ...
%         '5pk_20Fix_', num2str(noise),'nois_', num2str(startCrit), 'stCrt_',num2str(leng), '_0reload1',...
%         'altTanh'];
    
    p.nSess = 4;
    p.sigma2 = sigma2;
    p.numRows = 200; %variables with 'num' to denote number are used to define RUN_SIM matrix (and translated to another name before used in simulation)
    p.numLayers = 2;
    
    p.numGrids_Caudal = 4;
    p.numGrids_PRC = 1;
    p.nGrids = [p.numGrids_Caudal, p.numGrids_PRC];
    p.maxNumGrids = max(p.nGrids);
    p.nStimFactors = 4; % number of levels for each dimension
    
    p.components = 8;
    p.numInputDims_Caudal = p.components/p.numGrids_Caudal;   % Hm...assume that all dimensions are equally sampled across caudal grids...
    p.numInputDims_PRC = p.components;
    p.numInputDims = [p.numInputDims_Caudal,  p.numInputDims_PRC];   % should be back to [15 3 0] (using only the first 15 components)
    p.nDimReps=1;
    
    p.decision_noise = noise;
    p.maxFixations = [20, 25]; % should it be based on empirical data? total # saccades on match trials = 20
    p.k_expt = k_expt;
    p.A = A; % was 0.8 %% Pre-training parameter. The bigger A is, the faster ETA decreases, and the smaller the amount of learning on the weights for all units.
    p.a = 1.7159;
    p.b = 2/3;
    p.etaExp = etaExp;
    p.B = B; %was .8 Pre-training parameter. The bigger B is, the faster G decreases, and the smaller the neighbourhood of the winner that gets updated.
    p.G_exp = G_exp;
    p.numTrainCycles = [train, train];
    p.numEncodingCycles = [1, 1]; % now better described as encoding cycles per fixation [LA, HA]
    p.numFeaturesToSample = [p.numGrids_Caudal,p.numGrids_Caudal]; % first == lesion, second == control
    p.fixn_ratio_lowHigh = [.3, .5]; % now describes ratio of within/total
    p.outsideRatio = [.2,.1];
    p.sizeOfPeak = 13;
    p.filtPeak = p.numRows+1;
    p.fives = 0;
    p.variableEncode = 1;
    p.diffEncode = 1;
    p.numThresh = 2;
    p.lengthOfCrit = leng;
    p.famil_diff_thresh_start=[startCrit; startCrit];
    p.setPre = 0;
    p.nameOfFolder = p.nameOfFolder;
    
    
    p.totalInpDimsConditions = 2; %%Once with small DIMS for caudal, once each with small and large DIMS for intact
    %% Set the numb er of conditions to be 1 by default, for all conditions except INPUT_DIMS.
    p.totalTrainingConditions = 1; %number of different 'pretraining phase' lengths to run
    p.totalStimConditions = 1;
    p.totalStimSets = 1;
    p.totalSimulations = 1;
    p.totalEncodingConditions = 1;
    p.expt = 'null'; %% For when running a single session
    p.nMismatch = 36; % for now, define here the number of each trial type for use in actual simulations (i.e., cannot vary in RUN_SIM matrix)
    p.nMatch = 36;
    
    p.nTrials = p.nMismatch+p.nMatch;
    
    %%Make the grid_matrix for calculating city-block distance later.
    [cols, rows] = meshgrid(1:p.numRows);
    p.gridMat = cat(3, rows, cols);
    %% NEED TO SPECIFY WHETHER POSTERIOR OR PRC, so can grab correct element of thresh_start
    
    p.famil_diff_thresh=[repmat(p.famil_diff_thresh_start(1),1,p.lengthOfCrit); repmat(p.famil_diff_thresh_start(2),1,p.lengthOfCrit)];
    % p.famil_diff_thresh2=ones(1,3)*p.famil_diff_thresh_start(2);
    % p.famil_diff_thresh=[p.famil_diff_thresh1, p.famil_diff_thresh2];
    % p.famil_diff_thresh=p.famil_diff_thresh(randperm(length(p.famil_diff_thresh)));
    
    
    p.comparedFeat = zeros(p.nTrials, p.numGrids_Caudal);
    
    fprintf('Creating a new experiment...\n');
    p.expt = p.exptName; %input('\nEnter experiment name: ', 's');
    p.totalStimConditions = 2;%input('\nEnter no. of stimulus conditions: ');
    p.totalStimSets = 1;%input('\nEnter no. of stimulus sets: ');
    
    
    %% create stimuli for use
    
    %
    run_sim(p)
    
end

% dPrimePredictions = calcDPrime(1,lastRat, nOfFolder);

plotFamilDiffs(1, lastRat, nOfFolder,0);
