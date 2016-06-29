/*
*编程将若干字符串按字母由小到大的顺序输出
*/

//用指针数组编写程序实现 

#include<stdio.h>
#include<string.h>

#define  N  10          //z字符串的个数                多加一个就正常了为什么呀？

int main()
{
    int i=0,j=0;
    //字符数组可以这样附值呵呵，*str[N]与［］结合的跟紧，N个数组每个都是指针型的
    
    char *str[N]={"pascal","java","Cpp","C","php","javascript","vb","matlab","python","html"};
      char *temp=NULL;      //指针是必须的附初始值，没有什么可给的时候就给NULL吧！

    //人家怎么知道你有有没有排序呢？你要事先输出没排序之前的情况吧！
    puts("\nBefore sorted!\n");
    for(i=0;i<N;i++)
    {
    	puts(str[i]);   //输出没排序之前的情况，还有puts()里面放的是一个地址，二维数组里面str[i]是一个地址值；
    }
     for(i=0;i<(N-1);i++)    //前面的N－1就行了因为是和后面的比后面的必须要有才行。所以要留一位
     {
     	for(j=i+1;j<N;j++)
	{//保证str[i]是比后面的都要小
		if(strcmp(str[j],str[i])<0)
		{
			temp=str[i];    //都是指针类型的所以可以直接赋值
			str[i]=str[j];      //
			str[j]=temp;     //
		}//if over!		
	}//inter for over! 
	
     }//outer for over!
     
     printf("\nAfter sorted :\n");
     for(i=0;i<N;i++)
     {
     	puts(str[i]);
     }
}
