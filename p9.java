/*Write   a   simple   java   application   that   defines   a   class   Student   with   roll_no(int), name(String),  address(String)  &  branch(String)  as  data  fields.  The  class  should  have getData() &  showData()  methods.  The  program  should  create  an  array  of  Student objects, get the details and display it. Create branchDisplay(student[] s) static method to display all objects having computer branch.*/

import java.util.Scanner;

import test.Student;

class p9
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		Student[] s = new Student[2];
		
		for (int i = 0; i < 2; i++)
		{
			System.out.print("Enter Roll No: ");
			int roll_no = sc.nextInt();
			System.out.print("Enter Name: ");
			String name = sc.next();
			System.out.print("Enter Address: ");
			String address = sc.next();
			System.out.print("Enter Branch: ");
			String branch = sc.next();
			s[i] = new Student(roll_no, name, address, branch);
		}
		sc.close();
		
		for (int i = 0; i < 2; i++)
		{
			s[i].showData();
		}
		Student.branchDisplay(s);
		Student.showCount();
		Student s1 = s[1].getData();
		s1.showData();
	}
}

class Student
{
	private int roll_no;
	private String name;
	private String address;
	private String branch;
	private static int count = 0; 
	Student(int roll_no, String name, String address, String branch)
	{
		this.roll_no = roll_no;
		this.name = name;
		this.address = address;
		this.branch = branch;
		count++;
	}
	Student getData()
	{
		return this;
	}
	
	void showData()
	{
		System.out.println("Roll No: " + roll_no + " " +"Name: " + name + " " + "Address: " + address + " " + "Branch: " + branch);
	}
	static void showCount()
	{
		System.out.println("Total No. of Objects created: " + count);
	}
	static void branchDisplay(Student[] s)
	{
		for (int i = 0; i < count; i++)
		{
			if (s[i].branch.equals("CO"))
			{
				s[i].showData();
			}
		}
	}
}
