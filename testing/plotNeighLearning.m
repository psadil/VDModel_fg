clear all; close all

trainingCycles = 100;

r = 0:50;
t = 1:trainingCycles;
B = .4;
A = .1;
%% neighborhood function across training trials
% NOTE: only looks at neighborhood in a line...

neighborhood = zeros(trainingCycles,length(r));
for trial = 1:trainingCycles
    for radius = 1:length(r)
        neighborhood(trial,radius) = exp(-1*((r(radius) / (.5 + 10*(trial^-B)))^2));
       
%         neighborhood(trial,radius);
    end
end

surf(neighborhood)
% Create xlabel
xlabel('distance from center');

% Create ylabel
ylabel('training cycle');

% Create zlabel
zlabel('height');


%% eta
figure
hold on
plot((1:trainingCycles).^(-A), 'r')

%% activation of winning node
input = [.9,.9,.9];

A = .1;
alpha = trainingCycles^-A;
nNodesInPeak = 1;
v = squeeze(neighborhood(trainingCycles,1:nNodesInPeak+1));

nNodesInRow = 5;
nOtherNodes = (nNodesInRow^2) - nNodesInPeak;

% trial X dim X node
weightsPeak = zeros(73,3,nNodesInPeak);
weightsPeak(1,:,:) = .5;

weightsOther = zeros(73,3,nOtherNodes);
weightsOther(1,:,:) = .5;

selectivity = zeros(73,1);
for trial = 2:73
    for peakNode = 1:nNodesInPeak
        if peakNode == 1
            learnAmount = alpha*v(nNodesInPeak+1);
        elseif (1 < peakNode) && (peakNode < 6)
            learnAmount = alpha*neighborhood(25);
        elseif (5 < peakNode) && (peakNode < 14)
            learnAmount = alpha*neighborhood(24);
        elseif (13 < peakNode) && (peakNode < 26)
            learnAmount = alpha*neighborhood(23);
        end
        weightsPeak(trial,:,peakNode) = weightsPeak(trial-1,:,peakNode) + learnAmount*(input - weightsPeak(trial-1,:,peakNode));
    end
    
    for otherNode = 1:nOtherNodes
        weightsOther(trial,:,:) = .5;
    end
    
    peakDist = mean(input - squeeze(weightsPeak(trial,:,1)));
    otherDist = mean(input - [.5,.5,.5]);
    
    peakAct = log(1/peakDist);
    otherAct = 24*log(1/otherDist);
    
    selectivity(trial) = peakAct/otherAct;
end
selectivity(1) = selectivity(2);

figure; hold on,
% plot(weightsPeak(:,1,1), 'b')
% plot(weightsPeak(:,1,2), 'r')
% plot(weightsPeak(:,1,6), 'g')
% plot(weightsPeak(:,1,14), 'm')

plot(selectivity)