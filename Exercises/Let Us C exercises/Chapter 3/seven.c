#include <stdio.h>

int main(){
    int angle_1, angle_2, angle_3;
    printf("Enter first angle:\n");
    scanf("%d", &angle_1);
    printf("Enter second angle:\n");
    scanf("%d", &angle_2);
    printf("Enter third angle:\n");
    scanf("%d", &angle_3);

    if (angle_1 + angle_2 + angle_3 == 180)
    {
        printf("The triange is valid\n");
    }
    else{
        printf("The triangle is not valid\n");
    }
}