#include <stdio.h> 
#include <string.h>
#include "my_list.h"    

#define MAX_NAME_LEN 32
#define MAX_ID_LEN 10

typedef struct stud
{
    LIST_HEAD list;
    char name[MAX_NAME_LEN];
    char stu_number[MAX_ID_LEN];
}num_n_stu;

int main(void)
{
    LIST_HEAD head;
    num_n_stu stu_1;
    num_n_stu stu_2;
    num_n_stu *entry;

    LIST_HEAD *p;
    INIT_LIST_HEAD(&head);
    strcpy(stu_1.name,"lisi");
    strcpy(stu_1.stu_number,"10000000");

    strcpy(stu_2.name,"zhangsan");
    strcpy(stu_2.stu_number,"10000001");
    list_add(&stu_1.list,&head);
    list_add(&stu_2.list,&head);
    //list_del(&stu_2.list);
    list_for_each(p,&head)
    {
        entry=list_entry(p,struct stud,list);
        printf("name: %s\n",entry->name);
        printf("stu_number: %s\n",entry->stu_number);
    }
    list_del(&stu_1.list);
    return 0;
}
