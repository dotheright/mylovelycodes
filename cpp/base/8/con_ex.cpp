/*************************************************************************
	> File Name: con.cpp
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年08月11日 星期四 07时10分43秒
 ************************************************************************/

#include<iostream>
using namespace std;
class A
{
public:
	A()
	{
		a=0;
		b=0;
		cout<<"construct default"<<endl;
	}

	A(int i ,int j)
	{
		a=i;
		b=j;
		cout<<"consruct "<<a<<" "<<b<<endl;
	}
	~A()
	{
		cout<<"deconsruct "<<a<<" "<<b<<endl;
	}
	void set(int i,int j)
	{
		a=i;
		b=j;
		cout<<"set "<<a<<" "<<b<<endl;
	}
private:
	int  a,b;
};

int  main()
{
	A a[3];
	for(int  i =0 ; i <3;i++)
	{
		a[i].set((i+3)*2+1,2*(i+3+1));
	}

	A b[3]={A(1,2),A(3,4),A(5,6)};
    return 0;
}
