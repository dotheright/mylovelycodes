#include<stdio.h>

int main()
{
    double sign=1.0,pi=0.0;
    int n=1,cout=0;
    do
    {
        pi+=sign/(n);
        n=n+2;
        cout++;
        sign=-sign;
    }while(1.0/(n-2)>=0.0001);
    pi=pi*4;
    printf("%f",pi);

    return 0;
}
