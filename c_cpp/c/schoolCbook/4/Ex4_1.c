//银行年利率rate为2.25%，并已知存款的期限是n年存款的本金为capital元，
//试编写程序，计算n年后本利之和deposit
#include<math.h>
#include<stdio.h>

int main()
{
    int n;
    double rate=0.0225,capital,deposit;

    printf("Please Enter your capital:\n");
    scanf("%d%*c%lf",&n,&capital);
    deposit=capital*pow(1+rate,n);//pow函数计算指数

    printf("deposit=%lf\n",deposit);
    return 0;
}
/*曾经出现过的错误，输出地结果为0.0000，原因是定义的时候
   double rate=0.0225,capital,deposit;
    scanf("%d%*c%f",&n,&capital);
      printf("deposit=%f\n",deposit);
      输出的时候却是%f，float型的格式输出
*/
