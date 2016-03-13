norm_vec <- function(x) sqrt(sum(x^2))

a = .5

inp <- c(.35,.35)
inp2 <- c(.2,.8)
w1 <- c(.05,.05)
w2 <- c(.35,.35)
w3 <- c(.35,.65)
w4 <- c(.95,.05)


w1_norm <- w1/norm_vec(w1); w1_norm
w2_norm <- w2/norm_vec(w2); w2_norm
w3_norm <- w3/norm_vec(w3); w3_norm
w4_norm <- w4/norm_vec(w4); w4_norm
inp_norm <- inp/norm_vec(inp); inp_norm
inp2_norm <- inp2/norm_vec(inp2); inp2_norm

inp_norm %*% w1_norm
inp_norm %*% w2_norm
inp_norm %*% w3_norm
inp_norm %*% w4_norm



inp_norm %*% inp_norm

norm_vec(w1) * (inp_norm %*% w1_norm)
norm_vec(w2) * (inp_norm %*% w2_norm)
norm_vec(w3) * (inp_norm %*% w3_norm)





w1_t2 <- (w1 + a*inp) / norm_vec(w1 + a*inp); w1_t2

w2_t2 <- (w2 + a*inp) / norm_vec(w2 + a*inp); w2_t2
w3_t2 <- (w3 + a*inp) / norm_vec(w3 + a*inp); w3_t2


inp %*% w1_t2
inp %*% w2_t2
inp %*% w3_t2

# OH! we're attending to both the direction AND magnitude of these vectors!
# so, to use a Dot-product SOM, we'd need to code the features differently (such that [.05,.05] and [.65,.65]) 
# were different. This would definitely require 

# Also, it's weird that we're updating the weights based on distance in terms of MSE. That is, 
# conceptually, it seems most natural to update the weights based on a unit in weight space, not
# a squared unit...


# since there is no non-artibrary order to our dimensions, (that is, dimension 1 at level 1 (say, outer shape of absract
# shape) is not, somehow 'less' than level 2, we shouldn't be paying attention to magnitude). So, we should
# ONLY be dealing with normalized code vectors. A more complex model could be implimented in which certain
# dimensions were tied to each other (like, if dimension 1 was on, neither d2 nor d3 could be on), but
# that would be extra. Would want a covariance matrix describing the tendency of these dimensions to mean something.
# put another way, there's no reason to code it such that level 3 in d1 is farther away from level 1 than level 2.