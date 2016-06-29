
#include <stdio.h>
#include <stdlib.h>

#define LEN  sizeof(stSTUDENT)

typedef struct student
{
    int num;
    int score;
    struct student *next;
}stSTUDENT;

int n=0;

struct student *creat()
{

    struct student *head=NULL,*p1,*p2;
    p1=p2=(struct student*)malloc(LEN);
    printf("Please enter the numbers and scores of the students(enter 0 maens finishing input):\n");
    scanf("%d %d",&p1->num,&p1->score);
    while(p1->num!=0)
    { 
        n++;
        if(n==1)head=p1;
        else p2->next=p1;
        p2=p1;
        p1=(struct student*)malloc(LEN);
        scanf("%d %d",&p1->num,&p1->score);

    }
    p2->next=NULL;
    free(p1);
    return head;

}
struct student * insert(int num,int score,struct student *p)
{

    struct student *a,*t;
    a=t=(struct student *)malloc(LEN);
    a->num=num,a->score=score;
    while(p->next!=NULL)
    {
        if(p->num>a->num)
        {t->next=a;a->next=p;break;}
        t=p;
        p=p->next;
    }
    if(p->next=NULL)
    {p->next=a;a->next=NULL;}
    return t;
}

void deleteList(struct student * pstNode)
{
    struct student * pstTempCur =pstNode;
    struct student * pstTempNext =NULL;
    
    while( NULL != pstTempCur)
    {
        pstTempNext = pstTempCur->next;
        free(pstTempCur);
        pstTempCur =NULL;
        pstTempCur=pstTempNext;
    }
    return;
}
int main()
{
    struct student *pt;
    int num,score;
    pt=creat();
    printf("please enter a number and a score to insert into the database:\n");
    scanf("%d %d",&num,&score);
    insert(num,score,pt);
    while(pt!=NULL)
    {
        printf("num:%d score:%d\n",pt->num,pt->score);
        pt=pt->next;
    }
    
    deleteList(pt);
    return 0;

}


