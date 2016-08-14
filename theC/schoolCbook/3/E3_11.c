#include<stdio.h>
int main()
{
    int data1,data2,sum;
    char op;

    printf("data1+data2\n");
    scanf("%d%c%d",&data1,&op,&data2);//在以%c格式读入字符时，
    //空格和转义字符（包括回车都会被读入）！！！！特别注意
    printf("%d%c%d=%d\n",data1,op,data2,data1+data2);
}
