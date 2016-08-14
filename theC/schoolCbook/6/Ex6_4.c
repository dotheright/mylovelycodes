/*
*将班级不超过40人的班级的分数按从高到低排序
*目的练习使用向函数传递一维数组
*/
#include<stdio.h>
#define ArrSize 40

void sort();//函数的声明

int main()
{
    int All,i;
    long num[40];
    float score[40];

    printf("please enter the number of the sdudent\n");
    scanf("%d",&All);
    printf("please enter the number and score\n");
    for(i=0;i<All;i++)
    scanf("%ld%*c%f",&num[i],&score[i]);

    sort(num,score,All);//调用排序函数

    for( i=0;i<All;i++)
    printf("%ld\t%g\n",num[i],score[i]);
}

void sort(long num[],float score[],int All)
{
    int i,j;
    float temp1,temp2;

    for(i=0;i<All-1;i++)
        for(j=i+1;j<All;j++)
        if(score[i]<score[j])
            {
                /*交换成绩*/
                temp1=score[i];
                score[i]=score[j];
                score[j]=temp1;

                /*交换学号*/
                temp2=num[i];
                score[i]=score[j];
               score[j]=temp2;
            }
}

