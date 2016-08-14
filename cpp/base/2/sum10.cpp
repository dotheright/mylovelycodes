/*************************************************************************
	> File Name: sum10.cpp
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年06月29日 星期三 18时21分41秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
	int  i = 0 ; 
	int sum = 0;
	
	do
	{
		sum +=i;
		i++;
	}while(i < 10);

	cout <<"sum ="<<sum<<endl;
	return 0;
}
