// write a function to find the greatest of three numbers entered by the user.(no argument, with return type)

#include <stdio.h>

int greatestnum(void);

int greatestnum(void)
{
    int a, b, c;
    printf("Enter 3 numbers\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else if (c > a && c > b)
    {
        return c;
    }
}

void main()
{
    int x;
    x = greatestnum();
    printf("%d is largest", x);
}