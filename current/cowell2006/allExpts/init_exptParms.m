function [ p ] = init_exptParms( expt )
%initializeExptParms -- initializes experimental specific parameters


%% first, initialize parameters shared by every expt
p = struct();
p.expt = expt;

%--------------------------------------------------------------------------
% Architecture of model
%--------------------------------------------------------------------------

% nodes in a row of grid (total grid is nRows x nRows)
p.nRows = 100;
p.nLayers = 2;

p.nGrids_Caudal = 4;
p.nGrids_PRC = 1;
p.nGrids = [p.nGrids_Caudal, p.nGrids_PRC];

p.components = 8; % n elemental features
p.nStimFactors = 4; % nber of levels for each dimension
p.nInputDims_Caudal = p.components/p.nGrids_Caudal;
p.nInputDims_PRC = p.components;
p.nInputDims = [p.nInputDims_Caudal, p.nInputDims_PRC];

%--------------------------------------------------------------------------
% pre-training parms
%--------------------------------------------------------------------------

% cycles to go through pretraining (NOTE: here's a place to fix in
% future projects: don't cycle through a set nber of times, cycle
% through until a set error has been reached.
p.nTrainCycles = 500;


% The bigger A is, the faster ETA decreases, which makes for slower
% learning that occurs during pretraining
p.A = .6;

% The bigger B is, the faster G decreases, and the smaller the
% neighborhood of the winner that gets updated.
p.B = .3;


%--------------------------------------------------------------------------
% experimental parms
%--------------------------------------------------------------------------

% width of gaussian neighborhood learning equation
p.G_exp = .5+10*p.nTrainCycles^-p.B;

% rate of sigmoid activation function
p.k_expt = .08;

% learning rate. amount that winning node moves closer to input during
% expt
p.etaExp = p.nTrainCycles^-p.A;

% encoding cycles per presentation of stimulus
p.nEncodingCycles = 1;

% define how many nodes to include in selectivity calculation
p.sizeOfPeak = 5;

% used for later calculation of city-block distance.
[cols, rows] = meshgrid(1:p.nRows);
p.gridMat = cat(3, rows, cols);


%% experiment specific parameters

if expt == 1 % delay
    
    p.eta_int = p.etaExp;
    
    p.delayCycles = [0,200,400,600,800];
    
    p.nSess = length(p.delayCycles) * 2;
    p.nMismatch = repelem(1,p.nSess / 2);
    p.nMatch = 0;
    p.nStimSets = 4;
    
elseif expt == 2 % listLength
    
    % different number of stimuli list lengths
    p.nMismatch = [1,6,12,18];
    p.nMatch = 0;
    p.nStimSets = 4;
    
    p.nSess = length(p.nMismatch) * p.nLayers;
    p.delayCycles = repelem(0, p.nSess / 2);
    
elseif expt == 3 % tUnique
    
    p.nSess = 4;
    p.eta_int = p.etaExp;
    p.nMismatch = repelem(30,p.nSess / 2);
    p.nMatch = repelem(30,p.nSess / 2);
    
    p.nStimSets = 1;
    
    p.delayCycles = repelem(200,p.nSess / 2);
    
end

p.nTrials = p.nMismatch;



end