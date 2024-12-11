#include <stdio.h>
void change(int *a, int *b)
{
    *a += 10;
    *b *= 10;
    printf("Value of a and b(inside func call): %d %d\n", *a, *b);
}
int main()
{
    int a, b;
    int *ptr1;
    int *ptr2;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    ptr1 = &a;
    ptr2 = &b;
    printf("Value of a and b(before func call): %d %d\n", *ptr1, *ptr2);

    change(ptr1, ptr2);
    printf("Value of a and b(after func call): %d %d", *ptr1, *ptr2);

    return 0;
}