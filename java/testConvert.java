public class testConvert
{
	public static void main(String []args)
	{
		int i=1,j;
		float f1=0.1f;
		float f2=123;
		long l1=12345678L,l2=88888888888888L;
		double d1=2e20,d2=124;
		byte b1=1,b2=2,b3=(byte)129;
		j=0;
		j=j+10;//j没有初始值
		i=i/10;// 0
		i=(int)(i*0.1);// 0
		
		char c1='a',c2=125;
		byte b=(byte)(b1-b2);
		char c=(char)(c1+c2-1);
		float f3=(float)(f1+f2);
		float f4=(float)(f1+f2*0.1);
		double d=d1*i+j;
		float f=(float)(d1*5+d2);
		System.out.println(f);
		
		
		boolean flag;
		flag=true;
		if(flag)
		{
			System.out.println("boolean is true");
		}
	}
}