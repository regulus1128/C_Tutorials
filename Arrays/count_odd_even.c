// WAP to count number of odd and even integers entered by the user in an array
#include <stdio.h>

int main()
{
    int nums[10];
    int even = 0, odd = 0;
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &nums[i]);
    }
    for (int i = 0; i < 10; i++)    
        if (nums[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        printf("Number of odd integers you have entered is %d\n", odd);
        printf("Number of even integers you have entered is %d\n", even);
        return 0;
    }
