// Given an array of integers, find mean of array elements(iteration)

#include <stdio.h>
#define MAX 50
int main()
{
    int arr[MAX], size, sum = 0;
    printf("Enter size of array: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", (i + 1));
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    printf("The sum of array elements: %d", sum/size);

    return 0;
}