public class TestFor
{
	public static void main(String [] args)
	{
		int i ,r = 1,f = 0;
		for(i=1 ; i<=10 ;i++)
		{
			r *= i;
			f += r;
		}
		//�ӿ���
		System.out.println(f);
	}
}