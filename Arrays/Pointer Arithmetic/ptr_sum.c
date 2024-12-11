#include <stdio.h>
//ptr + n = address of ptr + n * size of data type
int main()
{
    int a[5] = {0, 1, 2, 3, 4};
    int *ptr = a;
    printf("Value is %d\n", *ptr);
    printf("Address is %u\n", ptr);
    ptr = ptr + 2;
    /* ptr = &a[0]
    ptr + n = &a[0 + n] */
    printf("Value now is %d\n", *ptr);
    printf("Address now is %u\n", ptr);
    ptr + 1;
    printf("Value now is %d\n", *ptr);
    printf("Address now is %u\n", ptr);
    ptr = ptr + 1;
    printf("Value now is %d\n", *ptr);
    printf("Address now is %u\n", ptr);
    *ptr = 69;
    printf("Value now is %d\n", *ptr);
    printf("Address now is %u\n", ptr);
    ptr++;
    printf("Value now is %d\n", *ptr);
    printf("Address now is %u\n", ptr);
    ptr--;
    printf("Value now is %d\n", *ptr);
    printf("Address now is %u\n", ptr);

    return 0;
}