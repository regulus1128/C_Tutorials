#include <stdio.h>
//Print n natural numbers in decreasing order first(from n till 1) and then in increasing order(from 1 to n)

void decreasingincreasing(int);

int main()
{
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    decreasingincreasing(n);    
    return 0;
}
void decreasingincreasing(int n)
{
    if (n < 1)
    {
        return;
    }
    printf("%d\n", n);
    decreasingincreasing(n - 1);
    printf("%d\n", n);
}
