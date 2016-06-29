#include<iostream>
#include<set>

using namespace std;

int main(int argc, char* argv[])
{
    set<int> s;
    s.insert(12);
    s.insert(2);
    s.insert(5);
    s.insert(56);
    s.insert(8);
    s.insert(45);
    s.insert(37);
    s.insert(2);

set<int>::iterator it;
for(it=s.begin();it!=s.end();it++)
{
    cout<<*it<<"  " ;
}
cout<<endl;
    return 0;
}
