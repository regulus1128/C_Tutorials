#include <stdio.h>
//Print elements of array using recursion
int displayArr(int [], int, int);
int main()
{
    int size; 
    int arr[30];
    printf("Enter size of array: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", (i+ 1));
        scanf("%d", &arr[i]);
    }
    displayArr(arr, size, 0);
    return 0;
}
int displayArr(int a[], int size, int i)
{
    if (i >= size)
    {
        return 0;
    }
    printf("%d ", a[i]);
    return displayArr(a, size, i + 1);
}
