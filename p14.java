/*Write a simple java application that creates an interface Shape. The interface declares
read() and show() methods and PI as constant data member. Create classes Rectangle and
Circle that implement a Shape interface. Assume suitable data and member methods.
*/

import java.util.Scanner;

class p14
{
    public static void main(String[] args) 
    {
        Rectangle r1 = new Rectangle(10, 20);
        r1.read();
        r1.show();
        Circle c1 = new Circle(5);
        c1.read();
        c1.show();

    }
}

interface Shape
{
    final double PI = 3.1415;
    void read();
    void show();
}

class Rectangle implements Shape
{
    private double a;
    private double b;
    Rectangle(double a, double b)
    {
        this.a = a;
        this.b = b;
    }
    public void read()
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Length of Side a: ");
        a = sc.nextDouble();
        System.out.print("Enter Length of Side b: ");
        b = sc.nextDouble();
    }
    public void show()
    {
        System.out.println(a + " " + b);
    }
}
class Circle implements Shape
{
    private double r;
    Circle(double r)
    {
        this.r = r;
    }
    public void read()
    {

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Radius: ");
        r = sc.nextDouble();
    }
    public void show()
    {
        System.out.println("Radius: " + r);
        System.out.println("Area: " + (PI * r * r));
    }
}