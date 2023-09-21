/*1) Write a program to implement Quick sort.
2) Write a program to implement Merge sort.*/

#include <stdio.h>
#define SIZE 10

void Quick_sort(int k[], int LB, int UB);
void simple_merge(int k[], int First, int Second, int Third);
void two_way_merge_sort_r(int k[], int Start, int Finish);

int main(void)
{
	int a[] = {5,1,3};
	two_way_merge_sort_r(a, 0, 2);
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void two_way_merge_sort_r(int k[], int Start, int Finish)
{
	int size = Finish - Start + 1;
	if (size <= 1)
	{
		return ;
	}
	int middle = Start + size/2 - 1;
	two_way_merge_sort_r(k, Start, middle);
	two_way_merge_sort_r(k, middle + 1, Finish);
	simple_merge(k, Start, middle + 1, Finish);
	return;
}

void simple_merge(int k[], int First, int Second, int Third)
{
	int temp[SIZE];
	int i = First;
	int j = Second;
	int l = 0;

	while (i < Second && j <= Third)
	{
		if (k[i] <= k[j])
		{
			l++;
			temp[l] = k[i];
			i++;
		}
		else
		{
			l++;
			temp[l] = k[j];
			j++;
		}
	}
	if (i >= Second)
	{
		while (j <= Third)
		{
			l++;
			temp[l] = k[j];
			j++;
		}
	}
	else
	{
		while (i < Second)
		{
			l++;
			temp[l] = k[i];
			i++;
		}
	}
	for (int x = 1; x <= l; x++)
	{
		if (temp[x] != 0)
		{
			k[First - 1 + x] = temp[x];
		}
	}
	return;
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
