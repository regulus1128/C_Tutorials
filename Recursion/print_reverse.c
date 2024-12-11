#include <stdio.h>
// WAP to print first n natural numbers in reverse order

int display(int);

int main()
{
    int n, res;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    res = display(n);
    // printf("The first %d natural numbers are: %d ", n, res);
    return 0;
}

int display(int num)
{
    if (num < 1)
    {
        return num;
    }
    else
    {
        printf("%d\n", num);
        return display(num - 1);
    }
    
}