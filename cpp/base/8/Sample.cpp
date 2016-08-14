/*************************************************************************
	> File Name: Sample.cpp
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年08月09日 星期二 09时31分10秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Sample
{
	/*.in struct is public , you kown only in this way that C++ can compatibility with C */
	int default; // default element  or function is  private 
private :
	int a;
	void fa();
protected :
	int b;
	void fb();
public:
	int c;
	void set();
	void display();
};

void Sample::fa()
{
	cout<<"in Function fa"<<endl;
	cout<<"a="<<a<<"b="<<b<<"c="<<c<<endl;
	return ;
}

void Sample::fb()
{
	cout<<"in Function fb"<<endl;
	cout<<"a="<<a<<"b="<<b<<"c="<<c<<endl;
	return ;
}
void Sample::set()
{
	a=1;
	b=2;
	c=3;
}

void  Sample::display()
{
	cout<<"this is display function"<<endl;
	fa();
}
int  main()
{
	Sample s;
	//s.default =0;
	s.c=10;
	s.set();
	s.display();
    return 0;
}
