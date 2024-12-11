#include <stdio.h>

int main()
{
    int arr[10];

    printf("The multiplication table of 5 is:\n");

    for (int i = 0; i < 10; i++)
    {
        arr[i] = 5 * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("5 x %d = %d\n", (i + 1), arr[i]);
    }

    return 0;
}