#include <stdio.h>

int main(){
    int count, hour;
    float overtime_pay;
    count = 1;

    while (count <= 3)
    {
        printf("Enter number of hours worked\n");
        scanf("%d", &hour);

        if (hour >= 40)
        {
            overtime_pay = (hour - 40) * 12;
            printf("You have worked %d hours overtime and your overtime pay is %0.2f $\n", hour - 40, overtime_pay);
        }
        else
        {
            overtime_pay = 0;
            printf("You have worked less than 40 hours and hence no overtime pay will be given to you\n");
        }
        count = count + 1;
    }
    
}