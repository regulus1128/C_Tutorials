#include <stdio.h>
#include "external.c"
int main()
{
    extern void display();
    display();
    return 0;
}