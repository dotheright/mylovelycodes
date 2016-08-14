#include<set>
#include<iostream>

using namespace std;

//自定义比较函数myComp,重载“（）”操作符
struct myComp
{
    bool operator() (const int &a,const int &b )
    {
        if(a!=b)
        return a>b;
        else
        return a>b;
    }
};

int main(int argc, char* argv[])
{
    set<int, myComp> s;
    s.insert(12);
    s.insert(2);
    s.insert(5);
    s.insert(56);
    s.insert(8);
    s.insert(45);
    s.insert(37);
    s.insert(2);

    set<int ,myComp>::iterator it;

for(it=s.begin();it!=s.end();it++)
{
    cout<<*it<<"  " ;
}
cout<<endl;

    return 0;
}
