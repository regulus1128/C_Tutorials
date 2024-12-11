#include <stdio.h>
#include <stdlib.h>
// use of realloc()
int main()
{
    int *ptr;
    int x;
    printf("Enter size of array: ");
    scanf("%d", &x);
    ptr = (int *)calloc(x, sizeof(int));
    for (int i = 0; i < x; i++)
    {
        printf("Enter %d element of the array: ", i);
        scanf("%d", &ptr[i]);
    }
    // for (int i = 0; i < x; i++)
    // {
    //     printf("Element %d: %d\n", i, ptr[i]);
    //     // scanf("%d", ptr[i]);
    // }
    

    printf("Enter size of new array: ");
    scanf("%d", &x);
    int *ptr1 = (int *)realloc(ptr, x * sizeof(int));
    // for (int i = 0; i < x; i++)
    // {
    //     printf("Enter %d element of the array: ", i);
    //     scanf("%d", &ptr1[i]);
    // }
    printf("New values of the array are:\n");
    for (int i = 0; i < x; i++)
    {
        printf("Element %d: %d\n", i, ptr1[i]);
    }
    printf("Address of ptr: %u\n", ptr);
    printf("Address of ptr1: %u\n", ptr1);
    free(ptr);
    free(ptr1);
    return 0;
}