#include <stdio.h>
#define SIZE 10

void PUSH(int s[], int *p, int num);
int PEEP(int s[], int *p, int num);
int POP(int s[], int *p);
void DISPLAY(int s[], int *p);

int main(void)
{
    int x;
    int s[SIZE];
    int top = -1;

    while(1)
    {
        int option;
        printf("Enter 1 For PUSH\n");
        printf("Enter 2 For PEEP\n");
        printf("Enter 3 For POP\n");
        printf("Enter 4 For DISPLAY\n");
        printf("Enter 5 For EXIT\n");
        printf("Enter option:");
        scanf("%d",&option);

        switch(option)
        {
            case 1 : //PUSH
                printf("Enter Element: ");
                scanf("%d",&x);
                PUSH(s, &top, x);
                break;

            case 2 : //PEEP
                printf("Enter number of element from top: ");
                scanf("%d",&x);
                PEEP(s, &top, x);
                break;

            case 3 : //POP
                x = POP(s, &top);
                if(x == -1)
                {
                    printf("Stack underflow\n");
                }
                else
                {
                    printf("Element deleted is: %d\n",x);
                }
                break;

            case 4 : //DISPLAY
                if (top == -1)
                {
                    printf("Stack is empty\n");
                }
                else
                {
                    DISPLAY(s, &top);
                }
                break;

            case 5 : // EXIT
                return 404;

        }

    }
}

void PUSH(int s[], int *p, int num)
{
    if ((*p) + 1 > SIZE)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        (*p)++;
        s[*p] = num;
    }
}

int PEEP(int s[], int *p, int num)
{
    if ((*p) - num + 1> SIZE || (*p) - num + 1 < -1)
    {
        return -1;
    }
    else
    {
        return s[(*p) - num + 1];
    }
}

int POP(int s[], int *p)
{
    (*p) --;
    return s[*p + 1];
}

void DISPLAY(int s[], int *p)
{
    for (int i = 0; i <= *p; i++)
    {
        printf("%d \n",s[i]);
    }
    printf("");
}