#!/usr/bin/env python
# -*- coding: utf-8 -*-

import tensorflow as tf 
import numpy as np 

input_data = np.random.rand(2,100) # 维度1，每个维度100个数，数字的大小默认在0到1之间

x_data = np.random.rand(100).astype(np.float32);

x_data = np.random.rand(100).astype(np.float32);
y_data =x_data*0.1 +0.3
"""
weight = tf.random_uniform(100,-2,2);
intercept = tf.random_uniform(100,-2,2);

yy = x_data*weight+intercept

result =tf.reduce_mean(yy-y_data);

train = tf.train.GradientDescentOptimizer(1);

sess =tf.Session(result)
for i in  range(301):
    sess.run(result);
    sess.run(train);
    if (i%30 ==0):
        print sess.run(weight),sess.run(intercept)
"""



#x_data = np.random.rand([100]).astype(np.float32)
x_data = np.random.rand(100).astype(np.float32)
y_data = x_data*0.3+0.2

print y_data

weight = tf.Variable(tf.random_normal([1],-1.0,1.0))
biases = tf.Variable(tf.zeros([1]))

y =weight*x_data+biases;

loss =tf.reduce_mean(tf.square(y-y_data));
optimizer =tf.train.GradientDescentOptimizer(0.5);


train =optimizer.minimize(loss)

init = tf.initialize_all_variables()

sess =tf.Session()
sess.run(init)

"""
for step in range(201):
    sess.run(train);
    if step %20 ==0 :
        print(step,sess.run(weight),sess.run(biases));
"""