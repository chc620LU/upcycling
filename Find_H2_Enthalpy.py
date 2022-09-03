import numpy as np
from scipy import optimize

H_rxn = [115.1,114.6,125.1,118.78,112.4,-21.68,110.8,109,124.86]
Enthalpy_p1 = [-617958.06,-720964.97,-1029980.41,-614860.22,-511838.49,-608666.83,-511787.95,-820885.05,-617965.95]
Enthalpy_r1 = [-621137.25,-724146.11,-1033152.96,-618029.37,-515002.5,-611695.01,-514958.82,-824056.16,-621138.29]

def f(x):
    function = 0
    for i in range(len(H_rxn)):
        function += np.square(Enthalpy_p1[i] + x - Enthalpy_r1[i] - H_rxn[i])
        # print(function)
    return function

print(optimize.minimize(f, x0=0))
