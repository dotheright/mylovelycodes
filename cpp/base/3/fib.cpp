/*************************************************************************
	> File Name: fib.cpp
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年06月29日 星期三 23时05分55秒
 ************************************************************************/

#include<iostream>
using namespace std;

int fib(int  n )
{
	if (1 == n)
	{
		return 1;
	}
	else if (2==n)
	{
		return  2;
	}
	else
	{
		return fib(n-1)+fib(n-2);
	}

}

int  main()
{
	int  n =10;
	cout <<fib(10)<<endl;
    return 0;
}
