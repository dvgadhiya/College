/*Create a class called Time containing followings:
●Two private data fields Hour and Minute
●No-argument constructor and parameterized constructor
●A method getTime() that asks the user to enter the values of both fields
●A methodahead() which displays which object is ahead from other
●A method add() that performs addition of two objects and returns a third object
●A method showTime() to display time object*/

import java.time.LocalTime;
import java.util.Scanner;
class p7
{
	public static void main(String args[])
	{
		Time t1 = new Time();
		Time t2 = new Time();
		t2.getTime();
		t1.ahead(t1,t2);
		Time t3 = new Time();
		t3 = t1.add(t1,t2);
		t1.showTime();
		t3.showTime();
	}
}

class Time
{
	private int hour;
	private int minute;
	public Time()
	{	
		LocalTime localTime = LocalTime.now();
		this.hour = localTime.getHour();
		this.minute = localTime.getMinute();
	}
	public Time(int h,int m)
	{
		this.hour = h;
		this.minute = m;
	}
	public void getTime()
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter Hour: ");
		this.hour = sc.nextInt();
		System.out.print("Enter Minute: ");
		this.minute = sc.nextInt();
		sc.close();
	}
	public void ahead(Time t1, Time t2)
	{
		if (t1.hour >= t2.hour)
		{
			if (t1.hour == t2.hour && t1.minute > t2.minute)
			{
				System.out.println("t1 is ahead");
			}
			else
			{
				System.out.println("t2 is ahead");
			}
		}
		else
		{
			System.out.println("t2 is ahead");
		}
	}
	public Time add(Time t1, Time t2)
	{
		Time t = new Time();
		t.hour = t1.hour + t2.hour;
		t.minute = t1.minute + t2.minute;
		/*
		if (t.minute >= 60){
			int h = (t.minute / 60) - t.minute % 60;
			t.minute = t.minute % 60;
		}*/
		return t;
	}
	public void showTime()
	{
		System.out.println(hour + " : " + minute);
	}
}
