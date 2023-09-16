/*Write a simple java application that reads marks of five subjects through command line arguments  and  displays  the  average.  The  application  should  generate  an  exception  if marks are not in integer format and out of 0-100.*/

class p16
{
	public static void main(String[] args)
	{
		double average = 0;
		if(args.length != 5)
		{
			System.out.println("Usage: Java p16 marks1 marks2 marks3 marks4 marks5");
			return;
		}
		for (int i = 0; i < args.length; i++)
		{
			try
			{
				int x = Integer.parseInt(args[i]);
			}
			catch(Exception e)
			{
				System.out.println("Marks in any data format other than int are not allowed");
				return;
			}
			int x = Integer.parseInt(args[i]);
			if (x > 100)
			{
				System.out.println("Marks Greater than 100 is not allowed");
				return;
			}
			else if(x < 0)
			{
				System.out.println("Marks less than 0 is not allowed");
				return;
			}
			else
			{
				average += x;
			}
		}
		System.out.println("Average Marks: " + (average / args.length));
	}
}
