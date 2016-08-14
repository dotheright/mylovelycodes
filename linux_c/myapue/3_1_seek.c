#include "apue.h"

int main()
{
    printf("STDIN_FILENO = %d  SEEK_CUR =%d \r\n ",STDIN_FILENO,SEEK_CUR);
    if (-1 == lseek(STDIN_FILENO, 0, SEEK_CUR) ) // lseek 的返回值是偏移量，偏移可能为负数　，所以不能判断是否小于０　而是＝＝　－１
        printf("cannot seek\n");
    else
        printf("seek OK\n");
    exit(0);
}
