#!/usr/bin/env ipython
import matplotlib.pyplot as plt
import numpy as np

xy = np.random.rand(100,2000)
print xy.shape

x = np.linspace(0,20,1);
y = np.linspace(0,10,1);
print x
print y

y,x = np.meshgrid(y,x);
print x
print  y

plt.imshow(xy, aspect="auto")
plt.colorbar()

plt.show()