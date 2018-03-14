1#!/usr/bin/env python 
#coding=utf-8

import  numpy as  np;
from sklearn import linear_model
import  matplotlib.pyplot as plt
import  sklearn.metrics as sm

xx = []
yy = []

with open("./line_data.txt","r") as data:
    for  line  in  data:
        x,y = [ float(i) for  i  in   line[:-1].split(",")];
        #print  x,y
        xx.append(x)
        yy.append(y)

num_training = int(0.8*len(xx))
num_test = len(xx) - num_training;

x_train = np.array(xx[:num_training]).reshape((num_training,1))
y_train = np.array(yy[:num_training])

x_test = np.array(xx[num_training:]).reshape((num_test,1))
y_test = np.array(yy[num_training:])



linear_regressor = linear_model.LinearRegression()

linear_regressor.fit(x_train,y_train)
y_train_pred =  linear_regressor.predict(x_train)

plt.figure()
plt.scatter(x_train,y_train,color="green")
plt.plot(x_train,y_train_pred,color="red",linewidth =2)
plt.title("train data")
plt.show(),


# y_train_pred =  linear_regressor.predict(x_test)

# plt.figure()
# plt.scatter(x_test,y_test,color="green")
# plt.plot(x_test,y_train_pred,color="red",linewidth =2)
# plt.title("train data")
# plt.show()

print "mean squared error",round(sm.mean_squared_error(y_train,y_train_pred),2)
print "Explained variance score =",round(sm.explained_variance_score(y_train,y_train_pred),2)