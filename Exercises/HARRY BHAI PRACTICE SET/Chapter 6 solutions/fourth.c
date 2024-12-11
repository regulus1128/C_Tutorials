#include <stdio.h>

void Sum(int *, int *);
void Average(int *, int *);

int main()
{
    int a, b;
    printf("Enter values of a and b\n");
    scanf("%d %d", &a, &b);
    Sum(&a, &b);
    Average(&a, &b);
    return 0;
}
void Sum(int *x, int *y){
    printf("The sum is %d\n", *x + *y);
}
void Average(int *x, int *y){
    printf("The average is %d\n", (*x + *y) / 2);
}