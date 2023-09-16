/*Design a class named Triangle to represent a Triangle. The class contains:
●Three  double  data  fields  named  a,  b  and  c  specifying  three  sides  of  the  triangle. The default values are 1.
●A no-arg constructor that creates a default triangle.
●A constructor that creates a triangle with the specified values.
●A method named getArea() that returns the area of this triangle.
●A method named getPerimeter() that returns the perimeter.*/
import java.lang.Math;

class p5
{
	public static void main(String[] args)
	{
		triangle t1 = new triangle();
		triangle t2 = new triangle(3,4,5);
		System.out.println("Area of T1 is :" + t1.getArea());
		System.out.println("Perimeter of T1 is :" + t1.getPerimeter());
		System.out.println("Area of T2 is :" + t2.getArea());
		System.out.println("Perimeter of T2 is :" + t2.getPerimeter());
	}
}

class triangle
{
	private double a ;
	private double b ;
	private double c ;
	triangle()//Constructor to create a object with no arguments
	{
		a = 1;
		b = 1;
		c = 1;
	}
	triangle(double m, double n, double o)//Constructor to create a object with arguments
	{
		a = m;
		b = n;
		c = o;
	}
	double getArea()
	{
		double s = (a+b+c) / 2;
		double root = (s)*(s - a)*(s - b)*(s - c);
		return Math.sqrt(root);
	}
	double getPerimeter()
	{
		return a+b+c;
	}


}

