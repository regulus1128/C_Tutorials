#include <stdio.h>

// WAP to calculate a raised to power b using recursion
int power(int, int, int);

int main()
{
    int a, b;
    printf("Enter base: ");
    scanf("%d", &a);
    printf("Enter power: ");
    scanf("%d", &b);
    power(1, a, b);
    // res = power(a, b);
    printf("%d", power(1, a, b));

    return 0;
}

int power(int prod, int a, int b)
{
    if (b == 0)
    {
        return prod;
    }
    prod = prod * a;
    return power(prod, a, b - 1);
}