
#include<iostream>
#include<deque>

using namespace std;

int main()
{
  deque<int> d;
  d.push_back(1);
  d.push_back(2);
  d.push_back(3);
  d.push_front(10);
  d.push_front(20);
  d.insert(d.begin()+2,88);
  
  cout<<"d:"<<d[0]<<"\t"<<d[1]<<"\t"<<d[2]<<"\t"<<endl;
  return 0;
}
