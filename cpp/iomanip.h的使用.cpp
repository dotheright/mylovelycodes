#include <iomanip.h>
#include <iostream>
int main()
{
    cout<<12345.0<<endl;//12345
    cout<<setiosflags(ios::scientific)<<12345.0<<endl;//1.234500e+004
    cout<<setprecision(3)<<12345.0<<endl;//1.235e+004
    return 0;
 }
