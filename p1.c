#include<stdio.h>
#include<conio.h>
#define N  5
void printAvg(int total[N],int size,char s[N][20]);
void pass(int m1[N],int m2[N],int m3[N],int size,char s[N][20]);
void info(int m1[N],int m2[N],int m3[N],int size,char s[N][20],int rn[N]);

void main()
{

     int x;
     int rollNo[N];
     char name[N][20];
     int marks1[N];
     int marks2[N];
     int marks3[N];
     int total[N];
     int i;
     clrscr();
     printf("Enter the number of students : ");
     scanf("%d",&x);
     for(i = 0; i < x; i++)
     {
	 printf("Enter Roll No : ");
	 scanf("%d",&rollNo[i]);
	 printf("Enter your name : ");
	 scanf("%s",name[i]);
	 printf("Enter marks of physics : ");
	 scanf("%d",&marks1[i]);
	 printf("Enter marks of chemistry : ");
	 scanf("%d",&marks2[i]);
	 printf("Enter marks of maths : ");
	 scanf("%d",&marks3[i]);
	 total[i] +=marks1[i]+marks2[i]+marks3[i];

     }
     printf("Name of the students whose have average marks greater or equal to 60 : \n");
     printAvg(total,x,name);
     printf("Name of the pass students : \n");
     pass(marks1,marks2,marks3,x,name);

     info(marks1,marks2,marks3,x,name,rollNo);
     getch();
}

void printAvg(int total[N],int size,char s[N][20])
{
       int i;
       for(i = 0; i< size; i++)
       {
	   if(total[i]/3 >= 60)
	   {
	       printf("%s\n",s[i]);
	   }
	}

}

void pass(int m1[N],int m2[N],int m3[N],int size,char s[N][20])
{
     int i;

     for(i = 0; i< size; i++)
     {
	  if(m1[i] >= 35 && m2[i] >= 35 && m3[i] >=35)
	  {
	       printf("%s\n",s[i]);
	  }
     }
}

void info(int m1[N],int m2[N],int m3[N],int size,char s[N][20],int rn[N])
{
    int r;
    int i;
    int f;
    f =0;
    printf("Enter Roll no : ");
    scanf("%d",&r);
    for(i = 0; i< size; i++)
    {
	if(r == rn[i])
	{
	  printf("Name of the person : %s\n",s[i]);
	  printf("Physics marks : %d\n",m1[i]);
	  printf("Chemistry marks : %d\n",m2[i]);
	  printf("Maths marks : %d\n",m3[i]);
	  f++;
	}
    }
    if(f ==0)
    {
	printf("Roll no does not exist");
    }
}

