/*
*Ä³°àµÄÈËÊý²»³¬¹ý30£¬ÆÚÖÐ¿¼ÊÔÓÐÊýÑ§£¨MT£©£¬Ó¢Óï£¨EN£©£¬ÎïÀí£¨PH£©£¬
*ÎªÁËÆ½¶¨¿´¡¢½±Ñ§½ð£¬ÒªÇóÊä³öÑ§ºÅ£¬¸÷¿Æ³É¼¨£¬×Ü·ÖÆ½¾ù·Ö
*
*/
#include <stdio.h>
#include <stdlib.h>

#define STUD 30
#define COURSE 3

/**º¯ÊýÉùÃ÷*/
int input(long  num[],int score[][COURSE]);  //Ñ§ºÅ£¬¸÷¿Æ·ÖÊý
void Total(int score[][COURSE],int sum[],float aver[],char c[],int n); //¸÷¿Æ·Ö£¬×Ü·Ö£¬Æ½¾ù·Ö£¬ÊÇ·ñ»ñ½±£¬Ñ§ÉúÈËÊý
void Print( long  num[],int score[][COURSE],int sum[],float aver[],char c[],int n);

int main()
{
    int n,sum[STUD],score[STUD][COURSE],num[STUD];
    float aver[COURSE];
    char c[STUD];

    n=input(sum,score);
    Total(score,sum,aver,c,n);
    Print(num,score,sum,aver,c,n);

    return 0;
} //Ö÷º¯Êý¼òµ¥¶øÇáÁé

/*
*º¯ÊýµÄ¹¦ÄÜ£ºÊäÈë²Î¼Ó¿¼ÊÔµÄÈËÊý£¬Ã¿¸öÑ§ÉúµÄÑ§ºÅºÍCOUREÃÅ¿Î³ÌµÄ³É¼¨
*º¯ÊýµÄ²ÎÊý£ºÒ»Î¬³¤ÕûÐÍÊý×énum,´æ´¢Ñ§ÉúÑ§ºÅ
*                     ¶þÎ¬Êý×éscore£¬´æ·ÅÑ§Éú³É¼¨
*º¯ÊýµÄ·µ»ØÖµ£º²Î¼Ó¿¼ÊÔµÄÈËÊý
*/
int input(long num[],int score[][COURSE])
{
    int n,i,j;

    printf("please enter the total number(<30):");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("please enter the student number:");
        scanf("%ld",&num[i]);
        printf("please input the %ldth ,%d 'score",num[i],COURSE);
        for(j=0;j<COURSE;j++)  //;天大的教训
            scanf("%d",&score[i][j]);
    }
    return n;
}

/*
*º¯ÊýµÄ¹¦ÄÜ£ºÍ³¼ÆÃ¿¸öÑ§ÉúµÄ×Ü·ÖºÍÆ½¾ù·Ö£¬²¢È·¶¨ÄÜ·ñ»ñ½±Ñ§½ð
*º¯ÊýµÄ²ÎÊý£ºÕûÐÎÊý×éscore£¬´æ´¢Ã¿¸öÑ§Éú³É¼¨
*                      ÕûÐÎÊý×ésum£¬ ´æ´¢Ã¿¸öÑ§Éú×Ü·Ö
*                      ÊµÐÎÊý×éaver£¬  ´æ´¢Ã¿¸öÑ§ÉúÆ½¾ù·Ö
*                      ×Ö·ûÐÎÊý×éc£¬    ´æ´¢Ã¿¸öÑ§ÉúÊÇ·ñ»ñ½±
*                      ÕûÐÎÊý×én£¬       ´æ´¢Ñ§ÉúµÄ×ÜÊý
*/
void Total(int score[][COURSE],int sum[],float aver[],char c[],int n)
{
    /*int score[STUD][COURE],sum[STUD],aver[COURE],c[STUD],n;
    float aver[COURE];
    char c[STUD];
*/
    int i,j;
    //for All of those has been reach this function ,you needn't redifine

    /*Have you ever thought what this function do.    The data you need have been gaven you!*/
    //if you put all your heart on this ,and you will succed!
    for(i=0;i<n;i++)
    {
        sum[i]=0;//
        for(j=0;j<COURSE;j++)
        sum[i]+=(long)score[i][j];   //sum[i] the (i+1) th student's score;
        aver[i]=(float)sum[i]/COURSE;
        if(score[i][0]>=90&&score[i][1]>=90&&score[i][2]>=90)
        c[i]='Y';
        else
        c[i]='N';
    }

}


/*
*º¯ÊýµÄ¹¦ÄÜ£º´òÓ¡Ñ§ºÅ£¬¸÷ÃÅ³É¼¨£¬×Ü·Ö£¬Æ½¾ù·ÖÒÔ¼°ÄÜ·ñ»ñµÃ½±Ñ§½ð
* º¯ÊýµÄ²ÎÊý£º³¤ÕûÐÎÊý×énum£¬´æ´¢Ã¿¸öÑ§ÉúÑ§ºÅ
*                      ÕûÐÎÊý×éscore£¬´æ´¢Ã¿¸öÑ§Éú³É¼¨
*                      ÕûÐÎÊý×ésum£¬  ´æ´¢Ã¿¸öÑ§Éú×Ü·Ö
*                      ÊµÐÎÊý×éaver£¬  ´æ´¢Ã¿¸öÑ§ÉúÆ½¾ù·Ö
*                      ×Ö·ûÐÎÊý×éc£¬    ´æ´¢Ã¿¸öÑ§ÉúÊÇ·ñ»ñ½±
*                      ÕûÐÎÊý×én£¬       ´æ´¢Ñ§ÉúµÄ×ÜÊý
*º¯Êý·µ»ØÖµ£ºÎÞ
*/
void Print( long num[],int score[][COURSE],int sum[],float aver[],char c[],int n)
{
        int i,j;

        printf("Result:\n");
        printf("NO\t MT\t EN\t PH\t SUM\t AVER\t  >90\n");
        for(i=0;i<n;i++)
        {
            printf("%4ld\t",num[i]);
            for(j=0;j<COURSE;j++)
            printf("%4d\t",score[i][j]);
            printf("%5ld\t%6.1f\t%c\n",sum[i],aver[i],c[i]);
        }
}
