#include <stdio.h>
int main(void)
{
    int a = 0;
    int b = 0;
    int c = 0;
    long long res = 0;
    
    while ( 3 == scanf("%d %d %d", &a, &b ,&c))
    {
        res += a ;
	res += b ;
	res += c ;
        printf("%lld\n",res);
    }
    return 0;
}

-2147483647  -2147483647 -2147483647
