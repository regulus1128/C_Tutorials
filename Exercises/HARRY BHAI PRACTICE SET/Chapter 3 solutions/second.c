#include <stdio.h>

int main(){
    int sub_1, sub_2, sub_3;
    float total;
    printf("Enter marks of 1st subject(out of 100): \n");
    scanf("%d", &sub_1);
    printf("Enter marks of 2nd subject(out of 100): \n");
    scanf("%d", &sub_2);
    printf("Enter marks of 3rd subject(out of 100): \n");
    scanf("%d", &sub_3);
    
    total = (sub_1 + sub_2 + sub_3) / 3;

    if (sub_1 >= 33 && sub_2 >= 33 && sub_3 >= 33 && total >= 40)
    {
        printf("Your total percentage is %f and you have passed!", total);
    }   
    else
    {
        printf("Your total percentage is %f and you have failed!", total);
    } 


}