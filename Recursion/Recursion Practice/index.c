#include <stdio.h>
// Print first index of occurence in array
int indexPresent(int a[], int num)
{
    for (int i = 0; i < 5; i++)
    {
        if (num == a[i])
        {
            printf("Element present at index %d\n", i);
        }
    }

    return -1;
}
int main()
{
    int arr[5], index, num, res;
    for (int i = 0; i < 5; i++)
    {
        printf("Element %d: ", (i + 1));
        scanf("%d", &arr[i]);
    }
    printf("Enter the number: ");
    scanf("%d", &num);
    res = indexPresent(arr, num);
    if (res == -1)
    {
        printf("Element does not exist");
    }
    
    return 0;
}