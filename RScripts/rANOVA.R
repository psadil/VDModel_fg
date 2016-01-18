library(ggplot2)


error.bar <- function(x, y, upper, lower=upper, length=0.1,...){
  if(length(x) != length(y) | length(y) !=length(lower) | length(lower) != length(upper))
    stop("vectors must be same length")
  arrows(x,y+upper, x, y-lower, angle=90, code=3, length=length, ...)
}


setwd("D:/googleDrive/uMass/firstYear/VDModel/VDModel_fg/RScripts")

wd <- getwd()

#dataFile <- paste(wd, "/dPrime_eta0.024022_g2.0499_K0.08_A0.6_B0.3_20enc20_500trnNOrand_5pk_20Fix_NOupOnSwitch_1e-06noisThresh_5e-06stCrt_6leng_noABS.dat", sep="")
dataFile <- paste(wd, "/dPrime.dat", sep="")
# find the data that was generated from the matlab files
data <- read.csv(dataFile)

nRats = max(data$rat)
nSess = 4

data$rat = as.factor(data$rat)
data$half = as.factor(data$half)
data$controlLesion = as.factor(data$controlLesion)
data$ambiguity = as.factor(data$ambiguity)
## ------------------------------------------------------------------
# run ANOVA
## ------------------------------------------------------------------

# if rats are reused for each session (weights reset to pretaining values)
# then we'd need an error term
fit <- aov(dPrime ~ controlLesion*half*ambiguity 
           + Error(rat/(controlLesion*half*ambiguity))
           , data = data)
summary(fit)


# though, without any pretaining, all of the rats are individuals
# which implies not repeated measures
fit.threeway <- aov(dPrime ~ controlLesion*half*ambiguity 
           , data = data)

summary(fit.threeway)
