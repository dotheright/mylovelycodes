public class Casting
{
	public static void main(String[] args)
	{
		Animal a = new Animal("Animal");
		Animal d = new Dog("Dog","furBlack");
		Cat c = new Cat("Cat","eyeBlue");
	}
}

class Animal
{
	public String name;
	Animal(String name)
	{
		this.name=name;
	}
}

class Cat extends Animal
{
	public String eyeColor;
	Cat(String name,String eyeColor)
	{
		super(name);
		this.eyeColor=eyeColor;
	}
}

class Dog extends Animal
{
	public String furColor;
	Dog(String name,String furColor)
	{
		super(name);
		this.furColor=furColor;
	}
}