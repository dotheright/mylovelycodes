#include<iostream>
#include<string>

using namespace std;

int main(int argc ,char* argv[])
{
    string s1,s2,s3;
    char sa[100],sb[100],sc[100];

    sscanf("abc 123 pqr"," %s %s %s ",sa,sb,sc );

    s1=sa;
    s2=sb;
    s3=sc;

    cout<<s1<<" "<<s2<<" "<<s3<<" "<<" "<<endl;

    int a,b,c;
    sscanf("1 2 3 "," %d %d %d",&a,&b,&c );
    cout<<a<<" "<<b<<" "<<c<<endl;

    int x,y,z;
    sscanf("4,5$6"," %d,%d$%d ",&x,&y,&z );
    cout<<x<<" "<<y<<" "<<z<<" "<<endl;

    return 0;
}
