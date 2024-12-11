#include <stdio.h>
int main()
{
    int arr[5];
    int min;
    printf("Enter 5 numbers:\n");
    min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("The smallest number in the array is %d", min);
    
    return 0;
}