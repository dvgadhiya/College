/*Demonstrate the static data field and static method by creating an appropriate class.
Demonstrate this class in the main method by creating different objects., 
[hint: one static data field, one static setter method , one non-static getter method. create two objects, Call the static method using class and one object name. show the impact on value of static data field using second object.]*/

class p10
{
	public static void main(String args[])
	{
		Demo a = new Demo("Krish");
		System.out.println("Initial Value: " + Demo.count);
		Demo.statSetter();
		Demo b = new Demo("Darshan");
		System.out.println("Name: " + b.getName());
		System.out.println("Final Value: " + Demo.count);
	}
}

class Demo
{
	private String name;
	static int count = 0;
	Demo(String name)
	{
		this.name = name;
		count++;
	}
	static void statSetter()
	{
		count = 10;
	}
	String getName()
	{
		return this.name;
	}
}
