/*************************************************************************
	> File Name: gen.c
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年03月16日 星期三 20时55分28秒
 ************************************************************************/

#include<stdio.h>

int main()
{
	int  i = 0 ;
	
	srand(time(NULL));
	for(i = 0 ; i < 1000000 ; i++)
	{
		printf(" %d\r\n",rand());
	}

	return 0;
}

