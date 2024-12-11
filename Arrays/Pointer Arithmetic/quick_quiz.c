#include <stdio.h>
//ptr + n = address of ptr + n * size of data type
int main()
{
    int a = 5;
    char ch;
    int *ptr = &a;
    char *ptr2 = &ch;
    printf("The address of a is %u\n", ptr);
    ptr++;
    printf("The address of a is %u\n", ptr);
    ptr = ptr + 2;
    printf("The address of a is %u\n", ptr);
    ptr--;
    printf("The address of a is %u\n", ptr);
    printf("The address of ch is %u\n", ptr2);
    ptr2++;
    printf("The address of ch is %u\n", ptr2);
    return 0;
}