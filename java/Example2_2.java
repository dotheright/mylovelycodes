/*************************************************************************
	> File Name: Example2_2.java
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年02月08日 星期一 19时30分28秒
 ************************************************************************/
public class  Example2_2
{
	public static void main(String s[] )
	{
		byte b =12;
		int  i=2200;
		long l=8800;
		float f ;
		double d =123456789.123456789;
        char c ='你';

		b=(byte)i;
		i =(int )l;
		f=(float)d;
       
		System.out.println("b="+b);
		System.out.println("i="+i);
		System.out.println("f="+f);
		System.out.println("c="+(int)c);
		
	}
}
