close all;

% testing the shape of the activation function. logistic
L=1; % maximum
k=.25; % curve steepness, also determines how low is the initial start
% b=1;
b=2/3;
a=1.7159;
% a = 1;
d = 2;
sigma2 = 1;
v = 1;

maxDist = 100;
steps = 1;
maxDist_weights = 1e-5;
minDist_weights = 1e-8;

% x = 0:steps:maxDist;
x = [0,repelem(1,4),repelem(2,8),repelem(3,12)];
% xaxis = 0:steps:maxDist;

% xlog = log(v./((d*x.^2)./d));
% xlog = 1./((d*(x.^2))./d);

% plot(-x,xlog)

% acts = L ./ (1 + exp(-k * xlog));
% acts = tanh(xlog);
% acts = a.*tanh(b.*x);

mse_max = sum(repelem(maxDist_weights,d).^2) / d;
mse_min = sum(repelem(minDist_weights,d).^2) / d;


acts_min = (1-a*tanh(b*mse_max))*exp(-(x.^2) / (2*sigma2));
acts_max = (1-a*tanh(b*mse_min))*exp(-(x.^2) / (2*sigma2));
acts_min_total = sum(acts_min);
acts_max_total = sum(acts_max);

figure
plot(acts_min)

figure
plot(acts_max)

% note, however, that the weights aren't updated linearly. Rather, they
% also travel along and exp() curve. 

% the total change will be approximately the difference between acts max
% and acts min
changeTot = acts_max_total - acts_min_total;

% so, we want that change to occur over the course of about 60 trials
% although there are a total of 72 trials, if saturation doesn't occur
% until the very end of the second half, it'llbe easier to preserve the
% performance of the lesioned networks durign the low ambiguity condition,
% during which they're still seeing many features
eta = changeTot / 40

% that eta happens ~20 times per fixation
% but, need to account for the fact that all 6 simple features aren't seen on every
% trial, and that 4 grids need to be saturated
eta_use = (eta /( 20))*24

