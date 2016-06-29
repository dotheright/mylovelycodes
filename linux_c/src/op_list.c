#include <stdio.h>
#include "list.h"

int main()
{
    li
}
/*
(转)linux之list.h用户使用态  	 
仰慕kernel的list.h良久了,自己也曾经牛刀小试过一把.今日得闲,暂探索性的分析一把.

1. 简约而又不简单的链表定义

于双向链表而言，内核中定义了如下简单结构：

  struct list_head {                     
    struct list_head *next, *prev;  
 };                                               
   
 这个不含任何数据项的结构，注定了它的通用性和未来使用的灵活性，例如前面的例子就可以按如下方式定义：
 
struct my_list{ 
void *mydata; 
struct list_head list;
};   
  在此，进一步说明几点：
  1）list字段，隐藏了链表的指针特性，但正是它，把我们要链接的数据组织成了链表。
  2）struct list_head可以位于结构的任何位置
  3）可以给struct list_head起任何名字。
  4）在一个结构中可以有多个list

例如，我们对要完成的任务进行描述，而任务中又包含子任务，于是有如下结构：

-------------------------------------------------------------------------------------------------------------------------
struct todo_tasks{
char *task_name;
unsigned int name_len;
short int status;

int sub_tasks;

int subtasks_completed;
struct list_head completed_subtasks;

int subtasks_waiting;
struct list_head waiting_subtasks; 

struct list_head todo_list; 
};
-----------------------------------------------------------------------
  简约而又不简单struct list_head，以此为基本对象，就衍生了对链表的插入、删除、合并以及遍历等各种操作：
2. 链表的声明和初始化宏
   
   实际上， struct list_head只定义了链表节点，并没有专门定义链表头，那么一个链表结构是如何建立起来的？让我们来看看下面两个宏：
#define LIST_HEAD_INIT(name) { &(name), &(name) }
#define LIST_HEAD(name) struct list_head name = LIST_HEAD_INIT(name)

   如果我们要申明并定义自己的链表头mylist，直接调用LIST_HEAD：
    LIST_HEAD(mylist)
    则mylist的next、prev指针都初始化为指向自己，这样，我们就有了一个空链表，如何判断链表是否为空，自己写一下这个简单的函数list_empty ，也就是让头指针的next指向自己而已。

3. staitic inline函数－隐藏并展开
   在list.h中定义的函数大都是 staitic inline f()形式？为什么这样定义？
   关键字“static”加在函数前，表示这个函数是静态函数，所谓静态函数，实际上是对函数作用域的限制，指该函数的作用域仅
 局限于本文件。所以说，static具有信息隐藏作用。
     而关键字"inline“加在函数前，说明这个函数对编译程序是可见的，也就是说，编译程序在调用这个函数时就立即展开该函数。所以，关键字inline 必须与函数定义体放在一起才能使函数成为内联。inline函数一般放在头文件中。

4.  无处不在的隐藏特性
     我们分析一下在链表中增加一个节点的函数实现：
     有三个函数：
     static inline void __list_add();
     static inline void list_add();
     static inline void list_add_tail();


-------------------------------------------------------------------------------------------------

static inline void __list_add(struct list_head *new,
                  struct list_head *prev,
                  struct list_head *next)
{
    next->prev = new;
    new->next = next;
    new->prev = prev;
    prev->next = new;
}
--------------------------------------------------------------------------------------------------

static inline void list_add(struct list_head *new, struct list_head *head)
{
    __list_add(new, head, head->next);
}
--------------------------------------------------------------------------------------------------

static inline void list_add_tail(struct list_head *new, struct list_head *head)
{
    __list_add(new, head->prev, head);
}

--------------------------------------------------------------------------------------------------
   
   仔细体会其实现代码，看起来简单有效，但实际上也是一种抽象和封装的体现。首先__list_add()函数做基本的操作，该函数仅仅是增加一个节点，至于这个节点加到何处，暂不考虑。list_add（）调用__list_add()这个内部函数，在链表头增加一个节点，实际上实现了栈在头部增加节点的操作，而list_add_tail()在尾部增加一个节点，实际上实现了队的操作。
 
至于链表的删除、搬移和合并，比较简单，不再此一一讨论

5. 链表遍历－似走过千山万水
  遍历链表本是简单的，list.h中就定义了如下的宏：
--------------------------------------------------------------------------------------------------
  **
 * list_for_each    -    iterate over a list
 * @pos:    the &struct list_head to use as a loop counter.
 * @head:    the head for your list.
 *
#define list_for_each(pos, head) \
    for (pos = (head)->next; pos != (head); \
            pos = pos->next)

--------------------------------------------------------------------------------------------------
  这种遍历仅仅是找到一个个节点在链表中的位置pos，难点在于，如何通过pos获得节点的地址，从而可以使用节点中的数据？ 于是 list.h中定义了晦涩难懂的list_entry（）宏：


--------------------------------------------------------------------------------------------------

#define list_entry(ptr, type, member) \
    ((type *)((char *)(ptr)-(unsigned long)(&((type *)0)->member)))

--------------------------------------------------------------------------------------------------
指针ptr指向结构体type中的成员member；通过指针ptr，返回结构体type的起始地址，如图2。
      
          type

          |----------|
          |              |
          |              |
          |----------|
   ptr--> | member --|
          |----------|
          |              |
          |              |
          |----------| 

        图2 list_entry（）宏的示意图

为了便于理解，在此给予进一步说明。
 例如my_list结构：
struct my_list{ 
void *mydata; 
struct list_head list;
};
struct list_head *pos;  

则list_entry(pos, mylist, list)宏，就可以根据pos的值，获取mylist的地址，也就是指向mylist的指针，这样，我们就可以存取mylist->mydata字段了。

可为什么能够达到这样的效果？
list_entry(pos, mylist, list) 展开以后为：

  ((struct my_list *)((char *)(pos) - (unsigned long)(&((struct my_list *)0)->list)))

这看起来会使大多数人眩晕，但仔细分析一下，实际很简单。
  ((size_t) &(type *)0)->member)把0地址转化为type结构的指针，然后获取该结构中member成员的指针，并将其强制转换为size_t类型。于是，由于结构从0地址开始定义，因此，这样求出member的成员地址，实际上就是它在结构中的偏移量。为了更好的理解这些，我们可以写一段程序来验证:
---------------------------------------------------------------------------------------
 */
 
