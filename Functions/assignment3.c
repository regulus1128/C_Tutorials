// write a function to find the greatest of three numbers entered by the user.(with argument, no return type)

#include <stdio.h>

void greatestnum(int, int, int);

void greatestnum(int a, int b, int c){
    if (a > b && a > c)
    {
        printf("%d is greatest", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is greatest", b);
    }
    else if (c > a && c > b)
    {
        printf("%d is greatest", c);
    }
    
}

void main(){
    int x, y, z;
    printf("Enter 3 numbers\n");
    scanf("%d %d %d", &x, &y, &z);
    greatestnum(x, y, z);
}