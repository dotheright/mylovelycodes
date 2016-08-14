 /*
*一个的程序，交换两个整数，并将交换后的输出
*/
#include<stdio.h>

void swap(int *x,int *y); //为什么声明部分可以这样写？

int main()
{
    int a, b;

    printf("please enter a,b:");
    scanf("%d%*c%d",&a,&b);

    printf("Before swap:a=%d,b=%d\n",a,b);
    swap(&a,&b);
    printf("After swap:a=%d,b=%d\n",a,b);

    return 0;
}

/*
*函数功能：交换两个整数x,y的值
*函数的参数：整型变量x,y待交换的数
*函数的返回值：无
*/
void swap(int *x,int *y)
{
    int temp;

    temp=*x;
    *x=*y;
    *y=temp;
}
