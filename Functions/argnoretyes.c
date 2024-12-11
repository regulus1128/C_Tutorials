#include <stdio.h>

// takes nothing returns something(no argument, with return type)

int add(void); // return type is int, no return type so void is used in parentheses

int add(){
    int a, b;
    printf("Enter 2 numbers:\n");
    scanf("%d %d", &a, &b);
    return a + b;
    printf("jela"); //anything after return statement is not executed
}

int main(){
    int x;
    x = add(); // we have to store the return value in some variable
    printf("The sum is %d", x);
    return 0;
}