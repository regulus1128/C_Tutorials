#include <stdio.h>
void displayArray(int *a)
{
    printf("The array elements are:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(a + i));
    }
}
int main()
{
    int arr[5];
    int *ptr = arr;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter element %d: ", (i + 1));
        scanf("%d", (ptr + i));
    }
    displayArray(ptr);
    return 0;
}