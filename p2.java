import java.util.Scanner;

class p2
{
	public static void main(String args[])
	{
		int size;
		int i, j;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter size: ");
		size = sc.nextInt();
		int a[] = new int[size];
		for (i = 0; i < size; i++)
		{
			System.out.print("Enter number: ");
			int temp = sc.nextInt();
			a[i] = temp;
		}
		for (j = 0; j < size - 1; j++)
		{	
			for (i = 1; i < size - j; i++)
			{
				if (a[i-1] > a[i])
				{
					int temp = a[i-1];
					a[i-1] = a[i];
					a[i] = temp;
				}
			}
		}
		System.out.print("Sorted Array:" );
		for (i = 0; i < size; i++)
		{
			System.out.print(" " + a[i]);
		}
		System.out.println(" ");
	}
		
}