#include <stdio.h>
#include <stdlib.h>

struct foobar{
unsigned int foo;
char *pst;
char bar;
char boo;
};

int main(int argc, char** argv)
{

    struct foobar tmp;
    
    printf("address of &tmp is= %p\n\n", &tmp);
    printf("address of tmp->foo= %p \t offset of tmp->foo= %lu\n", &tmp.foo, (unsigned long) &((struct foobar *)0)->foo);
    printf("address of tmp->bar= %p \t offset of tmp->bar= %lu\n", &tmp.bar, (unsigned long) &((struct foobar *)0)->bar);
    printf("address of tmp->boo= %p \t offset of tmp->boo= %lu\n\n", &tmp.boo, (unsigned long) &((struct foobar *)0)->boo);

    printf("computed address of &tmp using:\n");
    printf("\taddress and offset of tmp->foo= %p\n",
    (struct foobar *) (((char *) &tmp.foo) - ((unsigned long) &((struct foobar *)0)->foo)));
    printf("\taddress and offset of tmp->bar= %p\n",
    (struct foobar *) (((char *) &tmp.bar) - ((unsigned long) &((struct foobar *)0)->bar)));
    printf("\taddress and offset of tmp->boo= %p\n",
    (struct foobar *) (((char *) &tmp.boo) - ((unsigned long) &((struct foobar *)0)->boo)));

    return 0;
}

Output from this code is:
address of &tmp is= 0xbfffed00

address of tmp->foo= 0xbfffed00 offset of tmp->foo= 0
address of tmp->bar= 0xbfffed04 offset of tmp->bar= 4
address of tmp->boo= 0xbfffed05 offset of tmp->boo= 5

computed address of &tmp using:
address and offset of tmp->foo= 0xbfffed00
address and offset of tmp->bar= 0xbfffed00
address and offset of tmp->boo= 0xbfffed00

----------------------------------------------------------------------------------------

  到此，我们对链表的实现机制有所了解，但在此止步的话，我们依然无法领略这风景背后的韵味。
  尽管list.h是内核代码中的头文件，但我们可以把它移植到用户空间使用。且看下一讲，链表接口之应用。


