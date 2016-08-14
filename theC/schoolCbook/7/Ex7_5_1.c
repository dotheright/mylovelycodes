/*
*程序功能：用字符型数组实现MyStrcpy
*/

/*函数功能：字符串的复制
*函数的参数：字符型数组srcstr,存储源字符串
*                      字符型数组dststr,存储目的字符串
*函数的返回值：无
*/
#include<stdio.h>

void MyStrcpy(char dststr[],char srcstr[])      //用字符数组作为函数的参数
{
    int i=0;

    while(srcstr[i]!='\0')
    {
        dststr[i]=srcstr[i];
        i++;
    }
    dststr[i]='\0';
}

int main()
{
    char a[80],b[80];

    printf("please enter a tring :\n");
    gets(a);

    MyStrcpy(b,a);    //数组名本身就代表地址就不用取地址符：&了哈哈哈

    printf("The copy is :");
    puts(b);

    return 0;
}
