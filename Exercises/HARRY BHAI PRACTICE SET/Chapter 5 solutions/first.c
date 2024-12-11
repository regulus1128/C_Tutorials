#include <stdio.h>

void avg(void);

void main(){
    avg();
}

void avg(){
    int a, b, c;
    printf("Enter 3 numbers\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("The average is %f", (float)(a + b + c) / 3);
}