library(IDPmisc)
# read in data file written in matlab
data<-read.csv('hitFA.csv')

rats = dim(data)[1]

colnames(data)=c('HR_first_caudal_low', 'HR_first_caudal_high', 'HR_first_PRC_low',
                 'HR_first_PRC_high', 'HR_second_caudal_low', 'HR_second_caudal_high',
                 'HR_second_PRC_low', 'HR_second_PRC_high', 
                 'FA_first_caudal_low', 'FA_first_caudal_high', 'FA_first_PRC_low', 
                 'FA_first_PRC_high', 'FA_second_caudal_low', 'FA_second_caudal_high',
                 'FA_second_PRC_low', 'FA_second_PRC_high'
                 )


dPrime_caudal_low_first = qnorm(data$HR_first_caudal_low) - qnorm(data$FA_first_caudal_low) 
dPrime_caudal_high_first = qnorm(data$HR_first_caudal_high) - qnorm(data$FA_first_caudal_high) 
dPrime_caudal_low_second = qnorm(data$HR_second_caudal_low) - qnorm(data$FA_second_caudal_low) 
dPrime_caudal_high_second = qnorm(data$HR_second_caudal_high) - qnorm(data$FA_second_caudal_high) 

dPrime_PRC_low_first = qnorm(data$HR_first_PRC_low) - qnorm(data$FA_first_PRC_low) 
dPrime_PRC_high_first = qnorm(data$HR_first_PRC_high) - qnorm(data$FA_first_PRC_high) 
dPrime_PRC_low_second = qnorm(data$HR_second_PRC_low) - qnorm(data$FA_second_PRC_low) 
dPrime_PRC_high_second = qnorm(data$HR_second_PRC_high) - qnorm(data$FA_second_PRC_high) 

# first col = dPrime
# second col = layer
#             1 = caudal, 2 = PRC
# third col = stim ambig
#             1 = low, 2 = high
# fourth col = trial half
#             1 = first, 2 = second
dataMat = array(0,dim=c(8*rats, 5))



dataMat[1:rats,] <- cbind(dPrime_caudal_low_first,
                          c(1:rats),
                          replicate(rats,"caudal"),
                          replicate(rats,"low"), 
                          replicate(rats,"first")
)
dataMat[(1+rats):(rats*2),] <- cbind(dPrime_caudal_low_second,
                                     c(1:rats),
                                     replicate(rats,"caudal"),
                                     replicate(rats,"low"), 
                                     replicate(rats,"second")
)
dataMat[(1+rats*2):(rats*3),] <- cbind(dPrime_caudal_high_first,
                                       c(1:rats),
                                       replicate(rats,"caudal"),
                                       replicate(rats,"high"), 
                                       replicate(rats,"first")
)
dataMat[(1+rats*3):(rats*4),] <- cbind(dPrime_caudal_high_second,
                                       c(1:rats),
                                       replicate(rats,"caudal"),
                                       replicate(rats,"high"), 
                                       replicate(rats,"second")
)

dataMat[(1+rats*4):(rats*5),] <- cbind(dPrime_PRC_low_first,
                                       c(1:rats),
                                       replicate(rats,"PRC"),
                                       replicate(rats,"low"), 
                                       replicate(rats,"first")
)
dataMat[(1+rats*5):(rats*6),] <- cbind(dPrime_PRC_low_second,
                                       c(1:rats),
                                       replicate(rats,"PRC"),
                                       replicate(rats,"low"), 
                                       replicate(rats,"second")
)
dataMat[(1+rats*6):(rats*7),] <- cbind(dPrime_PRC_high_first,
                                       c(1:rats),
                                       replicate(rats,"PRC"),
                                       replicate(rats,"high"), 
                                       replicate(rats,"first")
)
dataMat[(1+rats*7):(rats*8),] <- cbind(dPrime_PRC_high_second,
                                       c(1:rats),
                                       replicate(rats,"PRC"),
                                       replicate(rats,"high"), 
                                       replicate(rats,"second")
)

colnames(dataMat) = c('dPrime', 'rat', 'layer', 'stimAmbig', 'trialHalf')


dataFrame<- as.data.frame(dataMat)

dPrime<- as.numeric(levels(dataFrame[,1]))[dataFrame[,1]]

#sketchy...
dPrime[dPrime==Inf] = 6
dPrime[dPrime==-Inf] = -6

dataFrame[,1] = dPrime

dataFrame_noInf<-NaRV.omit(dataFrame)

analy = aov(dPrime ~ (trialHalf*stimAmbig*layer)+Error(rat/(trialHalf*stimAmbig)) + (layer*stimAmbig), data=dataFrame_noInf)

summary(analy)
TukeyHSD(analy)