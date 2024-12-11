#include <stdio.h>

void ReverseArray(int[]);

int main()
{
    int arr[5];
    printf("Enter elements of array: ");
    ReverseArray(arr);
    return 0;
}
void ReverseArray(int arr[5])
{
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Reversed array is:\n");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}