#include "apue.h"
#include <dirent.h>
lsl

int main(int argc ,char *argv[])
{
	int iRet = 0;
	DIR *pdir =NULL;   // DIR 的定义从哪里找
    struct dirent *pdirent =NULL;  // struct dirent 的定义从哪里找
    
	if( 2 != argc )
	{
		err_quit("usage: ls director name");
	}
    
    //这里使用API 中的函数可以读 API 中的注释
    // dirent.h :: extern DIR *opendir (__const char *__name) __nonnull ((1)); 
	if(NULL == (pdir = opendir (argv[1]))) 
	{
		err_sys("can't open %s ", argv[1]);
	}
	//这里使用API 中的函数可以读 API 中的注释
	//extern struct dirent *readdir (DIR *__dirp) __nonnull ((1)); 
	while ( NULL != (pdirent = readdir(pdir)))
	{
		printf("%s\n",pdirent->d_name);
	}
    //extern int closedir (DIR *__dirp) __nonnull ((1));
	
	iRet = closedir(pdir);

	
	// 遵循着  打开 －> 使用 －>关闭  的原则
    if( 0 == iRet )
    {
        exit( EXIT_SUCCESS ); // c 参数 0 的涵义是正常结束  EXIT_SUCCESS  0 seccessful status
    }
    else
    {
        exit( EXIT_FAILURE ); // 参数 1 的涵义是异常结束 failing status;
    }

	
}


