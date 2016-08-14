#include<stdio.h>
//#include<stdlib.h>
#include<time.h>
#include<string.h>

int main()
{
      int magic;       //计算机随机的数
       int guess;       //
       char reply;

  do{

       srand( time(0) );
       magic=rand();

        printf("%d",magic);
       printf("\nplease guess a magic number:");
       scanf("%d",&guess);

        if(guess>magic)
        printf("high!\n");
        else if(guess<magic)
        printf("low!\n");
        else
        printf("right!\n");

        printf("Do you want coutinue?(Y/N or y/n)\n");
        reply=getchar();

    }while((reply=='y')||(reply=='Y'));
}
