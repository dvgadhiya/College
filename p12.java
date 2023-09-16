/*Write a simple java application that creates a Shape class with two double data members.
The class should have an area method to calculate the area of shape. Inherit two classes
Rectangle and Triangle from Shape class. Demonstrate method overriding & super
keyword. */

class p12 
{
    public static void main(String[] args) 
    {
        Rectangle r1 = new Rectangle(5,10);
        System.out.println("Area: " + r1.getArea());
        Shape s1 = new Shape(5,10);
        System.out.println("Area: " + s1.getArea());
    }
}

class Shape
{
    double a;
    double b;
    Shape(double a, double b)
    {
        this.a = a;
        this.b = b;
    }
    double getArea()
    {
        double s = (a + b);
        double theta = a * b / Math.sqrt((a * a) + (b * b));
        double root = (s - a)  * (s - b) * (s - a)  * (s - b) - (a * b * a * b * Math.cos(2 * theta));
        return Math.sqrt(root);
    }
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

