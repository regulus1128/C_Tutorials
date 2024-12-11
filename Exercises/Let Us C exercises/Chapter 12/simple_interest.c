#include <stdio.h>
#include "interest.c"
// #define SIMPLEINT(p, r, t) (p * r * t) / 100
// #define AMOUNT(p) (p + SIMPLEINT) 
int main()
{
    int principal, rate, time;
    printf("Enter principal amount, rate of interest and time period:\n");
    scanf("%d %d %d", &principal, &rate, &time);
    printf("Simple interest: %0.2f\n", SIMPLEINT((float)principal, (float)rate, (float)time));
    printf("Amount: %0.2f", AMOUNT((float)principal, (float)rate, (float)time));
    return 0;
}