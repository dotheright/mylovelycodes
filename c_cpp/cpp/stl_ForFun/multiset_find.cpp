#include<iostream>
#include<string>
#include<set>

using namespace std;

int main(int argc, char* argv[])
{
    multiset<string> ms;
    ms.insert("12");
    ms.insert("2");
    ms.insert("5");
    ms.insert("ab");
    ms.insert("8");
    ms.insert("ab");
    ms.insert("37");
    ms.insert("2");


set<string>::iterator it;

it=ms.find("a");
if( it != ms.end()  )
{
    cout<<*it<<endl;
}
else
{
    cout<<"can not find it in \"ms\" "<<endl;
}



for(it=ms.begin();it!=ms.end();it++)
{
    cout<<*it<<"  " ;
}
cout<<endl;

int n =ms.erase("2");
cout<<"total delecte :"<<n<<"   strings"<<endl;
cout<<"after delecte"<<endl;
for(it=ms.begin();it!=ms.end();it++)
{
    cout<<*it<<"  " ;
}
cout<<endl;

    return 0;
}
