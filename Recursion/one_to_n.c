#include <stdio.h>
// Print numbers from 1 to n using recursion
int display(int i, int num)
{
    if (i > num)
    {
        return 0;
    }
    printf("%d\n", i);

    return display(i + 1, num);
}
int main()
{
    int n, res;
    printf("Enter n: ");
    scanf("%d", &n);
    res = display(1, n);

    return 0;
}