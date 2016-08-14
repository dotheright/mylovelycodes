/*
*分段函数
*/

#include<stdio.h>
#include<math.h>

int main()
{
    float x;

    printf("please enter x\n");
    scanf("%f",&x);

    if(x>0)
    printf("%f",exp(x));
    else if(x<0)
    printf("%f",-exp(x));
    else
    printf("1");

 return 0;  //放在最后因为我知道你也不想这么快结束！
}
