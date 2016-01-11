function [] = create_sim_delay(firstRat, lastRat)
%% Creates a run_sim file for a single, yoked-pair simulation.

if exist('p', 'var')
    clear p
end

ratDir = strcat(pwd,'\rats');
if ~exist(ratDir, 'dir'),
    mkdir(ratDir);
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
fprintf('\nSetting new seed by clock.');
rng('shuffle');


parfor rat = firstRat:lastRat
    
    p = struct();
    p.ratNum = rat;
    
    A = .2;
    B = .4;
    train = 100;
    etaExp = train^-A;
    G_exp = .5+10*train^-B;
    k_expt = 1;
    
    p.exptName = '8jan2016';
    p.nameOfFolder = ['eta', num2str(etaExp), '_g', num2str(G_exp), ...
        '_K', num2str(k_expt), '_A', num2str(A) ,'_B', num2str(B), '_20enc20_', num2str(train), ...
        'trnNORAND_','5pk'];
    
    p.dataDir = strcat(pwd, '/graphsAndSession/', p.nameOfFolder);
    if ~exist(p.dataDir, 'dir'),
        mkdir(p.dataDir);
    end
    
    
    p.delayCycles = [0,200,400,600,800];
    p.nSess = length(p.delayCycles) * 2;
    
    % even at 200 rows (possible 200^2 unique stimuli), that's not enough
    % to contain the 16^4 possible part combinations
    
    p.numRows = 200; %variables with 'num' to denote number are used to define RUN_SIM matrix (and translated to another name before used in simulation)
    p.numLayers = 2;
    
    p.numGrids_Caudal = 4;
    p.numGrids_PRC = 1;
    p.nGrids = [p.numGrids_Caudal, p.numGrids_PRC];
    p.maxNumGrids = max(p.nGrids);
    p.nStimFactors = 4; % number of levels for each dimension
    
    p.components = 8;
    p.numInputDims_Caudal = p.components/p.numGrids_Caudal;
    p.numInputDims_PRC = p.components;
    p.numInputDims = [p.numInputDims_Caudal, p.numInputDims_PRC];
    
    p.decision_noise = noise;
    p.maxFixations = [20, 25]; % should it be based on empirical data? total # saccades on match trials = 20
    % first == low ambig, second == high ambig
    p.k_expt = k_expt;
    p.A = A; % was 0.8 %% Pre-training parameter. The bigger A is, the faster ETA decreases, and the smaller the amount of learning on the weights for all units.
    p.etaExp = etaExp;
    p.B = B; %was .8 Pre-training parameter. The bigger B is, the faster G decreases, and the smaller the neighbourhood of the winner that gets updated.
    p.G_exp = G_exp;
    p.numTrainCycles = [train, train];
    p.numEncodingCycles = [20, 20]; % now better described as encoding cycles per fixation [LA, HA]
    p.numFeaturesToSample = [p.numGrids_Caudal,p.numGrids_Caudal]; % first == lesion, second == control
    p.outsideRatio = [.2,.1];
    p.sizeOfPeak = 5;
    p.filtPeak = p.numRows+1;
    p.setPre = 0;
    p.nameOfFolder = p.nameOfFolder;
    
    p.totalInpDimsConditions = 2; %%Once with small DIMS for caudal, once each with small and large DIMS for intact
    
    p.expt = 'null';
    p.nMismatch = 4;
    p.nMatch = 0;
    
    p.nTrials = p.nMismatch+p.nMatch;
    
    %%Make the grid_matrix for calculating city-block distance later.
    [cols, rows] = meshgrid(1:p.numRows);
    p.gridMat = cat(3, rows, cols);
    fprintf('Creating a new experiment...\n');
    p.expt = p.exptName; %input('\nEnter experiment name: ', 's');
    
    
    %% create stimuli for use
        
    [~] = run_sim(p)
    
end

% plotFamilDiffs(1, lastRat, consts.nameOfFolder);
