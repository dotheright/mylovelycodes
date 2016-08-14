#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(int argc, char* argv[])
{
	map< int , char > m;

	int j;
	for(j=0;j<10;j++)
	{
		m[j]='0'+j;
	}
	
	int n=7;
	string sn;
	sn="this number is ";

	cout<<sn+m[n]<<endl;


	
	return 0;
}
