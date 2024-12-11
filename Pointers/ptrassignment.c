#include <stdio.h>

int main()
{
    int a = 4, b = 5;
    int *p, *q;
    p = &a;
    q = &b;
    *q = *p;

    printf("Value of a is %d %d %d", a, *p, *q);
}