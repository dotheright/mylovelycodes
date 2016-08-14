//作用域
#include<stdio.h>
int main()
{
    int a=0;
    {
        int a=1;
        printf("In:%d\n",a);//加\n输出时增加层次感
    }
    printf("Out:%d",a);    //输出的是a的值而不是其的地址
    return 0;
}
