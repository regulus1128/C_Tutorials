#include <stdio.h>
#include <math.h>

void power(int, int);

int main()
{
    int a, b;
    printf("Enter base and exponent: ");
    scanf("%d %d", &a, &b);
    power(a, b);
    return 0;
}

void power(int x, int y)
{
    int result;
    result = pow(x, y);
    printf("%d raised to power %d is %d", x, y, result);
}
