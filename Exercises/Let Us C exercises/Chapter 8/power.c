#include <stdio.h>
#include <math.h>

int main(){
    int base, power;
    double result;

    printf("Enter base and power ");
    scanf("%d %d", &base, &power);
    result = pow(base, power);
    printf("%d raised to power %d is %lf", base, power, result);
}