#include <stdio.h>
//There are n stairs. A person wants to reach the top and he/she can climb either 1 or 2 or 3 stairs at a time. Count the number of ways the person can reach the top.
int staircase(int n)
{
    if (n <= 2)
    {
        return n;
    }
    if (n == 3)
    {
        return n + 1;
    }
    return staircase(n - 1) + staircase(n - 2) + staircase(n - 3);
}
int main()
{
    int steps;
    printf("Enter number of steps: ");
    scanf("%d", &steps);
    printf("Number of ways: %d", staircase(steps));
    return 0;
}