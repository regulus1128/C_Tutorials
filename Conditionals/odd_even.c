// Program to check whether a number is odd or even 
#include <stdio.h>

int main(){
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    
    if (num % 2 == 0)
    {
        printf("%d is even", num);
    }
    else
    {
        printf("%d is odd", num);    
    }
}


