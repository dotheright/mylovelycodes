/*************************************************************************
	> File Name: muti_inherit.cpp
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年08月11日 星期四 12时38分35秒
 ************************************************************************/

#include<iostream>
using namespace std;
class A
{
public:
	int a;
};

class B :virtual public A 
{
};

class C :virtual public A 
{
};

class D : public B, public C
{
};

int main()
{
	D d;
	d.a = 1;
	return 0;
}
