
import numpy  as np

dd =  np.random.uniform(-20,20,100);
#for  i  in range(100):
#    y= 2*i +dd[i]
#y = [i*2+dd[i] for  i  in range(100) ]
for i  in range(100):
    print str(i)+","+str(i*2+dd[i])