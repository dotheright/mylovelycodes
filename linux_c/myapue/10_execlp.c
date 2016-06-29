#include "apue.h"
#include <sys/wait.h>

int main( int input ,char *argv[])
{
	pid_t pid =0;
    char buf[MAXLINE] ={0};
	int  status ;

	printf("%%");
	while ( NULL != fgets(buf,MAXLINE,stdin)) 
	{
	    if( '\n' == buf[strlen(buf)-1] )	
		{ 
			buf[strlen(buf)-1] = '\0' ;
		}
		if ( ( pid = fork()) <0 )
		{
			printf("fork err! \n");
		}
		else if(0 == pid)  //child
		{
             execlp( buf,buf,(char *)0);
		}
		//parent
		if( ( pid = waitpid(pid, &status ,0) )  < 0 )
		{
			printf("%%");
		}

	}
	exit(0);
}
