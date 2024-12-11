#include <stdio.h>

// WAP to calculate a raised to power b using recursion(other method)
int power(int, int);

int main()
{
    int a, b;
    printf("Enter base: ");
    scanf("%d", &a);
    printf("Enter power: ");
    scanf("%d", &b);
    power(a, b);
    // res = power(a, b);
    printf("%d", power(a, b));

    return 0;
}

int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    if (b % 2 == 0)
    {
        return power(a, b / 2) * power(a, b / 2);
    }
    else
    {
        return a * power(a, b / 2) * power(a, b / 2);
    }
}