#include <stdio.h>

int main()
{
    int arr[] = {3, 2, 67, 0, 56};
    int *ptr = &arr[3];
    printf("%d %d %d\n", *--ptr, *--ptr, *--ptr);
    printf("%d\n", *ptr);
    printf("%d %d %d", --(*ptr), (*ptr)++, ++(*ptr));
}