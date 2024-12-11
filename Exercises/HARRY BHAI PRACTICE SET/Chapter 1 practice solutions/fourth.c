#include <stdio.h>

int main(){
    int principal, no_of_years, rate, simple_interest, amount;
    printf("Enter principal amount: \n");
    scanf("%d", &principal);
    printf("Enter number of years: \n");
    scanf("%d", &no_of_years);
    printf("Enter rate of interest: \n");
    scanf("%d", &rate);
    simple_interest = (principal * rate * no_of_years) / 100;
    amount = principal + simple_interest;
    printf("The simple interest is %d\n", simple_interest);
    printf("The amount after %d years is %d", no_of_years, amount);
    
    

}