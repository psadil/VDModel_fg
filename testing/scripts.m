close all;

% testing the shape of the activation function. logistic
L=1; % maximum
k=.25; % curve steepness, also determines how low is the initial start
b=1;
% b=2/3;
% a=1.7159;
a = 1;
d = 2;
sigma2 = .5;
v = 1;

maxDist = 100;
steps = 1;
maxDist_weights = 0.15;
minDist_weights = .001;

x = 0:steps:maxDist;
% xaxis = 0:steps:maxDist;

% xlog = log(v./((d*x.^2)./d));
% xlog = 1./((d*(x.^2))./d);

% plot(-x,xlog)

% acts = L ./ (1 + exp(-k * xlog));
% acts = tanh(xlog);
% acts = a.*tanh(b.*x);

mse_max = sum(repelem(maxDist_weights,d).^2) / d;
mse_min = sum(repelem(minDist_weights,d).^2) / d;


acts_min = (1-tanh(mse_max))*exp(-(x.^2) / (2*sigma2));
acts_max = (1-tanh(mse_min))*exp(-(x.^2) / (2*sigma2));
acts_min_total = sum(acts_min);
acts_max_total = sum(acts_max);

figure
plot(x(1:10),acts_min(1:10))

figure
plot(x,acts_max)

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
eta = changeTot / 60;

% ah, but, that eta happens ~20 times per fixation, and an average of 10
% fixations occur per trial
eta_use = eta /( 20*20);
eta_use