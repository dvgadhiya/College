/*Write  a  simple  java  application  that  declares  Employee  class.  The  program  should generate and handle custom exceptions such asa.InvalidEmailAddressException if the address does not contain . and @  b.InvalidTelephoneNumberException if total no of digits > 10.*/

class p17
{
	public static void main(String args[])
	{
		Employee e1 = new Employee("Deep", "Deepgmail.com", 9054059106L);
	}
}

class Employee
{
	String name;
	String email;
	long number;
	Employee(String Name, String Email, long Number)
	{	
		int flag = 0;
		for (int i = 0; i < Email.length(); i++)
		{
			if (Email.charAt(i) == '@')
			{
				flag = 1;
			}
		}
		if (flag != 1)
		{
			System.out.println("InvalidEmailAddressException");
			return;
		}
		else if(Number < 1000000000)
		{
			System.out.println("InvalidTelephoneNumberException");
			return;
		}
		else
		{
			this.name = Name;
			this.email = Email;
			this.number = Number;
		}
	}
}
