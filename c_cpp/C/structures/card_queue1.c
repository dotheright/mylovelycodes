#include <stdio.h>
#define MAX 100

int main()
{
	int queue[MAX];
	int card_num = 0 ;
	int front = 0;
	int rear = 0;
	int  i = 0 ;

	scanf("%d",&card_num);
	rear = card_num;
	for (i = 0 ; i < card_num ; i++)
	{
		queue[i] = i+1;
	}
	while ( front < rear ) 
	{
		printf("%d \t" ,queue[front]);
		front++;
		rear++;
		queue[rear]=queue[front];
		front++;
	}
	printf("\n");
	return 0;
}

