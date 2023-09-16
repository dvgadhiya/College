class p4
{
	public static void main(String args[])
	{
		int fact = 1;
	0
		int x = Integer.parseInt(args[0]);
		for (int i = 1; i <= x; i++)
		{
			fact = fact * i;
		}
		System.out.println(fact);
		int fact1 = fact(x);
		System.out.println(fact1);
	}
	static int fact (int x)
	{
		if(x == 1 || x == 0)
		{
			return 1;
		}
		else
		{
			int temp = x * fact(x-1);
			return temp;
		}

	}
}
