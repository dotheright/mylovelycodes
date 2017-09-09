#include <stdio.h>

int  main()
{
	int i = 5;
	int j = 6;
	int p = 0;
	int q = 0;

	p = (i++)+(i++)+(i++);
	q = (++j)+(++j)+(++j);

	printf("i=%d,j=%d,p=%d,q=%d \n",i,j,p,q);

	return 0;
}
