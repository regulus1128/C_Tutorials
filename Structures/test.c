#include <stdio.h>
union test
{
    int a;
    char b;
    float c;
};

int main()
{
    union test t;
    t.a = 1;
    t.b = 97;
    printf("B value is %c\n", t.b);
    printf("A value is %d\n", t.a);
    return 0;
}