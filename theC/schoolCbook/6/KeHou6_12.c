/*
*将字符串里的函数逆置
*/
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i;

    printf("please enter a string:");
    gets(str);
    strlen(str);
    for(i=strlen(str);i>=0;i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}
