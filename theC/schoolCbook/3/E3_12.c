#include<stdio.h>
int main()
{
    float a,b,c,s,area;

    printf("input a,b,c\n");
    scanf("%f%f%f",&a,&b,&c);

    s=(1.0/2)*(a+b+c);

    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%f",area);

    return 0;
}
