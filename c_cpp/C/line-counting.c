#include <stdio.h>
#include <stdlib.h>

int main(char argc ,char * argv[])
{
	FILE *in,*out;
	if( ( in=fopen(argv[1],"r")==NULL ) )
	{
		printf("Couldn't open thefile \" %s \"\n ", argv[1]);
		exit(1);
	}
	int c,nl;

	nl=0;
	while( (c=getc(in)) != EOF )
	if (c=='\n')
	++nl;

	printf("%d", nl);

	return 0;
}
