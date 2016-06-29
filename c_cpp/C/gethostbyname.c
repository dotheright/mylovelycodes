/*************************************************************************
	> File Name: gethostbyname.c
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年06月11日 星期六 16时25分42秒
 ************************************************************************/

#include<stdio.h>
#include<netdb.h>

int main(int  argc,char *argv[])
{
	printf(" %s \r\n", gethostbyname(argv[1]));

    return 0;
}

