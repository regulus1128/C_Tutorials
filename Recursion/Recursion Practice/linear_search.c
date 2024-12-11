#include <stdio.h>
int linearSearch(int[], int);
int main(void)
{
    int arr[5] = {1, 4, 5, 0, 6};
    int x, i;
    printf("Enter the element you want to search: ");
    scanf("%d", &x);
    i = linearSearch(arr, x);

    if (i == -1)
        printf("Element not present");
    else
        printf("Index: %d", i);

    return 0;
}

int linearSearch(int a[], int i)
{
    for (int x = 0; x < 5; x++)
    {
        if (i == a[x])
            return x;
    }
    return -1;
}
