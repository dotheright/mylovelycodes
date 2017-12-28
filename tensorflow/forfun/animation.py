#!/usr/bin/python
# -*- coding: utf-8 -*-  

"""
import numpy as np

from matplotlib import pyplot as plt
from matplotlib import animation 

#plt.cm.coolwarm    
# first set up the figure, the axis, and the plot element we want to animate     
fig = plt.figure()   
ax1 = fig.add_subplot(2,1,1,xlim=(0, 2), ylim=(-4, 4))  
ax2 = fig.add_subplot(2,1,2,xlim=(0, 2), ylim=(-4, 4))  
line, = ax1.plot([], [], lw=2)    
line2, = ax2.plot([], [], lw=2)    
def init():    
    line.set_data([], [])   
    line2.set_data([], [])
    return line,line2 

# animation function.  this is called sequentially     
def animate(i):  
    x = np.linspace(0, 2, 100)     
    y = np.sin(2 * np.pi * (x - 0.01 * i))    
    line.set_data(x, y)
    x2 = np.linspace(0, 2, 100)     
    y2 = np.cos(2 * np.pi * (x2 - 0.01 * i))* np.sin(2 * np.pi * (x - 0.01 * i))    
    line2.set_data(x2, y2)     
    return line,line2  

anim1=animation.FuncAnimation(fig, animate, init_func=init,  frames=50, interval=10)    
plt.show()
"""

"""
import numpy as np  
import matplotlib.pyplot as plt  
import matplotlib.animation as animation  

fig = plt.figure()  
axes1 = fig.add_subplot(111)  
line, = axes1.plot(np.random.rand(10))  

#因为update的参数是调用函数data_gen,所以第一个默认参数不能是framenum  
def update(data):  
    line.set_ydata(data)  
    return line,  
# 每次生成10个随机数据  
def data_gen():  
    while True:  
        yield np.random.rand(10)  

ani = animation.FuncAnimation(fig, update, data_gen, interval=2*1000)  
plt.show()  
"""



"""
import numpy as np  
import matplotlib.pyplot as plt  
import matplotlib.animation as animation  


start = [1, 0.18, 0.63, 0.29, 0.03, 0.24, 0.86, 0.07, 0.58, 0]  
  
metric =[[0.03, 0.86, 0.65, 0.34, 0.34, 0.02, 0.22, 0.74, 0.66, 0.65],  
         [0.43, 0.18, 0.63, 0.29, 0.03, 0.24, 0.86, 0.07, 0.58, 0.55],  
         [0.66, 0.75, 0.01, 0.94, 0.72, 0.77, 0.20, 0.66, 0.81, 0.52]  
        ]  
  
fig = plt.figure()  
window = fig.add_subplot(111)  
line, = window.plot(start)  
#如果是参数是list,则默认每次取list中的一个元素,即metric[0],metric[1],...  
def update(data):  
    line.set_ydata(data)  
    return line,  
  
ani = animation.FuncAnimation(fig, update, metric, interval=2*1000)  
plt.show()  
"""





import numpy as np  
from matplotlib import pyplot as plt  
from matplotlib import animation  

# First set up the figure, the axis, and the plot element we want to animate  
fig = plt.figure()  
ax = plt.axes(xlim=(0, 2), ylim=(-2, 2))  
line, = ax.plot([], [], lw=2)  

# initialization function: plot the background of each frame  
def init():  
    line.set_data([], [])  
    return line,  

# animation function.  This is called sequentially  
# note: i is framenumber  
def animate(i):  
    x = np.linspace(0, 2, 1000)  
    y = np.sin(2 * np.pi * (x - 0.01 * i))  
    line.set_data(x, y)  
    return line,  

# call the animator.  blit=True means only re-draw the parts that have changed.  
anim = animation.FuncAnimation(fig, animate, init_func=init,  
                               frames=200, interval=20, blit=True)  
  
#anim.save('basic_animation.mp4', fps=30, extra_args=['-vcodec', 'libx264'])  

plt.show() 
