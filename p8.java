/*Write a simple java application that defines a class Complex with real(int) and img(int) as data fields, no-argument constructor and parameterized constructor. The class should have  overloaded  methods  to  perform  addition  of  two  Complex  numbers  by  passing objects as arguments. Demonstrate this keyword in a parameterized constructor*/

class p8
{
	public static void main(String args[])
	{
        	Complex num1 = new Complex();
	        Complex num2 = new Complex(2, 5);
	        Complex num3 = new Complex(0, 0);
			num3.add(num1, num2);
	        Complex num4 = new Complex();
	        num4.add(num1, num2);
	        System.out.println(num3.getReal() + " + " + "i" + num3.getImg());
	}

}
class Complex
{
	private int real;
	private int img;
	Complex()
	{
		this.real = 1;
		this.img = 1;
	}
	Complex(int real, int img)
	{
		this.real = real;
		this.img = img;
	}
	Complex add(Complex a1)
	{
		Complex c1 = new Complex();
		c1.real = this.real + a1.real;
		c1.img = this.img + a1.img;
		return c1;
	}
	void add(Complex a1, Complex a2)
	{
		this.real = a1.real + a2.real;
		this.img = a1.img + a2.img;
	}
	int getReal()
	{
		return this.real;
	}
	int getImg()
	{
		return this.img;
	}
}

