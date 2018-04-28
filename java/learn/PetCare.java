interface Pet
{
	void feed(String food);
	void playWithIt();
}

class Person
{
	String name;

	Person(String name)
	{
		this.name=name;
	}

	String getName()
	{
		return name;
	}
}

class Worker extends Person implements Pet
{
	Worker()
	{
		super("worker");
	}

	public  void feed(String food)
	{
				System.out.println("I feed it "+food);
	}

	public final void playWithIt()
	{
		System.out.println("walk with it!");
	}
}

class Farmer extends Person implements Pet
{
	Farmer()
	{
		super("farmer");
	}

	public void feed(String food)
	{
		System.out.println("I feed him/her last"+food);
	}

	public  void playWithIt()
	{
		System.out.println("in the field");
	}
}

class Politor extends Person implements Pet
{
	Politor()
	{
		super("Politor");
	}
	
	public void feed(String food)
	{
		System.out.println("I feed it meat"+food);
	}

	public void playWithIt()
	{
		System.out.println("beauty clothes!");
	}
}

public class PetCare 
{
	public static void main(String[] args)
	{
		Pet w = new Worker();
		w.feed("rice");
		w.playWithIt();
	}
}
