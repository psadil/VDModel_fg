function dPrimePredictions = create_sim_simplex(firstRat, lastRat, etaExp, G_exp)
% set most of the parameters used for the simulation

global consts
global ROOT

%% Creates a run_sim file for a single, yoked-pair simulation.

%% Set all variables to default values, which can be overwritten subsequently.

if exist('p', 'var')
    clear p
end

p.wd = 'C:\Users\lab\Documents\MATLAB\psadilTesting\simulations\4caudalGrids\simplexGO_cCode';
ROOT = [p.wd, '\'];


p.numRows = 200; %variables with 'num' to denote number are used to define RUN_SIM matrix (and translated to another name before used in simulation)
p.numLayers = 2;

p.numGrids_Caudal = 4;
p.numGrids_PRC = 1;
p.nGrids = [p.numGrids_Caudal, p.numGrids_PRC];
p.maxNumGrids = max(p.nGrids);

p.components = 8;
p.numInputDims_Caudal = p.components/p.numGrids_Caudal;   % Hm...assume that all dimensions are equally sampled across caudal grids...
p.numInputDims_PRC = p.components;
p.numInputDims = [p.numInputDims_Caudal, p.numInputDims_PRC];   % should be back to [15 3 0] (using only the first 15 components)

p.decision_noise = .5e-5;
p.maxFixations = [20, 25]; % should it be based on empirical data? total # saccades on match trials = 20
% first == low ambig, second == high ambig
% should be [20 25]
p.A = .2; % was 0.03 %% Pre-training parameter. The bigger A is, the faster ETA decreases, and the smaller the amount of learning on the weights for all units.
p.A_encoding = .1; % was 2
p.etaExp = etaExp; % was 10, go back to .3?
p.B = .4; %%Pre-training parameter. The bigger B is, the faster G decreases, and the smaller the neighbourhood of the winner that gets updated.
p.G_exp = G_exp; % next, lower to .1?
p.sigma = .1;  % currently, these don't change anything...
p.eta = .01; % currently, these don't change anything...
p.numTrainCycles = 100;
p.numEncodingCycles = [2, 2]; % now better described as encoding cycles per fixation [LA, HA]
p.numFeaturesToSample = [4,4]; % first == lesion, second == control
p.fixn_ratio_lowHigh = [.3, .5]; % now describes ratio of within/total
p.outsideRatio = [.2,.1];
p.sizeOfPeak = 5;
p.fives = 0;
p.variableEncode = 1;
p.diffEncode = 1;
p.numThresh = 1;
p.lengthOfCrit = 6;
p.famil_diff_thresh_start=[.5e-5; .3e-5];
p.setPre = 0;
p.nameOfFolder = consts.nameOfFolder;
% CURRENT: bothPRCrefers to making sure usePRC is true for both
% stimuli
% caudAll refers to exposing caudal grids to stimuli even when usePRC
% is 1 for that stim
% dfenc referns to diffEncode == 1
% 1th => number of thresholds (1)
% nm => sqrt of distance (to find TRUE distance, not just euclidean sq)
%sq => sum of SQUARED / inputs
%sm => sum/inputs
% fxs => fixation ratio corresponds to encoding

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

%     lines = (1:p.numRows)';
%     lines_tmp = lines(:,ones(p.numRows,1));
%     p.idxMat = [repelem(lines,p.numRows),lines_tmp(:)];
%% NEED TO SPECIFY WHETHER POSTERIOR OR PRC, so can grab correct element of thresh_start

p.famil_diff_thresh=[repmat(p.famil_diff_thresh_start(1),1,p.lengthOfCrit); repmat(p.famil_diff_thresh_start(2),1,p.lengthOfCrit)];

fprintf('Creating a new experiment...\n');
p.expt = consts.exptName; %input('\nEnter experiment name: ', 's');
p.totalStimConditions = 2;%input('\nEnter no. of stimulus conditions: ');
p.totalStimSets = 1;%input('\nEnter no. of stimulus sets: ');


%% Some numbers I'll need in this function
%PUT IN p IF IT TURNS OUT I NEED THEM IN OTHER FUNCTIONS
%     numTrials = p.totalStimConditions*p.totalStimSets; %% i.e. number of trials per "rat"
%     totalRepeats = p.totalStimConditions*p.totalTrainingConditions;

%% Save 'p' structure for run_sim.m and write_spreadsheet.m functions
% save SIM_PARAMS.mat p


%% create stimuli for use

[p,stims] = VDcreateStimuli_forC(p);


%% run wrapper for visDiscrimModel


for rat = firstRat:lastRat
    run_sim(rat,p,stims)
end

dPrimePredictions = calcDPrime(firstRat, lastRat, p.nameOfFolder);

% plotFamilDiffs(1, lastRat, p.nameOfFolder);
