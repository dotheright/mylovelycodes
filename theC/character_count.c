#include<stdio.h>

int main()
{
	/*int n=0;	

	while((n=getchar())!=EOF)
	++n;
*/
	int n;
	for(n=0;getchar()!=EOF;n++)
	;
	printf("%d",n);

	return 0;
}

