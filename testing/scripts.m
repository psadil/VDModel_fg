close all;

% testing the shape of the activation function. logistic
L=1; % maximum
k=.08; % curve steepness, also determines how low is the initial start
% b=1;
b=atanh(2/3);
a=15;
% a = 1;
d = 8;
sigma2 = .1;
v = 1;

maxDist = 100;
steps = 1;
maxDist_weights = .001;
minDist_weights = 0;

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
eta_use = (eta /( 20))*16

% update = eta_use*exp(-(x.^2) / (2*sigma2));

% acts_updated = 40*eta_use+(1-a*tanh(b*mse_min))*exp(-(x.^2) / (2*sigma2));
% plot(acts_updated)

%% testing out classic activation functions...

w1 = [.3,.3,.6];
w2 = [.1,.1,.6];
w3 = [.5,.5,.6];
i = [.35,.35,.65];

v1 = w1 * i';
v2 = w2 * i';
v3 = w3 * i';
vi = i * i';

mse1 = sum((w1-i).^2)/3;
mse2 = sum((w2-i).^2)/3;
mse3 = sum((w3-i).^2)/3;
msei = sum((i-i).^2)/3;

% these ones suffer, don't use
act1 = a*tanh(b*v1) * (1-mse1);
act2 = a*tanh(b*v2) * (1-mse2);
act3 = a*tanh(b*v3) * (1-mse3);
acti = a*tanh(b*vi) * (1-msei);

% this one seems okay (would use in a peak/total activation manner), except
% that the mse of the non-peak nodes will be much larger when the input is
% either .95 or .05.
act1 = a*tanh(b*(1-mse1));
act2 = a*tanh(b*(1-mse2));
act3 = a*tanh(b*(1-mse3));
acti = a*tanh(b*(1-msei));

% So, I think we need to base the activation function from the gaussian
% neighborhood
act1 = (a*tanh(b*(1-mse1)))*exp(-(x.^2) / (2*sigma2));
act2 = (a*tanh(b*(1-mse2)))*exp(-(x.^2) / (2*sigma2));
act3 = (a*tanh(b*(1-mse3)))*exp(-(x.^2) / (2*sigma2));

sum(act1)
sum(act2)
sum(act3)


n1 = .9;
n2 = .5;
n3 = .1;

i1 = .9;
i2 = .5;

mse11 = (n1-i1)^2;
mse12 = (n1-i2)^2;
mse21 = (n2-i1)^2;
mse22 = (n2-i2)^2;
mse31 = (n3-i1)^2;
mse32 = (n3-i2)^2;

% when input is .9, so n1 wins
sum([mse21,mse31])

% when input is .5, so n2 wins
sum([mse12,mse32])

% holy fuck! the network has a vastly different total activation depending
% on whether the input is in the 'middle' (the .35 and .65) of the space or not
% this means that the network is going to be less selective for those
% stimuli

a11 = 1/(1+exp(-k*log(1/mse11)))
a21 = 1/(1+exp(-k*log(1/mse21)))
a31 = 1/(1+exp(-k*log(1/mse31)))
a11+a21+a31

a12 = 1/(1+exp(-k*log(1/mse12)))
a22 = 1/(1+exp(-k*log(1/mse22)))
a32 = 1/(1+exp(-k*log(1/mse32)))
a21+a22+a32



%% testing gauss
sig = 1;
c = sig;
% a = 10/(sig*sqrt(2*pi));
a=.9;
mu = 0;
b = mu;

x = -2:.01:2;
f = a*exp(- ((x - b).^2) / 2*c^2);

plot(x,f)
