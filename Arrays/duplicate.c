#include <stdio.h>
// Find duplicate in an array
int main()
{
    int arr[6], cmp;
    for (int i = 0; i < 6; i++)
    {
        printf("Enter element %d: ", (i + 1));
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {

            if (arr[i] == arr[j])
            {
                printf("%d is the duplicate element", arr[i]);
                break;
            }
        }
    }

    return 0;
}