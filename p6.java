/*Design a class named StopWatch. The class contains:
●Private data fields startTime and endTime with getter methods.
●A no-argconstructor that initializes startTime with the current time.
●A method named start() that resets the startTime to the current time.
●A method named stop() that sets the endTime to the current time.
●A method named getElapsedTime() that returns the elapsed time for the stopwatch in milliseconds*/
import java.util.Scanner;

class p6
{
	public static void main(String args[])
	{
		Stopwatch s1 = new Stopwatch();
		s1.start();
		Scanner sc = new Scanner(System.in);
		String a = sc.next();
		s1.stop();
		System.out.println(s1.getElapsedTime());
		sc.close();
	}
}

class Stopwatch
{
	private long startTime;
	private long endTime;
	Stopwatch()
	{
		this.startTime = System.currentTimeMillis();
	}
	public void start()
	{
		this.startTime = System.currentTimeMillis();
	}
	public void stop()
	{
		this.endTime = System.currentTimeMillis();
	}
	long getElapsedTime()
	{
		return this.endTime - this.startTime;
	}
}