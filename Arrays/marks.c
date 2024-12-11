// WAP to calculate sum and average of marks entered by the user
#include <stdio.h>

int main()
{
    int marks[5];
    float sum = 0;
    float avge;
    printf("Enter marks: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        sum = sum + marks[i];
    }
    avge = sum / 5;
    printf("Your total marks is %0.2f\n", sum);
    printf("Your average marks is %0.4f\n", avge);
}