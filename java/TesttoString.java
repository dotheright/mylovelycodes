public class TesttoString
{
	public static void main(String[] args)
	{
		Dog d = new Dog();
		System.out.println(":"+d);
	}
}

class Dog
{
	public String toString() //¥”DOc¿ÔtoString£®£©¿ÔøΩ±¥ public String toString()
	{
		return "I am a cool dog!";
	}
}