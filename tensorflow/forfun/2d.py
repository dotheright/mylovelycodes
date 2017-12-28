#!/usr/bin/env ipython

import numpy as np;
from matplotlib import pyplot as plt;

fig = plt.figure()

plt.xlabel("x label")
plt.ylabel("y label")
plt.title("para-curve")
x = np.arange(-4, 4.1, 0.25)
plt.plot(x,x**2);
'''
for i in range(6):
    plt.plot(x,np.exp(i*x/3));
'''
plt.show()