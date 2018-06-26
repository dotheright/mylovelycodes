1.编写 JNIDemo.java

2.编译java

javac JNIDemo.java 

3. 生成.h文件
javah JNIDemo

4.编写C代码JNIDemo.c

5.编写makefile

6.编译C文件,得到libDemo.so
make

7.执行java调用
java  -Djava.library.path=./  JNIDemo
