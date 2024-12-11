// program to calculate profit and loss percent
#include <stdio.h>

int main(){
    float cp, sp;
    printf("Enter cost price:\n");
    scanf("%f", &cp);
    printf("Enter selling price:\n");
    scanf("%f", &sp);

    // loss_percent = ((cp - sp) / cp) * 100;
    // gain_percent =  ((sp - cp) / cp) * 100;

    if (cp > sp)
    {
        printf("You incurred a loss of %0.2f rupees and %0.4f percent loss", cp - sp, ((cp - sp) / cp) * 100);
    }
    else if (sp > cp)
    {
        printf("You gained a profit of %0.2f rupees and %0.4f percent profit", sp - cp, ((sp - cp) / cp) * 100);
    }
        
    return 0;
}