/*
*编程将若干字符串按字母由小到大的顺序输出
*/

//二维数组实现

#include<stdio.h>
#include<string.h>

#define MAX_LEN 11   //字符串的最大长度
#define  N  10          //z字符串的个数                多加一个就正常了为什么呀？

int main()
{
    int i=0,j=0;
    char temp[MAX_LEN];
    char str[N][MAX_LEN]={"pascal","java","Cpp","C","php","javascript","vb","matlab","python","html"};     

    //人家怎么知道你有有没有排序呢？你要事先输出没排序之前的情况吧！
    for(i=0;i<N;i++)
    {
    	puts(str[i]);   //输出没排序之前的情况，还有puts()里面放的是一个地址，二维数组里面str[i]是一个地址值；
    }

    //我知道你还记得一个字符串求在字典序最前的；可你要明白这里是排序！！！！！！！！
    //strcpy(maxstr,str[0]);
    for(i=0;i<N-1;i++)     ///////////!!!!冒泡排序的时候，前面有序的最后一个是（N－1）！！！！
    {
        for(j=i+1;j<N;j++) ///////比来比还是N在比MAX—LEN根本就没有参与！！！！
        {
        	if(strcmp(str[i],str[j])>0)
        	{
        	 	strcpy(temp,str[i]);
        	 	strcpy(str[i],str[j]);
	        	strcpy(str[j],temp);
        	 }//if over!
        }    //inter for over!
    } //outer for over!
       puts("over,NO! \n");
    //排完序后输出
    for(i=0;i<N;i++)
    {
    	puts(str[i]);
    	//printf("%s\n",str[i]);
    }
    puts("over! \n");
}
