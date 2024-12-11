#include <stdio.h>

int main()
{
    int a = 5;
    int *p = &a;
    //pointer to pointer(double pointer): will store address of another pointer
    
    int **q = &p; // q is a double pointer. *q means q is a pointer and q will store address of another pointer(p) so int* is used(since p is storing address of a and its data type is int*) 
    // 2 level(**) pointer can store address of 1(*) level pointer and 1 level pointer can store zero level pointer i.e. a variable
    int ***r = &q;
    ***r = 50;
    printf("Value of a is %d %d %d %d\n", a, *p, **q, ***r);
    printf("Address of a is %x %x\n", p, &a);
    printf("Address of p is %x\n", q);
    printf("Address of q is %x\n", r);
    printf("Address of r is %x\n", &r);
    
}