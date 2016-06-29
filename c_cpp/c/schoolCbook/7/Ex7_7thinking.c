/*
*程序的功能：在一个数组中，删除指定元素，假设元素各不相同
*目的：用指针变量作函数的参数,熟悉函数和指针的关系
*/

#include<stdio.h>
#include<stdlib.h>   //exit()函数用

#define MaxArr 10

void delete(int str[],int n,int x,int pos);

int main()
{
    int str[MaxArr],i,n,pos,x;
    int *p=NULL;

	p=str;  //数组名本身表示地址，所以可以这样写；两个都是对地址的操作
	
	printf("Please enter the total number of the array:\n");
	scanf("%d",&n);

	printf("please enter array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i)); //p+i表示的是地址！
	}

	printf("please enter delete number x=");
	scanf("%d",&x);
	
	delete(p,n,x,pos);  

	printf("After delete %d\n",x);

	for(i=0;i<n-1;i++)
	{
		printf("%-4d",*(p+i));//对应的是元素内容，所以＊(p+i),又因为是一维数组所以p[i]，str[i]也是表示内容的！
	}

	return 0;
}

/*
*函数的功能：将数组中的x元素删除；
＊函数的入口参数：int *p指向数组的首地址
＊								int n数组的大小
＊								int x要删除的元素
＊								int pos要删除的元素的位置
*/
void delete(int *p,int n,int x,int pos)
{
    int i,flag=0;//要知道某一步有没有执行用flag太奇妙了！！！！！

   /* for(i=0;i<(n+1)&&x!=*(p+i);i++)  //他特别注意逻辑错误，这个循环结束的条件是：一删除元素存在于数组中，不等于我写的那个要删除的元素时继续！！！！！！！！！！
    {
        //此处的目的是为了求的i(删除元素在数组中的位置),所以里面不用写什么东西
    }*/
    
  for(i=0;i<n;i++)
  {
  if(x==*(p+i) ) //若：存在，则：判断执行，得到i
	{  
		 flag=1;
		 pos=i;
    }
  }	

   	if(!flag)      //flag还是那个0；说明上面的没有执行也就意味着输入元素数组里没有，既然没有了向下进行也没有意思了。退出，否则他还会傻傻地输出前n-1位
   	    { 
    	printf("input error!\n");
    	exit(1);
    }	
    
    for(i=pos;i<n-1;i++)   //pos后的元素     从后向前移一位
    {
    	p[i]=p[i+1];
    }

    p[n-1]=0;  //最后一位空了随便给给个值！！！！！！
}
