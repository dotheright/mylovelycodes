
#include<string>
#include<iostream>
#include<algorithm>

using namespace std;

int main( int argc , char* argv[])
{
	string s;
	s="cat dog cat this is my reverse test!";
	cout<<s<<endl;
	reverse( s.begin()+3 , s.end()-5 );

	cout<<s<<endl;
	return 0;
}
