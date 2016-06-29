#include "apue.h"  //包含unistd.h  
//unistd.h 中定义了
#if 0
#define	STDIN_FILENO	0	/* Standard input.  */
#define	STDOUT_FILENO	1	/* Standard output.  */
#define	STDERR_FILENO	2	/* Standard error output.  */
#endif
#define BUFLEN   (4096)

int main(int argc ,char *argv[])
{
    int n  = 0 ;
    char buf[BUFLEN] ={0};
    
    /* Read NBYTES into BUF from FD.  Return the  number read, -1 for errors or 0 for EOF.
    This function is a cancellation point and therefore not marked with   __THROW.  */
    //extern ssize_t read (int __fd, void *__buf, size_t __nbytes) __wur;
	
	
	/* Write N bytes of BUF to FD.  Return the number written, or -1.
     This function is a cancellation point and therefore not marked with    __THROW.  */
    //extern ssize_t write (int __fd, __const void *__buf, size_t __n) __wur;
	while( ( n = read(STDIN_FILENO,buf,BUFLEN) ) > 0)
	{
	      if(n != write(STDOUT_FILENO,buf,n))
	      {
	          err_sys("wirte err!");
	          exit(EXIT_FAILURE);
	      }
	}
	
	if( n < 0)
	{
	    err_sys("read err!");
	    exit(EXIT_FAILURE);
	}
	
	exit(EXIT_SUCCESS);
}


