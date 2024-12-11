#include <stdio.h>
int main()
{
    int arr[10];
    int postve = 0, negtve = 0, odd = 0, even = 0;
    printf("Enter elements of the array: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] >= 0)
        {
            postve++;
        }
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        if (arr[i] % 2 != 0)
        {
            odd++;
        }
        if (arr[i] < 0)
        {
            negtve++;
        }
    }
    printf("The number of positive numbers you have entered: %d\n", postve);
    printf("The number of negative numbers you have entered: %d\n", negtve);
    printf("The number of odd numbers you have entered: %d\n", odd);
    printf("The number of even numbers you have entered: %d\n", even);
    return 0;
}