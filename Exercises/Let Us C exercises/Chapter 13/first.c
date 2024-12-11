#include <stdio.h>

int main()
{
    int arr[10];
    int num, sum = 0;
    printf("Enter elements of the array: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want to search: ");
    scanf("%d", &num);
    for (int i = 0; i < 10; i++)
    {
        if (num == arr[i])
        {
            sum++;
        }
    }
    printf("%d is present %d number of times", num, sum);

    return 0;
}