[root@mip-123456 list]# cat list.h
#ifndef _LINUX_LIST_H
#define _LINUX_LIST_H

#define LIST_POISON1 ((void *) 0x00100100)
#define LIST_POISON2 ((void *) 0x00200200)

#define offsetof(TYPE, MEMBER) ((size_t) &((TYPE *)0)->MEMBER)
#define container_of(ptr, type, member) ({\
           const typeof( ((type *)0)->member ) *__mptr = (ptr);\
           (type *)( (char *)__mptr - offsetof(type,member) );})

struct list_head {
        struct list_head *next, *prev;
};

#define LIST_HEAD_INIT(name) { &(name), &(name) }

#define LIST_HEAD(name) \
        struct list_head name = LIST_HEAD_INIT(name)

static inline void INIT_LIST_HEAD(struct list_head *list)
{
        list->next = list;
        list->prev = list;
}


static inline void __list_add(struct list_head *new,
                              struct list_head *prev,
                              struct list_head *next)
{
        next->prev = new;
        new->next = next;
        new->prev = prev;
        prev->next = new;
}


static inline void list_add(struct list_head *new, struct list_head *head)
{
        __list_add(new, head, head->next);
}

static inline void list_add_tail(struct list_head *new, struct list_head *head)
{
        __list_add(new, head->prev, head);
}

static inline void __list_del(struct list_head * prev, struct list_head * next)
{
        next->prev = prev;
        prev->next = next;
}

static inline void list_del(struct list_head *entry)
{
        __list_del(entry->prev, entry->next);
        entry->next = LIST_POISON1;
        entry->prev = LIST_POISON2;
}

static inline void list_replace(struct list_head *old,
                                struct list_head *new)
{
        new->next = old->next;
        new->next->prev = new;
        new->prev = old->prev;
        new->prev->next = new;
}

static inline void list_replace_init(struct list_head *old,
                                        struct list_head *new)
{
        list_replace(old, new);
        INIT_LIST_HEAD(old);
}

static inline void list_del_init(struct list_head *entry)
{
        __list_del(entry->prev, entry->next);
        INIT_LIST_HEAD(entry);
}

static inline void list_move(struct list_head *list, struct list_head *head)
{
        __list_del(list->prev, list->next);
        list_add(list, head);
}

static inline void list_move_tail(struct list_head *list,
                                  struct list_head *head)
{
        __list_del(list->prev, list->next);
        list_add_tail(list, head);
}

static inline int list_is_last(const struct list_head *list,
                                const struct list_head *head)
{
        return list->next == head;
}

static inline int list_empty(const struct list_head *head)
{
        return head->next == head;
}

static inline int list_empty_careful(const struct list_head *head)
{
        struct list_head *next = head->next;
        return (next == head) && (next == head->prev);
}

static inline void __list_splice(struct list_head *list,
                                 struct list_head *head)
{
        struct list_head *first = list->next;
        struct list_head *last = list->prev;
        struct list_head *at = head->next;

        first->prev = head;
        head->next = first;

        last->next = at;
        at->prev = last;
}

static inline void list_splice(struct list_head *list, struct list_head *head)
{
        if (!list_empty(list))
                __list_splice(list, head);
}

static inline void list_splice_init(struct list_head *list,
                                    struct list_head *head)
{
        if (!list_empty(list)) {
                __list_splice(list, head);
                INIT_LIST_HEAD(list);
        }
}

#define list_entry(ptr, type, member) \
        container_of(ptr, type, member)

#define list_for_each(pos, head) \
        for (pos = (head)->next;pos != (head); \
                pos = pos->next)

#define __list_for_each(pos, head) \
        for (pos = (head)->next; pos != (head); pos = pos->next)

#define list_for_each_prev(pos, head) \
        for (pos = (head)->prev; pos != (head); \
                pos = pos->prev)

#define list_for_each_safe(pos, n, head) \
        for (pos = (head)->next, n = pos->next; pos != (head); \
                pos = n, n = pos->next)

#define list_for_each_entry(pos, head, member) \
        for (pos = list_entry((head)->next, typeof(*pos), member); \
             &pos->member != (head); \
             pos = list_entry(pos->member.next, typeof(*pos), member))

