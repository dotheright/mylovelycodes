class usingThis
{
	private int i;
	
	public void set(int i)
	{
		this.i=i;
	}
	public int  get()
	{
		return i;
	}
	
	public usingThis reThis()
	{
		i++;
		return this;
	}
}

public class TestLeaft
{
	public static void main(String[] args)
	{
		usingThis the=new usingThis();
		the.set(10);
		System.out.println(the.reThis().reThis().get());
	}
} 
