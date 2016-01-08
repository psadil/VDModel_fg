nRows = 200;
peak = 5;

input = .95;
weight_far = .80;
weight_close = .95;
weight_near = .94;
dims = 8;
k_exp = .1;

weights_far = (.5)*(4/5) + (1/5)*(.81)

farthest = (1 / (1 + exp(-k_exp*log(1 / ( (dims * (input - weight_far))/dims )  ) ) ) ) * (peak)
closest = (1 / (1 + exp(-k_exp*log(1 / ( (dims * (input - weight_close))/dims )  ) ) ) ) * (peak)
near = (1 / (1 + exp(-k_exp*log(1 / ( (dims * (input - weight_near))/dims )  ) ) ) ) * (peak)


farthest / closest
farthest - closest

tot = .5;

far_tot = (1 / (1 + exp(-k_exp*log(1 / ( (dims * (input - tot))/dims )  ) ) ) ) * (nRows^2 - peak)
close_tot = (1 / (1 + exp(-k_exp*log(1 / ( (dims * (input - tot))/dims )  ) ) ) ) * (nRows^2 - peak)
near_tot = (1 / (1 + exp(-k_exp*log(1 / ( (dims * (input - tot))/dims )  ) ) ) ) * (nRows^2 - peak)


far_tot - close_tot

far_selec = farthest / far_tot
close_selec = closest / close_tot
near_selec = near / near_tot
% so, are these the upper and lower bounds of the familiarity signal?

% max famil diff (want at beginning for misMatch trials)
close_selec - far_selec


close_selec - near_selec


%% simulation
sims = 1000;
far_selec = zeros(1,sims);
close_selec = zeros(1,sims);
for sim = 1:sims
    weight_far = rand;
    
    farthest = (1 / (1 + exp(-k_exp*log(1 / ( (dims * (input - weight_far))/dims )  ) ) ) ) * (peak);
    closest = (1 / (1 + exp(-k_exp*log(1 / ( (dims * (input - weight_close))/dims )  ) ) ) ) * (peak);
    
    tot = (1 / (1 + exp(-k_exp*log(1 / ( (dims * (input - tot))/dims )  ) ) ) ) * (nRows^2 - peak);
    
    far_selec(sim) = farthest / tot;
    close_selec(sim) = closest / tot;
    
    
end

plot(1:sims,close_selec-far_selec)
