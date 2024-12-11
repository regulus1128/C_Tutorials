#include <stdio.h>

int main()
{
    int size, max;
    int arr[30];
    printf("Enter size of array: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", (i + 1));
        scanf("%d", &arr[i]);
    }

    displayArr(arr, size - 1, arr[0]);
    // printf("%d ", displayArr(arr, 5));
    printf("%d\n", displayArr(arr, size - 1, max));
    return 0;
}
int displayArr(int a[], int size, int max)
{
    if (size < 0)
    {
        return max;
    }
    if (max < a[size])
    {
        max = a[size];
    }

    displayArr(a, size - 1, max);
    // return max;
}
