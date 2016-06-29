#include<stdio.h>

int factorial(int x);

int main( )
{
    int x;
    while(1)
    {//靠用户输入理想的数，是一件相当不靠谱的事，对用户输入的内容进行检查必必须的！
        printf("please input x(-1 to qiut)\n");
        scanf("%d",&x);
        if(-1==x)
        {
            break;
        }
        else
        {
            printf("The factorial %d is %d.\n\n",x,factorial(x));
        }
    }
		return 0;
}

int factorial(int x)
{
    int i,result=1;

    for(i=1;i<=x;i++)
    {
        result *=i;
    }

    return result;
}
