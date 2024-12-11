#include <stdio.h>

int main()
{
    int i = 10;
    int *ptr = &i;
    int **ptr2 = &ptr;
    printf("The value of i is %d\n", *ptr);
    printf("The value of i is %d\n", **ptr2);
    printf("The address of i is %x\n", ptr);
    }