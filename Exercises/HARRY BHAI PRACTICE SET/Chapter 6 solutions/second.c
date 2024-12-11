#include <stdio.h>

void AddressofI(int);

int main()
{
    int i;
    // int *ptr2;
    // int *ptr1 = &i;
    AddressofI(i);
    printf("The address of i is %x\n", &i);
}

void AddressofI(int x)
{
    printf("The address of i(from function call) is %x\n", &x);
}