#include<stdio.h>
/*print Fahrenheit-celsius table for fahr=0,20,40,...,300;
*/
main()
{
	float f ,c;
	int lower, upper,step;

	lower=0;
	upper=300;
	step=20;
	
	f=lower;

	while(f<upper)
	{
		c=(5/9.0)*(f-32);
		printf("%f\t%f\n",f,c);
		f=f+step;
	}
}
