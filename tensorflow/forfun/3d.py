#!/usr/bin/env python

import numpy as np;

from matplotlib import pyplot as plt;
from mpl_toolkits.mplot3d import Axes3D;

#Z =[]

fig = plt.figure()
ax = Axes3D(fig)

X = np.arange(-4, 4, 0.25)
Y = np.arange(-4, 4, 0.25)

X, Y = np.meshgrid(X, Y) # metrix

Z = np.sqrt(X**2 + Y**2)
#Z = np.sin(R)

print  X.shape
print  Y.shape
print  Z.shape
ax.view_init(0,90)
ax.plot_surface(X, Y, Z, rstride=1, cstride=1, cmap='rainbow')
plt.show()
