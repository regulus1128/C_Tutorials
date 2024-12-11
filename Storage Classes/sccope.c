#include <stdio.h>
int x = 69;
void fun(int);
int main()
{
    printf("Value of x in global: %d\n", x);
    int x = 10;
    {
        int x = 45;
        printf("Value of x inside block: %d\n", x);
    }
    x++;
    printf("Value of x inside main(): %d\n", x);
    fun(x);
    return 0;
}
void fun(int x)
{
    x = 100;
    printf("Value of x inside fun(): %d\n", x);
}