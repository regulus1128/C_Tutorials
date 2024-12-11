#include <stdio.h>
int func(int x)
{
    static int var;
    printf("Value of var: %d\n", var);
    var += 2;
    return x + var;
}
int main()
{
    int x = 20;
    static int var = 69;

    printf("Var: %d\n", var);

    int y = func(x);

    printf("After calling func: %d\n", y);
    y = func(x);
    y = func(x);
    y = func(x);
    y = func(x);
    // printf("After calling func: %d\n", y);

    return 0;
}