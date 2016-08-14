/*
*练习指向指针的指针
*/
#include<stdio.h>
int main()
{
	int a=5;
	int *b=&a;
	int **c=&b;
	
	printf("a=%d\tb=%d\tc=%d\n",a,*b,**c);
	
	**c=10;
	
	printf("a=%d\tb=%d\tc=%d\n",a,*b,**c);
	return 0;
}

