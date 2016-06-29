#include<stdio.h>
void MyStrcpy(char *dststr,char *scrstr)
{
    while((*dststr++ = *scrstr++)!='\0')
    {
    }
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
