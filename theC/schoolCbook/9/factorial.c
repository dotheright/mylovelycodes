#include<Stdio.h>
int main()
{
	int n,i;
	long result;
	
	printf("Input n:\n");
	scanf("%d",&n);
	
	result=1;
	for(i=0;i<=n;i++)
	result*=i;
	
	printf("%d!=%ld",n,result);
	
	return 0;
}
