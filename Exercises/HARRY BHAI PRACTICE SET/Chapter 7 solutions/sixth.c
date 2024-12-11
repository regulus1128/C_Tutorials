#include <stdio.h>

void CountPositiveNums(int[], int);
int main()
{
    int arr[10];
    printf("Enter elements of array:\n");
    CountPositiveNums(arr, 10);
    return 0;
}
void CountPositiveNums(int arr[10], int n){    
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] >= 0)
        {
            count = count + 1;
        }
    }
    printf("The array is:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("The number of positive integers you have entered is %d", count);
}