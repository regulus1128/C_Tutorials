#include <stdio.h>

int main(){
    int a, b, c;
    printf("Enter length of first side of the traingle:\n");
    scanf("%d", &a);
    printf("Enter length of second side of the traingle:\n");
    scanf("%d", &b);
    printf("Enter length of third side of the traingle:\n");
    scanf("%d", &c);

    if (a > b && a > c && b + c > a)
    {
        printf("The triangle is valid\n");
    }
    else if (b > a && b > c && a + c > b)
    {
        printf("The triangle is valid\n");
    }
    else if (c > b && c > a && a + b > c)
    {
        printf("The triangle is valid\n");
    }
    else{
        printf("The triangle is not vaild\n");
    }
    
}
