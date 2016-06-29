#include <stdio.h>
#include <stdlib.h>

#include "list.h"

struct jimmy_list
{
        int id;
        struct list_head list;
        char name[10];
};

int main(int argc, char **argv)
{

        struct jimmy_list *tmp;
        struct list_head *pos, *q;
        unsigned int i;

        struct jimmy_list mylist;
        INIT_LIST_HEAD(&mylist.list);

        for(i=0; i<5; i++)
        {
            tmp= (struct jimmy_list *)malloc(sizeof(struct jimmy_list));
            
            tmp->id = i+1;
            sprintf(tmp->name, "jimmy %d", i+1);

            
            list_add(&(tmp->list), &(mylist.list));
        }
        

        
        for(i=5; i<7; i++)
        {
            tmp= (struct jimmy_list *)malloc(sizeof(struct jimmy_list));
            
            tmp->id = i+1;
            sprintf(tmp->name, "kenthy %d", i+1);
            
            list_add_tail(&(tmp->list), &(mylist.list));
        }
        


        
        printf("traversing the list using list_for_each()\n");
        list_for_each(pos, &mylist.list){
              tmp= list_entry(pos, struct jimmy_list, list);
              printf("id= %d name= %s\n", tmp->id, tmp->name);
        }
        printf("\n");

        
        #if 1
        tmp= (struct jimmy_list *)malloc(sizeof(struct jimmy_list));
        tmp->id = 55;
        sprintf(tmp->name, "kenthy %d", 55);
        INIT_LIST_HEAD(&(tmp->list));
        list_replace((&mylist.list)->next,&(tmp->list));
        #endif
        

        printf("traversing the list using list_for_each_entry()\n");
        list_for_each_entry(tmp, &mylist.list, list)
          printf("id= %d name= %s\n", tmp->id, tmp->name);
        printf("\n");

        
        printf("reverse the list using list_for_each_prev()\n");
        list_for_each_prev(pos, &mylist.list){
              tmp= list_entry(pos, struct jimmy_list, list);
              printf("id= %d name= %s\n", tmp->id, tmp->name);
        }
        printf("\n");
        
        printf("reverse the list using list_for_each_entry()\n");
        list_for_each_entry_reverse(tmp, &mylist.list, list)
          printf("id= %d name= %s\n", tmp->id, tmp->name);
        printf("\n");


 

        printf("deleting the list using list_for_each_safe()\n");
        list_for_each_safe(pos, q, &mylist.list){
        tmp= list_entry(pos, struct jimmy_list, list);
        printf("freeing item id= %d name= %s\n", tmp->id, tmp->name);
        list_del(pos);
        free(tmp);
        }

        if(list_empty(&mylist.list))
          printf("now the list if empty\n");
        return 0;
}
