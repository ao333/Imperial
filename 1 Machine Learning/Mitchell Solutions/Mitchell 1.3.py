''' 1.3
For each training example (b, V_train(b))
V_target(b) = W0 + W1+X1... Wn+Xn

LMS
E = (V_train(b) - V_target(b))^2

For each weight Wi, update
Wn <- Wn + LR * (V_train(b) - V_target(b)) * Xi

Prove
Wn <- Wn + LR * dE/dWn
dE/dWn = dE/dV_target(b) * dV_target(b)/dWn
       = d(V_train(b)-V_target(b))^2/d(dV_target(b) * d(dV_target(b))/dWn
       = 2*-1*(V_train(b)-V_target(b) * d(W0 + W1+X1... Wn+Xn)/dWn
       = -2*(V_train(b)-V_target(b)) * Xn
Wn <- Wn + LR * -2(V_train(b) - V_target(b)) * Xn # -2 can be omitted since its a constant
'''