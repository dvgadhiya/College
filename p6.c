/*1) Write a program to implement Quick sort.
2) Write a program to implement Merge sort.*/

#include <stdio.h>
#define SIZE 10

void Quick_sort(int k[], int LB, int UB);
void simple_merge(int k[], int First, int Second, int Third);
void two_way_merge_sort_r(int k[], int Start, int Finish);

int main(void)
{
	int a[SIZE];
	for(int i = 0; i < SIZE; i++)
	{
		printf("Enter Element: ");
		scanf("%d", &a[i]);
	}
	Quick_sort(a, 0, SIZE - 1);
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void Quick_sort(int k[], int LB, int UB)
{
	int Flag = 1;
	if (LB < UB)
	{
		int i = LB;
		int j = UB + 1;
		int key = k[LB];
		
		while (Flag)
		{
			i++;
			while (k[i] < key)
			{
				i++;
			}
			j--;
			while (k[j] > key)
			{
				j--;
			}
			if (i < j)
			{
				int temp = k[i];
				k[i] = k[j];
				k[j] = temp;
			}
			else
			{
				Flag = 0;
			}
		}
		int temp = k[LB];
		k[LB] = k[j];
		k[j] = temp;
		Quick_sort(k, LB, j-1);
		Quick_sort(k, j+1, UB);
	}
	return;
}
