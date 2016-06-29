#include<stdio.h>
#define SUB(x,y) (x-y)
#define ACCESS(element,offset,value) *SUB(&element,offset) =value

int  main()
{
	int  i = 0 ;
	int  array[10] ={1,2,3,4,5,6,7,8,9,10};
    
	//*&array[5];
	ACCESS(array[5],4,6) ;

	for(i = 0 ; i < 10 ;++i)
	{

	   printf("%d " ,array[i]);
	}
	printf("\r\n");

	return 0 ;
}
