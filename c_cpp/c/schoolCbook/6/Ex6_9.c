/*
*从键盘输入5个学生的名字，查找并输出安字典顺序排到最前面的学生的姓名
*/

//问题的分析：字典顺序就是指按字母由小到大的顺序，字符串的比较，复制
#include<stdio.h>
#include<string.h>

#define MAXLEN 80

int main()
{
    int i;
    char name[MAXLEN],min[MAXLEN];

    printf("please enter 5 students name:");
    gets(name);              //第一个名字已得到
    strcpy(min,name);
    for(i=1;i<5;i++)        //从第二个开始逐个比较前后关系
    {
        gets(name);          //用完就扔，无需存储
        if(strcmp(min,name)>0)
        {
            strcpy(min,name);
        }
    }
    printf("The min is:");
    puts(min);
}
