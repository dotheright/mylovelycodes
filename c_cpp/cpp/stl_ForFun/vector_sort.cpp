#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(int argc,char* argv[])
{
    vector<int> v(10);

    //��������ֵ
    for(int i=0;i<10;i++)
    {
        v[i]=9-i;
    }

    //�����������
    vector<int>::iterator it;
   for(it=v.begin();it!=v.end();it++)
{
    //����������ϵ�Ԫ��ֵ
    cout<<*it<<" ";
}
cout<<endl;

    sort( v.begin() , v.end() );



for(it=v.begin();it!=v.end();it++)
{
    //����������ϵ�Ԫ��ֵ
    cout<<*it<<" ";
}
cout<<endl;

v.clear();
cout<<v.size()<<endl;

    return 0;
}
