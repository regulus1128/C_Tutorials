// program to find largest of the four digits entered by the user

#include <stdio.h>

int main(){
    int a, b, c, d;
    printf("Enter 1st number: \n");
    scanf("%d", &a);
    printf("Enter 2nd number: \n");
    scanf("%d", &b);
    printf("Enter 3rd number: \n");
    scanf("%d", &c);
    printf("Enter 4th number: \n");
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
        printf("%d is largest of the four digits you have entered.\n", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("%d is largest of the four digits you have entered.\n", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("%d is largest of the four digits you have entered.\n", c);
    }
    else{
        printf("%d is largest of the four digits you have entered.\n", d);
    }
    return 0;
     
}