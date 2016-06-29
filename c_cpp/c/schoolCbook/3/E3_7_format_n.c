#include<stdio.h>
int main()
{
    int count;

    printf("123%n45\n",&count);
    printf("count=%d \n",count);
    printf("12%n345\n",&count);
    printf("count=%d \n",count);
}
