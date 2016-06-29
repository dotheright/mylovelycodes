#include "apue.h"
#include <dirent.h>

int main(int argc,char *argv[])
{
	DIR *dp;
	struct dirent *dirp;
    if( NULL != argv[1])
	{
		dp = opendir(argv[1]);
	}
	else
	{
		dp = opendir(".");
	}
	while(NULL != (dirp =readdir(dp) ))
	{
		printf("%s\n",dirp->d_name);
	}

	printf("test");
	exit(0);
}
