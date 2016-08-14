/*
*用字符型数组实现strlen的功能
*/
#include<stdio.h>

unsigned int MyStrlen(char str[]);

int main()
{
    char a[80];
    unsigned int len;

    printf("please enter a string:\n");
    gets(a);
    len=MyStrlen( a);
    printf("The lenth you input is:%u",len);
}

/*
*函数功能：计算输入字符的长度；
*函数的入口参数：字符型的数组str;
*函数的出口参数：无符号整型 长度
*/
unsigned int MyStrlen(char str[])
{
    int i;
    unsigned int len=0;
    //老天你杀了我吧！像这样要加加的或者要算总的结果sum+=****,没有起始值谁都没办法算出结果

    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }

    return(len);
}
