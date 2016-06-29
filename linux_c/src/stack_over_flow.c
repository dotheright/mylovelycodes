#include <string.h>
void overflow(char *arg)
{
	char szbuf[12];
	strcpy (szbuf,arg);
}
int main (int argc ,char *argv[] )
{
	if ( argc >1 )
	{
		overflow( argv[1] );
	}
	return 0;
}
