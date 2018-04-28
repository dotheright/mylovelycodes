public class Testequals
{
	public static void main(String[] args)
	{
		Cat c1 = new Cat(1,2,3);
		Cat c2 = new Cat(1,2,3);
		System.out.println(c1==c2);	
		System.out.println(c1.equals(c2));	
		
		String s1 = new String("I am good!");
		String s2 = new String("I am good!"); 
		System.out.println(s1.equals(s2));
		
	}
}

class Cat
{
	int color;
	int heigh,weight;
	
	Cat(int color,int heigh,int weight)
	{
		this.color = color;
		this.heigh = heigh;
		this.weight = weight;
	}
	
	public boolean equals(Object obj)
	{
		Cat c = (Cat)obj;
		
		if(null==c)
		{
			return false;
		}
		else
		{	if(Cat instanceof obj)
			if(this.color==c.color&&this.heigh==c.heigh&&this.weight==c.weight)
			{
				return true;
			}
			return false;
		}
	}
}