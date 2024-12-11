#include <stdio.h>
//ptr - n = address of ptr - n * size of data type
// we can subtract two pointers and the result gives us how many elements are there between those two pointers
// difference between two pointers =  difference in their addresses / size of data type
int main()
{
    int a[5] = {0, 1, 2, 3, 4};
    int diff;
    int *ptr = &a[0]; // we can also write int *ptr = a
    int *ptr2 = &a[4];
    diff = ptr - ptr2;
    printf("The address of first pointer is %u\n", ptr);
    printf("The address is second pointer is %u\n", ptr2);
    printf("The differnce between the two pointers is %d\n", diff);

    *ptr2 = 25;
    diff = ptr2 - ptr;
    printf("The differnce between the two pointers is %d\n", diff);
    *ptr = 27;
    ptr2 = ptr2 - 3;
    printf("The address of second pointer is %u\n", ptr2);
    printf("The value is %d\n", *ptr2);
    ptr = ptr + 3;
    printf("The address of first pointer is %u\n", ptr);
    diff = ptr - ptr2;
    printf("The differnce between the two pointers is %d\n", diff);
    return 0;
}