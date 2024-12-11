#include <stdio.h>

int main(){
    int eng, math, phy, chem, cs, aggr, sum;
    float percentage;
    printf("Enter marks obtained in English:\n");
    scanf("%d", &eng);
    printf("Enter marks obtained in Maths:\n");
    scanf("%d", &math);
    printf("Enter marks obtained in Physics:\n");
    scanf("%d", &phy);
    printf("Enter marks obtained in Chemistry:\n");
    scanf("%d", &chem);
    printf("Enter marks obtained in CS:\n");
    scanf("%d", &cs);

    sum = (eng + math + phy + chem + cs);
    aggr = (sum) / 5;
    percentage = (sum / 500) * 100;

    printf("Your aggregate marks is %d\n", aggr);
    printf("Your percentage is %f\n", percentage);

}