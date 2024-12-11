// Given an array of integers, find sum of array elements using recursion
int sumArray(int a[], int i)
{
    if (i < 0)
    {
        return 0;
    }
    return a[i] + sumArray(a, i - 1);
}
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

    printf("The sum of array elements: %d", sumArray(arr, size - 1));

    return 0;
}