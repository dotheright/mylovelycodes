/*
 * input the all  card number 
 * drop the first 
 * put the new first card in the end
 * out put the drop num;
 */
#include <stdio.h>
#include <stdlib.h>

#define ERR 1
#define OK 0

typedef struct tagstQueue
{
	int iValue;
	stQueue * pnext;
}stQueue;

int main()
{
	int card_num = 0 ;
	stQueue * pstQueue = NULL;
	int  i = 0 ;

	scanf("%d",&card_num);
	pstQueue = (stQueue *)malloc((card_num+1)*sizeof(stQueue));/* Add A tail */
	if( NULL == pstQueue)
	{
		return ERR;
	}
	for ( i = 0 ; i < card_num ;i++ )
	{
		pstQueue[i].iValue =i+1;
		pstQueue[i].pnext = &pstQueue[i+1];
	}
	pstQueue[card_num-1].pnext = &pstQueue[0];


}
