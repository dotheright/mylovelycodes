#include <numeric>
#include <list>
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{

 int ia[] = {1, 2, 3, 4};
 std::list<int> ilist(ia, ia + 4);
 int ia_result = accumulate(&ia[0], &ia[4], 0);
 int ilist_result = accumulate(ilist.begin(), ilist.end(), 0, std::plus<int>());

 cout<<ia_result<<endl;
 cout<<ilist_result<<endl;

 system("pause");
 return 0;
}

