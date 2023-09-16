/*Create a structure 'emp' with members employee id, employee name, basic salary, DA, HRA and TA. Read information of n number of employees. Do as follows.

a.   Give bonus to all employees using a user-defined function. if gross salary is equal to or less than 2 lakhs, give bonus of Rs. 10,000 else give bonus of Rs. 15,000. Display name and gross salary of all employees.
b.  Create a user-defined function to display information of all employees whose basic salary is below Rs. 25,000.*/

#include <stdio.h>

struct emp{
	int id,basic_sallary,DA,HRA,TA;
	char name[50];

};
typedef struct emp emp;

void bonus (int size, emp base[], float gross[]);
void display(int size, emp base[], float gross[]);

int main (void)
{	
	int size = 10;
	printf("Enter Size: ");
	scanf("%d",&size);
	emp data[size];
	float gross[size];
	for (int i = 0; i < size; i++)
	{
		printf("Enter Name: ");
		scanf("%s",data[i].name);
		printf("Enter Employee_id: ");
		scanf("%d",&data[i].id);
		printf("Enter Basic_sallary: ");
		scanf("%d",&data[i].basic_sallary);
		printf("Enter DA: ");
		scanf("%d",&data[i].DA);
		printf("Enter HRA: ");
		scanf("%d",&data[i].HRA);
		printf("Enter TA: ");
		scanf("%d",&data[i].TA);
		gross[i] = data[i].basic_sallary + (data[i].basic_sallary * data[i].DA / 100.0) + (data[i].basic_sallary * data[i].HRA / 100.0) + data[i].TA;
	}
	bonus(size,data,gross);
	display(size,data,gross);


}

void bonus (int size, emp base[], float gross[])
{
	for (int i = 0; i < size; i++)
	{
		if (gross[i] <= 200000)
		{
			gross[i] += 10000;
		}
		else
		{
			gross[i] += 15000;
		}
	}
	for (int i = 0; i < size; i++)
	{
		printf("Name: %s Gross_Sallary: %f\n",base[i].name,gross[i]);
	}

}
void display(int size, emp base[], float gross[])
{
	for (int i = 0; i < size; i++)
	{
		if (base[i].basic_sallary < 25000)
		{
			printf("Name: %s basic_sallary: %d\n",base[i].name,base[i].basic_sallary);
		}
	}
}

