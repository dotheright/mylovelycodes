
#include<string>
#include<iostream>
using namespace std;

int main( int argc ,char* argv[] )
{
  string s;

  s=s+ '0' ;
  s=s+ 'a' ;
  s=s+ 'b' ;
  s=s+"231";
  s.append("_whenI using append!");
  cout<<s<<endl;
  return 0;
}
