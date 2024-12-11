#include <stdio.h>

void add();
void subtract();
void multiply();
void divide();

void add(){    // defining the function
    int a, b;
    printf("Enter 2 numbers:\n");
    scanf("%d %d", &a, &b);
    printf("The sum of %d and %d is %d\n", a, b, a + b);
}
void subtract(){    // defining the function
    int a, b;
    printf("Enter 2 numbers:\n");
    scanf("%d %d", &a, &b);
    printf("The difference of %d and %d is %d\n", a, b, a - b);
}
void multiply(){    // defining the function
    int a, b;
    printf("Enter 2 numbers:\n");
    scanf("%d %d", &a, &b);
    printf("The product of %d and %d is %d\n", a, b, a * b);
}
void divide(){    // defining the function
    float a, b;
    printf("Enter 2 numbers:\n");
    scanf("%f %f", &a, &b);
    printf("%f divided by %f is %f\n", a, b, a / b);
}

void main(){
    printf("***** This is a program to calculate sum of two numbers. *****\n");
    add();
    printf("***** This is a program to calculate difference of two numbers. *****\n");
    subtract();
    printf("***** This is a program to calculate product of two numbers. *****\n");
    multiply();
    printf("***** This is a program to calculate division of two numbers. *****\n");
    divide();
}
