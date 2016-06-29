#include"genlib.h"
#include<iostream>
#include<fstream>
#include"simpio.h"
void CountLines(ifstream &in)
{
	int count =0;
	while(true)
	{
		
	}
	
}
int main()
{
	ifstream in;
	
	cout<<"Enter name :";
	string s=Getline();
	in.open(s);
	if(in.fail())
	Error("file didn't open");
	return 0;
}
