/*
*程序的功能：在一个已排好序，由小到大的数组中，查找代插入的数据x应插入的位置，使插入后，数组元素仍保持由小到大的顺序
*/

#include<stdio.h>

#define MaxArr 10

void insert(int str[],int n,int x,int pos);

int main()
{
    int str[MaxArr],i,n,pos,x;

	printf("please enter array number:\n");
	scanf("%d",&n);

	printf("please enter array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&str[i]);
	}

	printf("please enter insert number x=");
	scanf("%d",&x);

            insert(str,n,x,pos);  //数组的总数是传不进去地，只能传进去数组的地址：

	printf("After insert %d\n",x);

	for(i=0;i<n+1;i++)
	{
		printf("%-4d",str[i]);
	}

	return 0;
}

/*
*函数的功能：将x插入到一个已排好序的（由小到大）的数组中；
*
*/
void insert(int *p,int n,int x,int pos)
{
    int i;

    for(i=0;i<n&&x>p[i];i++)
    {
        //此处的目的是为了求的i(插入元素在数组中的位置),所以里面不用写什么东西
    }

    pos=i;        //找到位置后要移动后面的

    for(i=n-1;i>=pos;i--)   //pos后的元素     从后向前移一位
    {
    	p[i+1]=p[i];
    }

    p[pos]=x;  //腾出空间后把x放入其中！！！！！！！！！
}

