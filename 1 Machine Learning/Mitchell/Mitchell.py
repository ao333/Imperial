from numpy import*

'''
# 3.2
E32 = -3/6*log2(3/6) - 3/6*log2(3/6)
Ea2T = -2/4*log2(2/4) - 2/4*log2(2/4)
Ea2F = -1/2*log2(1/2) - 1/2*log2(1/2)
G32 = E32 - 4/6*Ea2T - 2/6*Ea2F
# print(E32, Ea2T, Ea2F, G32)

# 3.4
En = -3/5*log2(3/5) - 2/5*log2(2/5)
Gsky = En - 4/5*(-3/4*log2(3/4)-1/4*log2(1/4)) - 1/5*0
Gair = En - 4/5*(-3/4*log2(3/4)-1/4*log2(1/4)) - 1/5*0
Ghum = En - 2/5*(-1/2*log2(1/2)-1/2*log2(1/2)) - 3/5*(-2/3*log2(2/3)-1/3*log2(1/3))
# print(En, Gsky, Gair, Ghum)
# Choose Sky because its tied for highest Gain and Rain simplifies branching with an immediate No leaf
Esky = -3/4*log2(3/4) - 1/4*log2(1/4)
Gair2 = Esky - (-3/4*log2(3/4) - 1/4*log2(1/4))
Ghum2 = Esky -2/4*1 - 2/4*0
Gwin2 = Esky -3/4*0 - 1/4*0
# print(Esky, Gair2, Ghum2, Gwin2)
# Choose Sky(Sunny) > Wind(Strong)

# Evaluating Hypothesis
CR = (70+90)/(70+30+10+90)
Recall = 70/(70+30)
Recall2 = 90/(10+90)
Precision = 70/(70+10)
Precision2 = 90/(30+90)
F1 = 2*(Recall*Precision)/(Recall+Precision)
UAR = mean([Recall, Recall2])
F2 = 2*(Recall2*Precision2)/(Recall2+Precision2)
# print(CR, Recall, Precision, F1, UAR, F2)
# Imbalanced Training Set: Downsample the majority class by randomly selecting the same number of examples as the
# minority class, or divide by the total number of examples per class
Er = 1-0.78
n = 50
Z = 1.96
print(Er - Z*sqrt((Er*(1-Er))/n))
print(Er + Z*sqrt((Er*(1-Er))/n))

# 4.3
Equation (4.10) corresponds to incremental gradient descent in which weights 
are updated after seeing each of the examples, while Equation (4.7) corresponds 
to true gradient descent in which the weights are updated after seeing all the examples once.
'''