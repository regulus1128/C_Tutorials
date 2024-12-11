#include <stdio.h>

char name(); // function declaration 

// function definition
char name() // called function
{
    char cd;
    printf("Enter a character:\n");
    scanf("%c", &cd);
    printf("The character you have entered is %c", cd);
}

void main(){ // calling function
    name(); // function calling
}

