/*************************************************************************
	> File Name: Student_arr.cpp
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年08月09日 星期二 10时00分41秒
 ************************************************************************/

#include<iostream>
#include<string.h>
using namespace std;

class student
{
private:
	int id;
	char *pname;
	int age;
	float score;
public:
	student(int  i ,char *pch,int age,float score);
	void set(int ,char*,int ,float);
    ~student();
	void printStu()
	{
		cout<<"student No:"<<id<<"name :"<<name<<endl;
		cout<<"age :"<<age<<"score"<<score<<endl;
	}
};
student::student(int i,char *pch,int age,float score)
{
	this->pname = new char[strlen(pch)+1]; 
	if (NULL != this->pname)
	{
		memcpy(this->pname,pch,strlen(pch)+1);
	}
	this->age =age;
	this->score =score;
}
student::~student()
{
	cout<<"destruction ... \n";
	delete this->pname;
}

void student::set(int i,char *name ,int age,float score)
{

	this->id = i ;
	memcpy(this->name,name,sizeof(this->name));
	this->age =age;
	this->score =score;
}

int  main()
{
    student ss;
    return 0;
}
