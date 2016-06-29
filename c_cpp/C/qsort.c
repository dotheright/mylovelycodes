/*************************************************************************
	> File Name: qsort.c
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年06月09日 星期四 15时57分25秒
 ************************************************************************/

#include<stdio.h>
#include<assert.h>

void swap(int  *a ,int *b )
{
	int temp = 0;

	temp = *a;
	*a=*b;
	*b=temp;

	return ;
}

int partition(int  arr[] ,int  len, int start , int  end )
{
	if((NULL == arr )|| (start <0) || (end <start) ||(end >len) )
	{
		assert(0);
		return 0;
	}

	int  temp =arr[start];
	int  i = start ; 
	int  j = end;
   
	while(i != j)
	{
		while(arr[j]>=temp && i<j)
		{
			j--;
		}
		while(arr[i] <= temp && i<j)
		{
			i++;
		}
		if(i<j)
	    {
			swap(&arr[i] ,&arr[j]);
		}
	}
   
	arr[start]=arr[i];
	arr[i]=temp;
    swap(&arr[i],&arr[j]]) ;
	return  i ;
}

void qsort(int  arr[],int len ,int start,int end)
{
    if(start == end)
	{
		return;
	}
   int index =partition(arr,len,start,end );
   if( index >start)
   {
	   qsort(arr,len,start,index-1);
   }
   if(index<end)
   {
	   qsort(arr,len,index+1,end);
   }

}

int main()
{
	int  arr[10]={6,1,2,7,9,3,4,5,10,8};
	qsort(arr,10,0,9);
    int  i = 0 ;

	for(i = 0 ; i < 10 ;i++)
	{
		printf("%d\t",arr[i]);
	}

    return 0;
}

