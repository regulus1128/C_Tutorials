#include <stdio.h>
#define PI 3.14 
// one way to define a constant

int main(){
    const int a = 4;
    // another way to define a constant

    // PI = 4.55; (invalid because PI is a constant)
    printf("The value of pi is %f\n", PI);
    printf("The value of a is %d", a);

    
}
