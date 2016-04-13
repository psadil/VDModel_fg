
%% testing out classic activation functions...

w1 = [.3,.3,.6];
w2 = [.1,.1,.6];
w3 = [.5,.5,.6];
inp = [.35,.35,.65];

a1 = w1 * inp';
a2 = w2 * inp';
a3 = w3 * inp';
ai = inp * inp';


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
