/*Write a program to implement QUEUE using arrays that performs following operations
(a) INSERT (b) DELETE (c) DISPLAY */
#include <stdio.h>

#define SIZE 10

void PUSH(int q[], int *p, int num);
int POP(int q[], int *front, int *rear);
void DISPLAY (int q[], int front, int rear);

int main (void)
{
    int front, rear, queue[SIZE];
    front = 0;
    rear = - 1;
    int num;

    while (1)
    {
        int option;
        printf("Enter 1 for insert\n");
        printf("Enter 2 for delete\n");
        printf("Enter 3 for display\n");
        printf("Enter 4 for exit\n");
        scanf("%d",&option);

        switch(option)
        {
            case 1:
                printf("Enter Number: ");
                scanf("%d",&num);
                PUSH(queue, &rear, num);
                break;
            
            case 2:
                num = POP(queue, &front, &rear);
                break;
            case 3:
                DISPLAY(queue, front, rear);
                break;
            case 4:
                return 0;
        }
    }
}

void PUSH (int q[], int *rear, int num)
{
    if (*rear > SIZE)
    {
        printf("Queue is full\n");
    }
    (*rear)++;
    q[*rear] = num;
}

int POP(int q[], int *front, int*rear)
{
    if (*front == *rear)
    {
        *front = -1;
        *rear = -1;
    }
    if (*front > *rear || *front == *rear)
    {
        printf("No elements present\n");
        return 100;
    }
    (*front)++;
    return q[( *front)  - 1];
}

void DISPLAY (int q[], int front, int rear)
{
    printf("Content of stack are:\n");
    for (int i = front; i <= rear; i++ )
    {
        printf("%d\n",q[i]);
    }
}