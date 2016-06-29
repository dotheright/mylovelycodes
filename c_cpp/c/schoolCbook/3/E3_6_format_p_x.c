#include<stdio.h>
int main()
{
    int f1=12;

    printf("%%p:%p\n",&f1);//加“&”显示的是地址
    printf("%%p:%p\n",f1); //不加显示的是内容（%p 主机格式的内容）

     printf("%%d:%d\n",&f1);//加“&”显示的是地址
    printf("%%d:%d\n",f1);

    printf("%%x:%x\n",&f1);
    printf("%%X:%X\n",&f1);

    return 0;
}
