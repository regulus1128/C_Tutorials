#include <stdio.h>

int fibn(int);
int main()
{
    int n;
    printf("Enter number of terms: ");
    // printf("The first %d terms of the Fibonacci Series is: %d ", n, fibn(n));
    scanf("%d", &n);
    printf("%d", fibn(n));
    return 0;
}

int fibn(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }

    return fibn(n - 1) + fibn(n - 2);
}