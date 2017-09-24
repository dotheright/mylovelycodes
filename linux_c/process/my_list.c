#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include "my_list.h"
#include "assert.h" 

#define MAX_STU  128
#define MAX_NAME_LEN 32
#define MAX_ID_LEN 12


typedef struct stud
{
    LIST_HEAD list;
    char name[MAX_NAME_LEN];
    char stu_number[MAX_ID_LEN];
}STUDENT;

int main(void)
{
    LIST_HEAD head;

    STUDENT *entry;
    int  i = 0 ;

    LIST_HEAD *pLTmp;
    INIT_LIST_HEAD(&head);
    
    STUDENT *pstStudent =(STUDENT *)malloc( MAX_STU * sizeof(STUDENT));
    if(NULL == pstStudent )
    {
        assert(0);
        return -1;
    }    

    for (i = 0 ; i<5 ; i++ )
    {
        sprintf(pstStudent[i].name ,"name%d",i);
        sprintf(pstStudent[i].stu_number ,"%d0000",i);
        list_add_tail(&pstStudent[i].list,&head);
    }
    
    //list_del(&stu_2.list);
    list_for_each(pLTmp,&head)
    {
        entry=list_entry(pLTmp,struct stud,list);
        printf("name: %s\n",entry->name);
        printf("stu_number: %s\n",entry->stu_number);
    }
    
    list_del(&pstStudent[0].list);
    printf("after delete first \r\n");

    list_for_each(pLTmp,&head)
    {
        entry=list_entry(pLTmp,struct stud,list);
        printf("name: %s\n",entry->name);
        printf("stu_number: %s\n",entry->stu_number);
    }
    free(pstStudent);
    return 0;
}
