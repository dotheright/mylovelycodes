#include<string>
#include<iostream>

using namespace std;

int main( int argc , char* argv[])
{
	string s;
	s="123456789";
	int i=0;
	int sum=0;
	
	for(i=0;i<s.length();i++)
	{
		switch(s[i])
		{
		case '0': 	sum+=0;break;
		case '1': 	sum+=1;break;
		case '2': 	sum+=2;break;
		case '3': 	sum+=3;break;
		case '4': 	sum+=4;break;
		case '5': 	sum+=5;break;
		case '6': 	sum+=6;break;
		case '7': 	sum+=7;break;
		case '8': 	sum+=8;break;
		case '9': 	sum+=9;break;
		}		
	}
	
	cout<<sum<<endl;
	return 0;
}
