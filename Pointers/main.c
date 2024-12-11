#include <stdio.h>

int main()
{
    printf("Lets learn pointers!\n");
    int a = 10, b = 6;
    int *p, *q; //  p and q will store address of a variable whose data type is int

    p = &a; // p is storing address of a (& is known as address of operator) i.e. p is pointing to a
    q = &b; // q is storing address of b  i.e. q is pointing to b

    printf("Address of a is %x\n", &a);
    printf("Address of a is %x\n", p);
    printf("Value of a is %d\n", a);
    printf("Value of a is %d\n", *p); // * is known as indirection operator and it is used to print value at address. 
    printf("Value of a is %d\n", *(&a));
    printf("Value of b is %d\n", *q);
    printf("Address of p is %x\n", &p);
    printf("Address of b is %x\n", q);
    return 0;
}