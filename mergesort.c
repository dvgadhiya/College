#include <stdio.h>
#define SIZE 10

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
	two_way_merge_sort_r(a, 0, SIZE - 1);
	for (int i = 0; i < SIZE; i++)
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
	int middle = Start + (size / 2) - 1;
	two_way_merge_sort_r(k, Start, middle);
	two_way_merge_sort_r(k, middle + 1, Finish);
	simple_merge(k, Start, middle + 1, Finish);
	return;
}

void simple_merge(int k[], int First, int Second, int Third)
{
	int temp[Third - First + 1];
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
		k[First - 1 + x] = temp[x];
	}
	return;
}