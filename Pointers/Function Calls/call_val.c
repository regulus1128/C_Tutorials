#include <stdio.h>
//Call by value
void num(int);

int main()
{
    int a = 10;
    printf("The value of a before function call is %d\n", a);
    num(a);
    printf("The value of a after function call is %d\n", a);
    return 0;
}

void num(int a)
{
    a = a + 100;
    printf("The value of a after adding 100 is %d\n", a);
}
