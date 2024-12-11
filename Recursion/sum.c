#include <stdio.h>
//WAP to find sum of n natural numbers using recursion

int sum(int);

int main()
{
    int num, result;
    printf("Enter number of terms: ");
    scanf("%d", &num);
    result = sum(num);
    printf("The sum of first %d natural numbers is %d\n", num, result);
    return 0;
}

int sum(int num)
{
    if (num < 1)
    {
        return 0;
    }
    else
    {
        return (num + sum(num - 1)); 
    }
}