#include <stdio.h>
//WAP to check a number is prime or not
int main()
{
    int num, flag = 0;
    printf("Enter number:\n");
    scanf("%d", &num);
    for (int i = 2; i < (num - 1); i++)
    {
        if (num % i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        printf("%d is not prime\n", num);
    }
    else
    {
        printf("%d is prime\n", num);
    }
    return 0;
}