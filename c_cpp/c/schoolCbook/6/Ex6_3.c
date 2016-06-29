//对人数少于40个的班级某门课的成绩排序

#include<stdio.h>

int main()
{
    int i,j,number,score[40],temp;

    printf("please enter the number of the student:");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        printf("please enter the %dth student:",i);
        scanf("%d",&score[i-1]);
        //要注意平常我们是从1开始，而数组，计算机是从0开始
    }

    for(i=0;i<number-1;i++)
        for(j=i+1;j<number;j++)
        if(score[i]<score[j])
        {
            temp=score[i];
            score[i]=score[j];
            score[j]=temp;
        }

    for(i=0;i<number;i++)
    printf("%3d",score[i]);
}

//太棒了，事情根本没有你想象的那么难！理解了，到底是怎么排的序，
//还有数组处理好下标问题，就不会有什么大问题
