#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}
void greetHello(int (*ptr)(int, int))
{
    int a, b;

    printf("Hello mc!\n");
    printf("The sum is %d\n", ptr(a, b));
}
void greetGood(int (*ptr)(int, int))
{
    int a, b;

    printf("Good morning mc!\n");
    printf("The sum is %d\n", ptr(a, b));
}
int main()
{
    int x, y;
    printf("Enter the two numbers:\n");
    scanf("%d %d", &x, &y);
    int (*ptr)(int, int);
    ptr = sum;
    greetHello(ptr);
    greetGood(ptr);
    return 0;
}