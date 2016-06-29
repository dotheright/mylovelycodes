//字符输入输出，getchar(),与putchar()的使用
//getchar()是从键盘读一个字符，等待回车然后按回车结束输入；格式：变量=getchar();
//puchar()是把字符写到当前光标的位置，                                     格式：putchar(变量);
#include<stdio.h>
int main()
{
    char ch;
                       //知道这是干嘛吗？空行用于增加程序的可读性和结构的清晰性

    printf("press a key and then press Enter: ");
    ch=getchar(); //从键盘中输入一个字符，按回车键结束输入，该字符会被存入变量ch
///////如果你输多了，他只看最后一个
    printf("you pressed ：");
    putchar(ch);         //在屏幕上显示ch中的字符
    putchar('\n');         //换行
}
