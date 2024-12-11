#include <stdio.h>

int main()
{
    int a = 10;
    int *p;
    p = &a;
    *p = 20;
    
    printf("a = %d\n", a);
    printf("a = %d\n", *p);
    printf("%x", p);
}