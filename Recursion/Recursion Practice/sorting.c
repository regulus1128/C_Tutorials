#include <stdio.h>
// WAP to check if an array is sorted or not(ascending order)

int isSorted(int[], int);
int main()
{
    int arr[20], size, res;
    printf("Enter size of array: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", (i + 1));
        scanf("%d", &arr[i]);
    }
    res = isSorted(arr, size - 1);
    if (res == -1)
        printf("Array is not sorted.");

    else
        printf("Array is sorted.");

    return 0;
}
int isSorted(int a[], int x)
{
    for (int i = 0; i < x; i++)
    {
        if (a[i] > a[i + 1])
        {
            return -1;
            // break;
        }
    }
}
