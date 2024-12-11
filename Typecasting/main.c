#include <stdio.h>

int main(){
    int a = 5;
    float b = 69;
    float c = 45 / 4;
    float d = (float) 45 / 4;
    float e = 45.1 / 10; 
    int f = 45.1 / 10; 
    // if in an operation between int and another int, if we want the answer in float then we have to convert or typecast any one of the int to a float

    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    // it shows zero since b is float but we have used %d

    printf("The value of b is %f\n", b);
    printf("The value of b is %d\n", (int) b);
    // to typecast, the syntax is: (data type) variable_name

    printf("The value of c is %f\n", c);
    // any operation performed between an int and another int will result in an int only(even if c is a float)
    // any operation performed between an int and a float will result in a float
    // any operation performed between two floats will result in a float

    printf("The value of d is %f\n", d);
    printf("The value of e is %f\n", e);
    printf("The value of f is %d\n", f);
    
}