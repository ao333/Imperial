''' 1.3
For each training example (b, V_train(b))
V_target(b) = W0 + W1+X1... Wn+Xn

LMS
E = (V_train(b) - V_target(b))^2

For each weight Wi, update
Wi <- Wi + LR * (V_train(b) - V_target(b)) * Xi

Prove
Wn <- Wn + LR * dE/dWn
dE/dWn = dE/dV_target(b) * dV_target(b)/dWn
       = (d(V_train(b) - V_target(b))^2 / d(dV_target(b)) * d(dV_target(b)) / dWn
       = (d(V_train(b) - V_target(b))^2 / d(V_train(b) - V_target(b))) * (d(V_train(b) - V_target(b)) / (W0 + W1+X1... Wn+Xn)) * (W0 + W1+X1... Wn+Xn) / dWn
       = 2 * -1 * d(V_train(b) - V_target(b)) / dWn
       = -2 * (W0 + W1+X1... Wn+Xn) / dWn

E = (V_train(b) - (W0 + W1+X1... Wn+Xn))^2


       =










Wi <- Wi + LR * dE/dWi
dE/dWi = dE/d

dE/dW = d/dW(V_train(b) - V_target(b))^2
      = 2(V_train(b) - V_target(b)) * d/dW(V_train(b) - V_target(b))
      = 2(V_train(b) - V_target(b)) * (0-X)
      = -2(V_train(b) - V_target(b)) * X
Wn+1 = Wn - dE/dW
LR * Wn + L(V_train(b) - V_target(b)) * X
'''