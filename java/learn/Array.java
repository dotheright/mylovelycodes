/*************************************************************************
	> File Name: Array.java
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年02月08日 星期一 22时04分51秒
 ************************************************************************/
public  class  Array
{
	public static void main(String []s)
	{
		int a[] = {4,5,6};
		int [] b ={1,2,2,4,5,6,7,8};
       
		b=a;
		b[0]=2333;

		System.out.println("a[0]="+a[0]+"a[1]="+a[1]);
		System.out.println("b[0]="+b[0]+"b[1]="+b[1]);
		System.out.println("b.length="+b.length);
	}
}
