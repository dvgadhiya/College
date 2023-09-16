/*Write  a  simple  java  application  that  creates  a  Player  class.  Inherit  CricketPlayer  class from Player class. Inherit Batsman &Bowler classes from CricketPlayer class. Assume suitable data and member methods.*/

class p11
{
	public static void main(String args[])
	{
		Batsman b1 = new Batsman("Deep", 10, 250, 51.1);
		Bowler b2 = new Bowler("Nevil", 10, 20,7.2);
		System.out.println(b1.name + " " + b1.catches + " " + b1.runs);
		System.out.println(b2.name + " " + b2.catches + " " + b2.wickets);
	}
}

class Player
{
	String name;
	Player(String name)
	{
		this.name = name;
	}
}

class CricketPlayer extends Player
{
	int catches;
	CricketPlayer(String name, int c)
	{
		super(name);
		this.catches = c;
	}
}

class Batsman extends CricketPlayer
{
	int runs;
	double average;
	Batsman(String name, int c, int runs, double average)
	{
		super(name, c);
		this.runs = runs;
		this.average = average;
	}
}

class Bowler extends CricketPlayer
{
	int wickets;
	double economy;
	Bowler(String name, int c, int wickets, double economy)
	{
		super(name, c);
		this.wickets = wickets;
		this.economy = economy;
	}
}
