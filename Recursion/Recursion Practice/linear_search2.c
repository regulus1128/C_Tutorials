#include <stdio.h>
// Linear search using recursion
int linearSearch(int[], int, int);
int linearSearch2(int[], int, int);
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter element %d: ", (i + 1));
        scanf("%d", &arr[i]);
    }

    int x, res, res2;
    printf("Enter the element you want to search: ");
    scanf("%d", &x);
    res = linearSearch(arr, x, 4);
    res2 = linearSearch2(arr, x, 0);

    if (res == -1)
        printf("Element not present\n");
    else
        printf("Index: %d\n", res);

    if (res2 == -1)
        printf("Element not present\n");
    else
        printf("Index: %d\n", res2);

    return 0;
}

int linearSearch(int a[], int tgt, int idx)
{
    if (idx < 0)
        return -1;

    if (tgt == a[idx])
        return idx;

    else
        return linearSearch(a, tgt, idx - 1);
}

int linearSearch2(int a[], int tgt, int idx)
{
    if (idx > 4)
        return -1;

    if (tgt == a[idx])
        return idx;

    else
        return linearSearch2(a, tgt, idx + 1);
}
