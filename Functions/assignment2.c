#include <stdio.h>

void even_or_odd(int);

void even_or_odd(int a)
{

    if (a % 2 == 0)
    {
        printf("%d is even", a);
    }
    else
    {
        printf("%d is odd", a);
    }
}

void main()
{
    int b;
    printf("Enter number\n");
    scanf("%d", &b);
    even_or_odd(b);
}