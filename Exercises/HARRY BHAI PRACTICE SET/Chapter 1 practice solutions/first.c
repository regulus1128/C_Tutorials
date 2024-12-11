#include <stdio.h>

int main(){
    float length, breadth, area;
    // length = 40;
    // breadth = 10;
    
    printf("Enter the length of the rectangle: \n");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle: \n");    
    scanf("%f", &breadth);
    area = length * breadth;
    printf("The area of the retangle with length %f and breadth %f is %f", length, breadth, area);
    return 0;
}