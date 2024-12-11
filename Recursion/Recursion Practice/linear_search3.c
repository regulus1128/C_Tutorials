#include <stdio.h>
//Linear search with multiple occurences
void linearSearch(int[], int);
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter element %d: ", (i + 1));
        scanf("%d", &arr[i]);
    }
    int x, j;
    printf("Enter the element you want to search: ");
    scanf("%d", &x);
    linearSearch(arr, x);

    // if (j == -1)
    //     printf("Element not present");
    // else
    //     printf("Index: %d", j);

    return 0;
}

void linearSearch(int a[], int i)
{
    for (int x = 0; x < 5; x++)
    {
        if (i == a[x])
        {
            a[x] = i;
            printf("%d is present at index %d\n", i, x);
        }
    }
    
}
