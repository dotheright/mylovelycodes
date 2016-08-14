/*************************************************************************
	> File Name: pyId.c
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年05月10日 星期二 10时13分48秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    printf("i =%d \r\n",*(unsigned int *)0x09dd31ec);
    return 0;
}

