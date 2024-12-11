#include <stdio.h>
int main()
{
    float fahrt, cels;
    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrt);
    cels = ((fahrt - 32.0) * 5.0 / 9.0);
    printf("The temperature in Celsius is %f", cels);
    return 0;
}
