#include <stdio.h>
#define MAX 50
void reverseArray(int *a, int size)
{
    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = *(a + i);
        *(a + i) = *(a + size - 1 - i);
        *(a + size - 1 - i) = temp;
    }
    printf("The reversed array is:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(a + i));
    }
}
int main()
{
    int arr[MAX], size;
    int *ptr = arr;
    printf("Enter size of array: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", (i + 1));
        scanf("%d", (ptr + i));
    }
    printf("Original array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    reverseArray(ptr, size);

    return 0;
}