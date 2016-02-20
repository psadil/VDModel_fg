function run_sim(p)

% run_sim - runs the simulation defined in the RUN_SIM.mat file

% ROOT = 'C:/Users/rcowell/Documents/Research/RH_VisDiscrim/';
p.root = [pwd, '\'];

dataDir = strcat(p.root,'rats');
if ~exist(dataDir, 'dir'),
    mkdir(dataDir);
end

dataDir = strcat(p.root,'rats/rat',num2str(p.ratNum));
if ~exist(dataDir, 'dir'),
    mkdir(dataDir);
end



%% begin sessions

fprintf ('\nThere will be %d sessions in total.\n', p.nSess);

startTime=GetSecs;
for sess = 2:p.nSess,
    
    
    % create stim sequence
    [p] = VD_createStimOrder(p);
    
    %% load session based variables
    
    % block HA and LA conditions, useful for when not resetting weights
    if mod(p.ratNum,2)
        p.nInpDims = p.numGrids_Caudal;
        p.which_gp_layer = 1;
        p.stimCond = sess;
        p.sess = p.stimCond;
    else
        if any([2,4] == sess)
            p.stimCond = 2;
            p.sess = 1;
        else
            p.stimCond = 1;
            p.sess = 2;
        end
    end
    
    [p, stims] = VDcreateStimuli_forC(p);

    
    
    p.stimSet = 1;
    p.nRows = p.numRows;
    p.nTrainCycles = p.numTrainCycles;
    p.which_gp_layer = p.sess;
    p.numLayers = p.which_gp_layer; % whether PRC is available
    p.nInpDims = p.numInputDims(p.which_gp_layer);

    % choose fixation ratio based on stim condition
    p.fixn_ratio = p.fixn_ratio_lowHigh(p.stimCond);
    
    % simply nicer to refer to things as layers, sometimes
    p.layer = p.which_gp_layer;
    
    % maximum number of fixations allowed (fixations before judgement of
    % 'match' will be made)
    p.maxFix = p.maxFixations(p.stimCond);
    
    % number of features picked up per fixation
    p.nFeaturesToSample = p.numFeaturesToSample(p.layer);
    
    %number of grids in layer
    p.numGrids=p.nGrids(1:p.layer);
    
    % number of input dimensions to those grids
    p.nInpDims=p.numInputDims(1:p.layer);
    
    % variable to decide whether to every use the PRC layer, determined
    % within VD_present_stimulus.m
    p.usePRC = zeros(2,p.nTrials);
    
    p.nEncodCycles = p.numEncodingCycles(p.stimCond);
    
%% say what about to happen
    fprintf('\n\nSESSION %d, RAT %d\n', sess, p.ratNum);
        
    %% execute model code
    p = visDiscrimModel(p,stims);
    
    
    %% save it up
    fName = strcat(dataDir, '/Session',num2str(sess-1),'_Rat',num2str(rat),'.mat');
    save(fName,'p');
    
    %reset famil_diff_thresh so that it's not carried over from previous session
    p.famil_diff_thresh=[repmat(p.famil_diff_thresh_start(1),1,p.lengthOfCrit); repmat(p.famil_diff_thresh_start(2),1,p.lengthOfCrit)];
    
end

p.runningTime = GetSecs-startTime;

fprintf ('\n\nFinished. \r');
