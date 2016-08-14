/*************************************************************************
	> File Name: cpu.cpp
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年06月29日 星期三 23时15分43秒
 ************************************************************************/

#include<iostream>
using namespace std;
enum CPU_Rank{p1=1,p2,p3,p4,p5,p6,p7};

class  CPU
{
private:
	CPU_Rank rank;
	int frequency;
	float voltage;

public:
	CPU( CPU_Rank r ,int f , float v)
	{
		rank =r;
		frequency =f;
		voltage =v;
		cout <<"构造了一个　ＣＰＵ"<<endl;
	}
	
	~CPU()
	{
		cout <<"析构了一个ＣＰＵ"<<endl;
	}
	
	CPU_Rank GetRank()
	{
		return  rank;
	}
	int  GetFrequency()
	{
		return frequency;
	}
	float GetVoltage()
	{
		return voltage;
	}
	
	void SetRank(CPU_Rank rank)
	{
		this->rank = rank; //this -> is  a  point!!
	}
	void SetFrequency( int frequency)
	{
		this->frequency =frequency;
	}
	void SetVoltage(float voltage)
	{
		this->voltage =voltage;
	}

	void run()
	{
		cout<<"cpu run"<<endl;
	}
	void stop()
	{
		cout<<"cpu stop"<<endl;
	}
};

int  main()
{
	CPU myCpu((CPU_Rank)2,1000,5.5); // class name object name　(init list);

	myCpu.run();
	myCpu.stop();
    return 0;
}
