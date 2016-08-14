/*************************************************************************
	> File Name: reverse.cpp
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年06月30日 星期四 10时05分40秒
 ************************************************************************/

#include<iostream>
using namespace std;

void reverse(char  *ps)
{
	if(*ps !='\0')
	{
		ps++;
		reverse(ps);
	    cout<<*(ps-1);
	}
}

int  main()
{
	char *ps ="abcdefg";
	reverse(ps);
    return 0;
}
