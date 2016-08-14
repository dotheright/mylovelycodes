#include<string>
#include<iostream>
#include<stdio.h>
using namespace std;

int main( int argc , char* argv[])
{
	string s;
	char ss[100];
	scanf("%s",&ss);
	s=ss;
	
	cout<<"printf(s.c_str());"<<endl;
	printf( s.c_str() );
	cout<<endl;
	
	cout<<"printf(\"%s\",ss);"<<endl;
	printf("%s",ss);
	cout<<endl;
	
	cout<<s<<endl;
	cout<<ss<<endl;
	return 0;
}
