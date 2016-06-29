/*************************************************************************
	> File Name: list.cpp
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年05月21日 星期六 14时59分31秒
 ************************************************************************/

#include<iostream>
using namespace std;

struct node
{
	 int  num;
	 node *next;
};
class list
{
	node *head;
	public:
	   list()
	   {
		   head =NULL;
	   }

	   void creat (int  *p)
	   {
		    node *s =new node();
			node *q;
			q->next =s;
			for (int  i = 0 ; i<10 ;i++)
			{
				s->num =p[i];
			}
			delete s;
	   }

};
int main()
{
	int *a;
	a =new int[10];
	cout<<"please enter numbers:"<<endl;
	for (int  i =0; i < 10 ;i++)
	{
		a[i] = i;
	}
	list  b ;
	b.creat(a);
	delete a ;
	return 0;
}
