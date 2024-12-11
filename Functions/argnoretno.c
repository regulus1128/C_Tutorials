#include <stdio.h>
#include <conio.h>

// takes nothing returns nothing(no argument no return type)

void add(void); // function declaration or function prototype(void is return type)
    
void add(){    // defining the function
    int a, b;
    printf("Enter 2 numbers:\n");
    scanf("%d %d", &a, &b);
    printf("The sum of %d and %d is %d\n", a, b, a + b);
}
    // the function "add" takes nothing and takes nothing function type has nothing inside the parentheses (or we can write void)
    // in case of return nothing function type, we use the keyword void

void main(){
    printf("***** This is a program to calculate sum of two numbers. *****\n");
    add();
    add(); // calling the function    
}

