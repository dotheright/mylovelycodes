#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main ( int argc ,char * argv[])
{
    vector<int> v(10);
    int i=0;
    for(i=0;i<10;i++)
    {
        v[i]=i;
    }
    cout<<"before clear size: "<<v.size()<<endl;
    v.clear();
     cout<<"after clear size: "<<v.size()<<endl;
    cout<<"empty: "<<v.empty()<<endl;
    return 0;
}
