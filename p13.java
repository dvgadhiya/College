/* Write a simple java application that creates a Shape class with two double data members.
The class should have one abstract method area to calculate the area of shape. Inherit two
classes Rectangle and Triangle from Shape class. Demonstrate runtime polymorphism.
*/

class p13 
{
    public static void main(String[] args) 
    {
        Rectangle r1 = new Rectangle(5,10);
        System.out.println("Area: " + r1.getArea());
        Shape s1 = new Circle(5);
        System.out.println("Area: " + s1.getArea());
    }
}

abstract class Shape
{
    double a;
    double b;
    Shape(double a, double b)
    {
        this.a = a;
        this.b = b;
    }
    Shape(double a)
    {
        this.a = a;
    }
    abstract double getArea();
    
}

class Rectangle extends Shape
{
    Rectangle(double a, double b)
    {
        super(a, b);
    }
    double getArea()
    {
        return a * b;
    }
}

class Circle extends Shape
{
    final double PI = 3.14; 
    Circle(double a)
    {
        super(a);
    }
    double getArea()
    {
        return (PI * a * a);
    }
}