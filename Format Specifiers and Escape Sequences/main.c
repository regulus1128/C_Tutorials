#include <stdio.h>

int main(){
    int a = 4;
    float b = 3.14;
    printf("Value of a is %d and value of b is %f\n", a, b);

    // to show 'x' no. of digits after decimal point, use ("%0.xf")
    printf("Value of a is %d and value of b is %0.3f\n", a, b);

    // if we use "x" no. of digits before the decimal point it will leave "x" no. of digits before or from the left side
    printf("value of b is %10.3f\n", b); 
    // 3.140 left 10 places from the left

    // if we use negative value before the decimal point it will leave spaces after
    printf("value of b is %-10.3f number\n", b);
    // 3.140 left 10 spaces from the word number 
    return 0;
}
