#include <stdio.h>

int main()
{
    int a = 1;
    int *p = &a; // note that this line is declaring p as a pointer. we are not using * for getting the value at address

    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", *p); // here we are using * to get value at address
    printf("The address of a is %x\n", &a);
    printf("The address of a is %x\n", p);
    printf("The address of p is %x\n", &p);
    printf("The value of p is %x\n", *(&p));
    return 0;
}