#define list_for_each_entry_reverse(pos, head, member) \
        for (pos = list_entry((head)->prev, typeof(*pos), member); \
             &pos->member != (head); \
             pos = list_entry(pos->member.prev, typeof(*pos), member))

#define list_prepare_entry(pos, head, member) \
        ((pos) ? : list_entry(head, typeof(*pos), member))


#define list_for_each_entry_continue(pos, head, member) \
        for (pos = list_entry(pos->member.next, typeof(*pos), member); \
             prefetch(pos->member.next), &pos->member != (head); \
             pos = list_entry(pos->member.next, typeof(*pos), member))

#define list_for_each_entry_from(pos, head, member) \
        for (; prefetch(pos->member.next), &pos->member != (head); \
             pos = list_entry(pos->member.next, typeof(*pos), member))


#define list_for_each_entry_safe(pos, n, head, member) \
        for (pos = list_entry((head)->next, typeof(*pos), member), \
                n = list_entry(pos->member.next, typeof(*pos), member); \
             &pos->member != (head); \
             pos = n, n = list_entry(n->member.next, typeof(*n), member))


#define list_for_each_entry_safe_continue(pos, n, head, member) \
        for (pos = list_entry(pos->member.next, typeof(*pos), member), \
                n = list_entry(pos->member.next, typeof(*pos), member); \
             &pos->member != (head); \
             pos = n, n = list_entry(n->member.next, typeof(*n), member))

#define list_for_each_entry_safe_from(pos, n, head, member) \
        for (n = list_entry(pos->member.next, typeof(*pos), member); \
             &pos->member != (head); \
             pos = n, n = list_entry(n->member.next, typeof(*n), member))

#define list_for_each_entry_safe_reverse(pos, n, head, member) \
        for (pos = list_entry((head)->prev, typeof(*pos), member), \
                n = list_entry(pos->member.prev, typeof(*pos), member); \
             &pos->member != (head); \
             pos = n, n = list_entry(n->member.prev, typeof(*n), member))

#endif
[root@mip-123456 list]# cat list.c
#include <stdio.h>
#include <stdlib.h>

#include "list.h"

struct jimmy_list{
        int id;
        struct list_head list;
        char name[10];
        };

int main(int argc, char **argv){

        struct jimmy_list *tmp;
        struct list_head *pos, *q;
        unsigned int i;

        struct jimmy_list mylist;
        INIT_LIST_HEAD(&mylist.list);

        for(i=0; i<5; i++){
        tmp= (struct jimmy_list *)malloc(sizeof(struct jimmy_list));
        
        tmp->id = i+1;
        sprintf(tmp->name, "jimmy %d", i+1);

        
        list_add(&(tmp->list), &(mylist.list));
        }
        

        
        for(i=5; i<7; i++){
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
[root@mip-123456 list]# ./list
traversing the list using list_for_each()
id= 5 name= jimmy 5
id= 4 name= jimmy 4
id= 3 name= jimmy 3
id= 2 name= jimmy 2
id= 1 name= jimmy 1
id= 6 name= kenthy 6
id= 7 name= kenthy 7

traversing the list using list_for_each_entry()
id= 55 name= kenthy 55
id= 4 name= jimmy 4
id= 3 name= jimmy 3
id= 2 name= jimmy 2
id= 1 name= jimmy 1
id= 6 name= kenthy 6
id= 7 name= kenthy 7

reverse the list using list_for_each_prev()
id= 7 name= kenthy 7
id= 6 name= kenthy 6
id= 1 name= jimmy 1
id= 2 name= jimmy 2
id= 3 name= jimmy 3
id= 4 name= jimmy 4
id= 55 name= kenthy 55

reverse the list using list_for_each_entry()
id= 7 name= kenthy 7
id= 6 name= kenthy 6
id= 1 name= jimmy 1
id= 2 name= jimmy 2
id= 3 name= jimmy 3
id= 4 name= jimmy 4
id= 55 name= kenthy 55

deleting the list using list_for_each_safe()
freeing item id= 55 name= kenthy 55
freeing item id= 4 name= jimmy 4
freeing item id= 3 name= jimmy 3
freeing item id= 2 name= jimmy 2
freeing item id= 1 name= jimmy 1
freeing item id= 6 name= kenthy 6
freeing item id= 7 name= kenthy 7
now the list if empty
