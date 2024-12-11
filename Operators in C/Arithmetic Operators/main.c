#include <stdio.h>

int main()
{
    int a, b;
    a = 5;
    b = 3;
    printf("The sum is %d\n", a + b);
    printf("The difference is %d\n", a - b);
    printf("The product is %d\n", a * b);
    printf("5 divided by 3 is %d\n\n", a / b); 
    // since both are integers, the result after dividing is also an integer
    float c, d;
    c = 5;
    d = 3;
    printf("5 divided by 3 is %f\n\n", c / d);
    // if we want exact decimals we have to use float
    
    // modulo operator: returns the remainder
    int e, f;
    e = 9;
    f = 4;
    printf("The remainder when we divide 9 by 4 is %d\n", e % f);



return 0;
}