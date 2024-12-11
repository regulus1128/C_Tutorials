#include <stdio.h>
//WAP to calculate a raised to power b using loops
int main()
{
    int a, b, prod = 1;
    printf("Enter base: ");
    scanf("%d", &a);
    printf("Enter power: ");
    scanf("%d", &b);
    for (int i = 0; i < b; i++)
    {
        prod = prod * a;
    }
    printf("%d raised to the power of %d is %d", a, b, prod);

    return 0;
}