#include<stdio.h>
int main()
{
    float f1=100.15799,f2=12.55,f3=1.7;
    int    n1=123,          n2=45,    n3=6;

    printf("%f\n",10.0/3);//这一点很重要10.0，否则会默认为整数
    printf("printf WITHOUT width or precision specifications:\n");
    printf("%f\n%f\n%f\n",f1,f2,f3);
    printf("%d\n%d\n%d\n",n1,n2,n3);
    printf("printf WITH width or precision specifications:\n");
    printf("%5.4f\n%-6.1f\n%3.0f\n",f1,f2,f3);
    printf("%5d\n%6d\n%3d\n",n1,n2,n3);
    //%6d，%格式说明，6而且是+6，6表示占六个字符，且靠右，-6负号表示以左对齐

}
