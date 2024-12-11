#include <stdio.h>
#include "external.c"
int sum; //global variable aka external variable
int func(int x, int y)
{
    int sum; //even if we write auto int sum, it will be the same because by default it is auto
    sum = x + y;
    return sum;
}
int main()
{
    // func(5, 7); will give an error: since sum is a local variable which is declared in func only, so we cannot use it here
    // we have to declare sum again in main()
    // int sum = func(4, 5);
    printf("the sum is %d", sum);
    return 0;
}