#include<set>
#include<iostream>
#include<string>

using namespace std;

struct Info
{
	string name;
	float score;
	bool operator < (const Info &a) const
	{
	return a.score<score;
	}
};
int main()
{
set<Info> s;
Info info;
info.name="zhang";
info.score=86.1;
s.insert(info);
info.name="yang";
info.score=88.3;
s.insert(info);
info.name="liang";
info.score=88.1;
s.insert(info);
set<Info>::iterator it;
for(it=s.begin();it!=s.end();it++)
{
	cout << (*it).name<<":"<<(*it).score<<endl;
}
cout<<endl;

return 0;

}
