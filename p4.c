#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 100

char NEXTCHAR(char INFIX[], int *p);
void PUSH(char s[], int *p, char next);
char POP(char s[], int *p);
int F(char a);
int G(char a);
int R(char a);

int main(void)
{
	//[Initialize Stack]
	char s[SIZE], INFIX[SIZE], POSTFIX[SIZE], next;
	int top = 0; //Stack pointer
	int rank = 0; // rank of post fix equation;
	int c_i = 0;
	int c_p = 0;
	s[top] = '(';
	printf("Enter Equation: ");
	scanf("%s", INFIX);
	next = NEXTCHAR(INFIX, &c_i);
	int s1 = strlen(INFIX);
	//setting every charcter of postfix equation to null.
	/*
	for (int i = 0; i < SIZE; i++)
	{
		POSTFIX[i] = '\0';
	}*/
	POSTFIX[s1 -1] = '\0';

	while (next != '\0')
	{
		if ( top < 0)
		{
			printf("Invalid\n");
			return 0;
		}
		while (G(s[top]) > F(next))
		{
			char temp = POP(s, &top);
			POSTFIX[c_p] = temp;
			rank += R(temp);
			c_p++;
			if (rank < 1)
			{
				printf("Invalid\n");
			}
		}
		if (G(s[top]) != F(next))
		{
			PUSH(s, &top, next);
		}
		else
		{
            if ( top != 0)
            {
                POP(s, &top);
            }
		}
		next = NEXTCHAR(INFIX, &c_i);
	}
	if (top != 0 || rank != 1)
	{
		printf("Invalid\n");
	}
	else
	{
        printf("%s\n", POSTFIX);
		printf("Valid\n");
	}
}
char NEXTCHAR(char INFIX[], int *p)
{
	(*p)++;
	return INFIX[(*p) - 1];
}
void PUSH(char s[], int *p, char next)
{
    if ((*p) + 1 > SIZE)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        (*p)++;
        s[*p] = next;
    }
}

char POP(char s[], int *p)
{
	if (*p < 0)
	{
		printf("Stack Underflow\n");
		return ' ';
	}
    (*p) --;
    return s[*p + 1];
}

int F(char a)
{
	if (a == '+' || a == '-')
	{
		return 1;
	}
	else if (a == '*' || a == '/')
	{
		return 3;
	}
	else if (a == '^')
	{
		return 6;
	}
	else if (isalpha(a))
	{
		return 7;
	}
	else if (a == '(')
	{
		return 9;
	}
	else if (a == ')')
	{
		return 0;
	}
	else
	{
		printf("Error1\n");
		return 100;
	}
}
int G(char a)
{
	if (a == '+' || a == '-')
	{
		return 2;
	}
	else if (a == '*' || a == '/')
	{
		return 4;
	}
	else if (a == '^')
	{
		return 5;
	}
	else if (isalpha(a))
	{
		return 8;
	}
	else if (a == '(')
	{
		return 0;
	}
	else
	{
		printf("Error2\n");
		return 100;
	}
}
int R(char a)
{
	if (a == '+' || a == '-')
	{
		return -1;
	}
	else if (a == '*' || a == '/')
	{
		return -1;
	}
	else if (a == '(')
	{
		return -1;
	}
	else if (isalpha(a))
	{
		return 1;
	}
	else
	{
		printf("Error3\n");
		return 100;
	}
}
