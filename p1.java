import java.util.Scanner;

class p1
{
	public static void main(String args[])
	{
		float a,b,sum;
		char c;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a: ");
		a = sc.nextInt();
		System.out.print("Enter b: ");
		b = sc.nextInt();
		System.out.print("Enter Operator:");
		c = sc.next().charAt(0);
		switch (c)
		{
			case '+':
				sum = a + b;
				System.out.println(a + " + " + b +" = " + sum);
				break;
			case '-':
				sum = a - b;
				System.out.println(a + " - " + b +" = " + sum);
				break;
			case '*':
				sum = a * b;
				System.out.println(a + " * " + b +" = " + sum);
				break;
			case '/':
				sum = a / b;
				System.out.println(a + " / " + b +" = " + sum);
				break;
			case '%':
				sum = a % b;
				System.out.println(a + " % " + b +" = " + sum);				
				break;
			default:
				System.out.println("Enter Valid Case");
		}
		sc.close();
	}	
}
