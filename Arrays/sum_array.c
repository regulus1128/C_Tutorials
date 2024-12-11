// WAP to read two arrays and store the sum of these two arrays in a third array
#include <stdio.h>

int main()
{
    int arr1[5], arr2[5], arr3[5];
    printf("Enter the elements of the first array(5) ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements of the second array(5) ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr2[i]);
    }
    printf("The sum of the elements are:\n");
    for (int i = 0; i < 5; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
        printf("Element at %d index is %d\n", i, arr3[i]);
    }
    return 0;
}