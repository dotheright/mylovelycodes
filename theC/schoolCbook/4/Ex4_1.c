//����������rateΪ2.25%������֪����������n����ı���ΪcapitalԪ��
//�Ա�д���򣬼���n�����֮��deposit
#include<math.h>
#include<stdio.h>

int main()
{
    int n;
    double rate=0.0225,capital,deposit;

    printf("Please Enter your capital:\n");
    scanf("%d%*c%lf",&n,&capital);
    deposit=capital*pow(1+rate,n);//pow��������ָ��

    printf("deposit=%lf\n",deposit);
    return 0;
}
/*�������ֹ��Ĵ�������ؽ��Ϊ0.0000��ԭ���Ƕ����ʱ��
   double rate=0.0225,capital,deposit;
    scanf("%d%*c%f",&n,&capital);
      printf("deposit=%f\n",deposit);
      �����ʱ��ȴ��%f��float�͵ĸ�ʽ���
*/
