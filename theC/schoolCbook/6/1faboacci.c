/*
microsoft:给出一个函数输出fabonacci序列
title:假设一对小兔一个月可以可以长成成兔，如果每对成兔每个月可以生出一对小兔，一对新生的小兔子
    第二开始生小兔子个月
    这样上个月有几对大兔子，下个月就有几对小兔子，每个月小兔子的对数==上 个月大兔子的对数
    每个月大兔子的对数=上个月的大兔子+小兔子
    设第n个月的大兔子个数是a[n],小兔子的个数是吧b[n]
    他们的关系如下：
    a[n]=a[n-1]+b[n-1]          //每个月大兔子的对数=上个月的大兔子+小兔子
    a[n-1]=b[n]                 //每个月小兔子的对数==上个月大兔子的对数
    经过计算得
*/
#include <stdio.h>

#define  MONTH  12

int main(int argc,char *argv[])
{
    int f[MONTH+1]={0,1,2};
    int month;

    //计算每个月的兔子总数；
     printf("每个月的兔子总数：\n");
    for(month=1;month<=MONTH;month++)
    {
        f[month+2]=f[month+1]+f[month];
        printf("%-5d",f[month]);

    }

    printf("\nsum=%d\n",f[MONTH]);//计算兔子总数

	return 0;
}
