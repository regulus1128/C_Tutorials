#include <stdio.h>
int main()
{
    int num, i = 0, f1 = 0, f2 = 1, sum;
    printf("Enter number of terms:\n");
    scanf("%d", &num);
    printf("The first %d terms(excluding 0 and 1) of the Fibonacci series: %d %d ", num, f1, f2);
    while (i < num)
    {
        sum = f1 + f2;
        printf("%d ", sum);
        f1 = f2;
        f2 = sum;
        i++;
    }

    return 0;
}