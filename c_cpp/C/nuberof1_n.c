/*************************************************************************
	> File Name: numberof1.c
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年06月09日 星期四 15时29分22秒
 ************************************************************************/

#include<stdio.h>

int  numberof1(int  n)
{
	int  sum  = 0 ;
    unsigned int flag =1;
	
	while(n)
	{
		printf("%#x \n",n);
			sum ++;
	    n=(n-1)&n;
	}


	return sum;
}

int main(int argc ,char  *argv[])
{
	printf("\r\n %d \r\n",numberof1(atoi(argv[1])) );
    return 0;
}

