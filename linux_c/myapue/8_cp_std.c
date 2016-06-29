#include "apue.h"  //包含stdio.h



int main(int argc ,char *argv[])
{
    int  c = 0; 
    
	while( ( c = getc(stdin) ) != EOF )
	{
	      if( EOF == putc(c,stdout) )
	      {
	          err_sys("wirte err!");
	          exit(EXIT_FAILURE);
	      }
	}
	
	if( ferror (stdin))
	{
	    err_sys("read err!");
	    exit(EXIT_FAILURE);
	}
	
	exit(EXIT_SUCCESS);
}

