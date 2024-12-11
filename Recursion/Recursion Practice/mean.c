// Given an array of integers, find mean of array elements using recursion
int meanArray(int a[], int i)
{
    int sum = 0;
    if (i < 0)
    {
        return 0;
    }
    return a[i] + meanArray(a, i - 1);
    // return (sum / size);
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

    printf("The mean of array elements: %d", meanArray(arr, size - 1)/size);

}