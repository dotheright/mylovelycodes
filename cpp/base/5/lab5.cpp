/*************************************************************************
	> File Name: lab5.cpp
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年06月30日 星期四 09时08分34秒
 ************************************************************************/

#include<iostream>
using namespace std;

int  x =5;
int  y =10;

void  f();
int  main()
{
	cout<<"begin"<<endl;

	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
    int x = 10;
	int  y =30;
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	f();
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
    return 0;
}
void f()
{
	int  x =100;
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
}
