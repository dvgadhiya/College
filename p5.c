#include <stdio.h>
#define SIZE 5
int BinarySearch(int list[], int target);
void BubbleSort(int list[]);

int main (void)
{
    int array[SIZE],target;
    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter Element: ");
        scanf("%d",&array[i]);
    }
    BubbleSort(array);
    printf("Enter Element to be searched: ");
    scanf("%d",&target);
    int index = BinarySearch(array, target);
    if (index == -1)
    {
        printf("Element not Found!\n");
    }
    else
    {
        printf("Element Found at Position: %d\n", index);
    }
}

int BinarySearch(int list[], int target)
{
    int left = 0;
    int right = SIZE;
    int mid = (left + right / 2);

    while (left <= right)
    {
        //checks weather middle element is same as target or not
        if (list[mid] == target)
        {
            return mid + 1;
        }
        else if(list[right] == target)//imporves time complexity
        {
            return right + 1;
        }        
        else if(list[left] == target)//imporves time complexity
        {
            return left + 1;

        }else if(list[mid] < target)//if mid element is smaller than target then element must on right side of current middle element.
        {
            left = mid + 1;
        }
        else //if mid element is larger than target then element must on left side of current middle element.
        {
            right = mid - 1;
        }
        mid = (left + right) / 2;
    }
    return -1;
}

void BubbleSort(int list[])
{
    for (int i = 0; i < SIZE; i++)
    {
        // "Swaps" keeps count of num of swaps, if it 0 for a given iteration it can be concluded that array is sorted.
        int swaps = 0;
        for (int j = 0; j < SIZE - 1 - i; j++)
        {
            //performs swap if succeding element is smaller than current element.
            if (list[j] > list[j + 1])
            {
                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
                swaps++;
            }
        }
        if (swaps == 0)
        {
            return;
        }
    }
}

