#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>
int main()
{
  pid_t pid = 0;
  
  pid = fork();
  if(pid < 0)
  {
    printf("\r\nerror line is :%d \r\n",__LINE__);
  }
  else if( 0 == pid)
  {
    printf("\r\n pid:%d line is :%d \r\n",pid,__LINE__);
  }
  else
  {
    printf("\r\n pid:%d line is :%d \r\n",pid,__LINE__);
  }
  return  0;
}