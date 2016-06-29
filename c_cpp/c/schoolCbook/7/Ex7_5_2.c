/*函数的功能：字符串的复制
*函数的参数：*scrstr,指向源字符串
*                      *dststr,指向目的字符串
*函数的返回值：无
*/
#include<stdio.h>

void MyStrcpy(char*dststr,char *scrstr)
{
    while (*scrstr!='\0') //没有结束那就继续
    {
        *dststr=*scrstr;     //复制字符
        dststr++;                //使dststr指向下一个字符
        scrstr++;               /////使srcstr指向下一个字符
    }
    *dststr='\0';
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
