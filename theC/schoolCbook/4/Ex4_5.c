#include<stdio.h>
int main()
{
    float h,w,t;

    printf("please intput you high and wight\n");
    scanf("%f%*c%f",&h,&w);

       t=w/(h*h);
       if(t<18)
      printf("low\n");
      if(t>=18&&t<25)
      printf("Standard\n");
      if(t>=25&&t<27)
      printf("higher\n");
      if(t>=27)
      printf("fat!\n");
}
