/*************************************************************************
	> File Name: shape.h
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年08月11日 星期四 10时40分38秒
 ************************************************************************/

#include<iostream>

class Shape
{
public:
	Shape(int a,int b,char c);

private:
	int m_x;
	int m_y;
	char m_color;
};

class Circle:public Shape
{
public:
	draw();
private:
	char m_r;

};
