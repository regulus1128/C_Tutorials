#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(10 * sizeof(int));
    printf("Multiplication table of 7:\n");

    for (int i = 0; i < 10; i++)
    {
        printf("7 X %d = %d\n", (i + 1), 7 * (i + 1));
    }

    ptr = (int *)realloc(ptr, 15 * sizeof(int));
    printf("Updated multiplication table of 7:\n");

    for (int i = 0; i < 15; i++)
    {
        printf("7 X %d = %d\n", (i + 1), 7 * (i + 1));
    }
    
    free(ptr);
    return 0;
}