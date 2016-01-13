% testing the shape of the activation function. logistic
function [] = scripts(k)
close all
L = 1; % maximum
% k = .09; % curve steepness, also determines how low is the initial start
d = 6;

maxDist = .15;
steps = .00001;

x = d.*(maxDist:-steps:0);
xaxis = 0:steps:maxDist;

xlog = log(1./((x.^2)./d));

plot(-x,xlog)

acts = 5.*(L ./ (1 + exp(-k * xlog)));
% acts = 5.*tanh(xlog);

plot(x,acts)

end

% x_other = -maxDist:steps:maxDist;
% acts_other = 1 ./ (1 + exp(.01 * (1./-x_other)));
% plot(x_other,acts_other)
% 
% % note, however, that the weights aren't updated linearly. Rather, they
% % also travel along and exp() curve. 
% 
% 
% a = 0; % lower bound
% k = 1; % upper bound
% c = 1; % typically 1
% q = 10; % related to y(0)
% b = .5; % growth rate
% v = 1; % place of maximal growth
% 
% acts_general = a + ((k - a) ./ ((c + q*exp(-b*xlog)).^(1/v)));
% 
% plot(-x,acts_general)
% 
% 
% test = -5:.1:10;
% 
% acts_general_test = a + ((k - a) ./ ((c + q*exp(-b*test)).^1/v));
% plot(test,acts_general_test)
% 
% 
% 
% % this describes the region of the activation sigmoid we move along
% % note, however, that since the actual inputs are log transformed, the
% % shape of the actual activations might be slightly different (see above).
% % Do we want to try and match a linear progression?
% test = 2:.001:10;
% actsTest = 1 ./ (1+exp(-1 * test));
% plot(test,actsTest)
% 
