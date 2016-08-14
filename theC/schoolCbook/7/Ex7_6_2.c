/*
*用指针实现strlen的功能
*/
#include<stdio.h>

unsigned int MyStrlen( char *pstr);

int main()
{
    char a[80];
    unsigned int len;

    printf("please enter a string:\n");
    gets(a);

    len=MyStrlen(a);
    printf("The lenth you input is:%u\n",len);

    return 0;
}

/*
*函数功能：计算输入字符的长度；
*函数的入口参数：指向数组的指针 *pstr;
*函数的出口参数：无符号整型 长度
*/
unsigned int MyStrlen( char *pstr)
{
    unsigned int len=0;   //初始化！！！！！！！

    for(;*pstr!='\0';pstr++)
     //循环条件，还有增量呢！！嗯嗯嗯，完全的进去，
     //更加的明晰会节省你很长时间的
    {
        len++;
    }
    return (len);
}
