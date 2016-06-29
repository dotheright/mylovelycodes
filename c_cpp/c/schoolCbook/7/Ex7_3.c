/*
*从键盘输入一个班不超过40个人的班级的一门课的成绩，具体人数有键盘输入
*试用函数实现打印最高分及其学号。
*/

#include<stdio.h>

#define ARR_SIZE 40

void FindMax(long num[ARR_SIZE],float score[ARR_SIZE],int n,long *MaxNum,float *MaxScore);
/*
*把函数写在后面，必须事先声明！！
*/
int main()
{
    //一个函数最先想到的是什么？实体类的变量，我想应该是这个
    long num[ARR_SIZE],MaxNum;
    float score[ARR_SIZE],MaxScore;
    int i,n;

    printf("please enter the number of the student:\n");
    scanf("%d",&n);
    printf("please input the number,and,the score of one student:\n");
    for(i=0;i<n;i++)
    {
        scanf("%ld%*c%f",&num[i],&score[i]);//给第i个学生或者分数
    }
    /*输入过程结束*/

    FindMax(num,score,n,&MaxNum,&MaxScore);/*计算最高分数及其学号*/

    printf("The student whose numer is %ld win highset score %g",MaxNum,MaxScore);//printf();这儿的不用取地址符！！
}

/*
*函数的功能：计算最高分及其学号
*函数的入口参数：long num[ARR_SIZE],存储学生的学号；
*                             float score[ARR_SIZE],存储学生的分数；
*                             n,存储学生的人数；
*函数的出口参数：long *MaxNum,指向分数最高的学生的学号；
*                             float *MaxScore,指向分数最高的学生的分数；
*函数的返回值：无
*/
//函数外的思考：这些参数传进来了，你就可以用了！！！！！！！！，里面的参数都是已知的
 void FindMax(long num[ARR_SIZE],float score[ARR_SIZE],int n,long *MaxNum,float *MaxScore)
{
    int i;

    //谁是学号最大的呢？我不知道！同理分数亦然；我就假设他为第一个不行再修改嘛；

    for(i=1;i<n;i++)
    {
        if(score[i]>=score[0])
        {   //如果你比score[0]大,我就把你赋给score[0],学号也这样做，
            //那么score[0]就是最大的了，形式上不变，内容上变了，变成最大的了
            score[0]=score[i];
            num[0]=num[i];
        }
    }
    *MaxNum=num[0];
    *MaxScore=score[0];
}
