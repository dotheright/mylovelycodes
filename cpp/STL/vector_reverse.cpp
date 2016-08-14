#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(int argc,char* argv[])
{
    vector<int> v(10);

    //给向量赋值
    for(int i=0;i<10;i++)
    {
        v[i]=i;
    }
    //反先排序向量从头第二个到尾倒数第一个元素
    reverse(v.begin()+2,v.end()-1);
//定义迭代变量
vector<int>::iterator it;

for(it=v.begin();it!=v.end();it++)
{
    //输出迭代器上的元素值
    cout<<*it<<" ";
}
cout<<endl;

v.clear();
cout<<v.size()<<endl;

    return 0;
}
