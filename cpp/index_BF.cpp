#include<iostream>
using namespace std;
int main()
{
    int p;
    char S[20],T[10];
    cout<<"please input character S :\n";
    cin>>S[20];
    cout<<" and its subsrting T:\n";
    cin>>T[10];
    int Index_BF ( char S [20], char T [10], int p );
    return 1;
}

int Index_BF ( char S [20], char T [10], int pos )
{
/* 若串 S 中从第pos(S 的下标0≤pos<StrLength(S))个字符
起存在和串 T 相同的子串，则称匹配成功，返回第一个
这样的子串在串 S 中的下标，否则返回 -1    */
int i = pos, j = 0;
while ( S[i+j] != '\0'&& T[j] != '\0')
if ( S[i+j] == T[j] )
j ++; // 继续比较后一字符
else
{
i ++; j = 0; // 重新开始新的一轮匹配
}
if ( T[j] == '\0')
return i; // 匹配成功   返回下标
else
return -1; // 串S中(第pos个字符起)不存在和串T相同的子串
} // Index_BF
