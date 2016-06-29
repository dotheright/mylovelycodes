/*#include<stdio.h>

int main()
{
    int icount=0;
    int x;

    scanf("%d",&x);
	
    while( x )
    {
        icount++;
        x=x&(x-1);
    }

	printf("%i\n",icount);
	return 0;
}
*/
//scanf("%d\n",&x);
//没有函数化的习惯

#include <iostream>
using namespace std;

int count1(int n); 

int main()
{
	cout<<count1(9999)<<endl;

	return 0;
}

int count1(int n)
{
	int icount=0;

	while (n)
	{
		icount++;
		n=n&(n-1);
	}

	return icount;
}
