/*************************************************************************
	> File Name: Rectangle.cpp
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年08月09日 星期二 15时43分53秒
 ************************************************************************/

#include<iostream>
using namespace std;
class Rectangle
{
private:
	float width;
	float height;
public:
	void set(float width,float height)
	{
		this->width = width;
		this->height =height;
	}
	float getArea()
	{
		return width*height;
	}
};

Rectangle & compare(Rectangle &r1 ,Rectangle & r2)
{
	if(r1.getArea() >r2.getArea())
	{
		return r1;
	}
	else
	{
		return r2;
	}
}

int  main()
{
    Rectangle re1,re2,re3,re4;
    re1.set(12.2,34.2);
    re2.set(2.2,34.2);
    re3.set(1.2,34.2);
    re4.set(12.2,3.2);
    Rectangle & max = compare(re1,compare(re2,compare(re3,re4)));
	cout<<"max area ="<<max.getArea() <<endl;
    return 0;
}
