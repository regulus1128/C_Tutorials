#include <stdio.h>
#include <stdlib.h>
// use of malloc()
int main()
{
    int *ptr;
    int x;
    printf("Enter size of array: ");
    scanf("%d", &x);
    ptr = (int *)malloc(x * sizeof(int));
    for (int i = 0; i < x; i++)
    {
        printf("Enter %d element of the array: ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < x; i++)
    {
        printf("Element %d: %d\n", i, ptr[i]);
        // scanf("%d", ptr[i]);
    }
    free(ptr);
    return 0;
}