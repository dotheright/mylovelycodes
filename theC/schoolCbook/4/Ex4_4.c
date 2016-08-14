#include<stdio.h>
int main()
{
    int yourAge,hisAge,max;

    printf("please input your age and his age\n");
    scanf("%d%*c%d",&yourAge,&hisAge);

    max=(yourAge>=hisAge)?yourAge:hisAge;

    printf("The older age is %d\n",max);

}
