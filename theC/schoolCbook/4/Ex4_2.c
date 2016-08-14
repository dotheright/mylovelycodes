/*
    从键盘任输一个三位数，要求正确分理出它的个位，十位，百位并分别在屏幕上输出
*/
#include<stdio.h>
int main()
{
    int x,a,b,c;

    printf("Please enter an integer");
    scanf("%d",&x);

    if(x>999||x<0)
    printf("input erro!");
    else
    {
        a=x/100;
        b=(x-a*100)/10;
        c=x-100*a-10*b;
        printf("百位=%d,十位=%d,个位=%d",a,b,c);
    }
}
