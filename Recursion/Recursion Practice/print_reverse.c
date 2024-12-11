#include <stdio.h>
// Print elements of array in reverse using recursion
int displayArr(int[], int);
int main()
{
    int size;
    int arr[30];
    printf("Enter size of array: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", (i + 1));
        scanf("%d", &arr[i]);
    }

    displayArr(arr, size - 1);
    // printf("%d ", displayArr(arr, 5));
    return 0;
}
int displayArr(int a[], int x)
{
    if (x < 0)
    {
        return 0;
    }
    printf("%d ", a[x]);
    return displayArr(a, x - 1);
}
