library(dplyr)
library(pracma)

norm_vec <- function(x) sqrt(sum(x^2))

a = .1

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

a11 <- inp_norm %*% w1_norm
a21 <- inp_norm %*% w2_norm
a31 <- inp_norm %*% w3_norm
a41 <- inp_norm %*% w4_norm

inp_norm %*% inp_norm

norm_vec(w1) * (inp_norm %*% w1_norm)
norm_vec(w2) * (inp_norm %*% w2_norm)
norm_vec(w3) * (inp_norm %*% w3_norm)





w1_t2 <- (w1 + a*inp) / norm_vec(w1 + a*inp); w1_t2

w2_t2 <- (w2 + a*inp) / norm_vec(w2 + a*inp); w2_t2
w3_t2 <- (w3 + a*inp) / norm_vec(w3 + a*inp); w3_t2


inp_norm %*% w1_t2
inp_norm %*% w2_t2
inp_norm %*% w3_t2

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


# -------------------------------------------------------------------------------
# what if we minimize the statistical dependence of the outputs?
# so, minimize 
# we can treat the activations to a given input as an event
# which (I think) means treating the nodes as random variables


a1 <- c(a31,a41)

a1 %*% a1

(a1 %*% a1) / length(a1)


# P(A | B) = (P(A)*P(B)) / P(B)

a31.a41 <- (a31*a41)/a41; a31.a41
a31

# statistically independent activations for 1 event...duh. Though, of course, these activations are correlated.
# but, what does the distribution of their activations look like for a couple of inputs?
# Side note, I'm not quite dealing with probabilities yet. Instead, I need to be normalizing something, or working
# with the softmax?


a32 <- inp2_norm %*% w3_norm
a42 <- inp2_norm %*% w4_norm

# now, how should the activations be combined to make a distribution? Well, if it really is a probability distribtion,
# the rule is just that they should sum to 1? So, find the proportion of both of them...

a32_p <- (a32)/(a32+a31); a32_p
a31_p <- (a31)/(a32+a31); a31_p

a42_p <- (a42)/(a42+a41); a42_p
a41_p <- (a41)/(a42+a41); a41_p

# were the events independent from each other?
# SIDE NOTE: while the statistical independence is being maximized across nodes, the statistical dependence of 
#    any one node should, presumably, be being maximized
a2_p <- c(a32_p,a42_p); a2_p
a1_p <- c(a31_p,a41_p); a1_p

a32.a42_p <- (a32_p*a42_p)/a42_p; a32.a42_p
a32_p

# what about treating an input (and resulting activations) as an event, rather than the activation of a given node?
event2 <- c(a32,a42) / sum(c(a32,a42)); event2
event1 <- c(a31,a41) / sum(c(a31,a41)); event1

# but, how do we test for the independence of these events (which are distributions)?
ev1 <- event1 %*% event1; ev1
ev2 <- event2 %*% event2; ev2
# nope, they'll just cancel out again...but...?
outer(event1,event2) %>% rowSums(.)
outer(event1,event2) %>% colSums(.)

outer(event1,event2) # this gets us joint probability tables
# this implies dependence!!!! http://stattrek.com/random-variable/independence.aspx
# it would only be independent if event1 did not change from


#---------------------------------------
d <- 100
i <- rand(1,d)

g1 <- diag(100);g1

gt[,]
