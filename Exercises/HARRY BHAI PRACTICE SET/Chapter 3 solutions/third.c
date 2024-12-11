#include <stdio.h>

int main(){
    float income;
    printf("Enter your yearly income(in lakhs): \n");
    scanf("%f", &income);

    if (income < 2.5)
    {
        printf("You do not have to pay taxes.\n");
    }
    else if (income > 2.5 && income < 5.0)
    {
        printf("You have to pay 5 percent tax.\n");
    }
    else if (income > 5.0 && income < 10.0)
    {
        printf("You have to pay 20 percent tax.\n");
    }
    else if(income > 10.0)
    {
        printf("You have to pay 30 percent tax.\n");
    }
}