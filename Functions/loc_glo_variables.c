#include <stdio.h>
int glo = 4; // global variable

int func(int x)
{
    printf("inside func...\n");
    printf("The address of x inside func is %u\n", &x);
    // int x = 69;
    printf("Value of x is %d\n", x);
    return 10 * x;
}
int main()
{
    int val;
    int x = 44;
    val = func(x);
    int glo = 7; // local variable
    printf("Value of glo is %d\n", glo); // precedence of local variable is higher than global
    printf("The address of x inside main is %u\n", &x);
    printf("Value of val is %d\n", val);

    return 0;
}