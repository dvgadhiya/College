import java.util.Scanner;

class p3
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		String pass;
		System.out.print("Password: ");
		pass = sc.next();
		int cond1,cond2,cond3,i;
		sc.close();
		cond1 = 0;
		cond2 = 0;
		cond3 = 0;
		char[] array = pass.toCharArray();
		char[] a = new char[3];
		a[0] = '#';
		a[1] = '$';
		a[2] = '%';
		if (pass.length() < 8)
		{
			System.out.println("Password is Invalid");
			return;
		}
		for (i = 0; i < pass.length(); i++)
		{
			for (int j = 0; j < 3;j++)
			{
				if (array[i] == a[j])
				{
					cond1 = 1;
					break;
				}
			}
		}
		for (i = 0; i < pass.length(); i++)
		{
			if (Character.isUpperCase(array[i]))
			{
				cond2 = 1;
				break;
			}
		}
		for (i = 0; i < pass.length(); i++)
		{
			if (Character.isDigit(array[i]))
			{
				cond3 = 1;
				break;
			}
		}
		if (cond1 == 1 && cond2 == 1 && cond3 == 1)
		{
			System.out.println("Password is Valid");
		}
		else
		{
			System.out.println("Password is Invalid");			
		}
	}	
}
