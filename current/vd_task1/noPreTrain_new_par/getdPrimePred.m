function preds = getdPrimePred( parms )
%getdPrimePred Summary of this function goes here

%   predictions will be related to dPrime, data will be desired
% dPrimes to model.

global consts;

% kind of a silly way to do things, but why not?
nRats = consts.nRats;
% a = parms(1);
% b = parms(2);

preds = create_sim_simplex(1, nRats, parms);

end

