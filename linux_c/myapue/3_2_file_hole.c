/*************************************************************************
	> File Name: 3_2_file_hole.c
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年07月06日 星期三 14时15分43秒
 ************************************************************************/
#include"apue.h"
#include <fcntl.h>
#include<stdio.h>
char buf1[] ="qwrefrwqef";
char buf2[] ="wasdkfafewa";

int main()
{
	int  fd =0;
	size_t len = 0;
	
	fd = creat("file.hole",FILE_MODE);
	if(fd < 0)
		err_sys("creat error!");
	
	if (sizeof(buf1) != write(fd,buf1,sizeof(buf1)))
		err_sys(" write failed");
    
	if ( -1 == lseek(fd,1024,SEEK_SET) )
		err_sys("lseek failed");

	len =write(fd,buf2,sizeof(buf2));
	if (len !=sizeof(buf2) )
		err_sys("write2 failed");
	return 0;
}

