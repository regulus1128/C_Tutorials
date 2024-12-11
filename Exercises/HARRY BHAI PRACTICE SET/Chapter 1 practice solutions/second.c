#include <stdio.h>

int main(){
    float pi; 
    int radius_circle, radius_cylinder, height, area_circle, area_cylinder;
    pi = 3.14;

    printf("Enter radius of the circle: \n");
    scanf("%d", &radius_circle);
    printf("Enter radius of the cylinder: \n");
    scanf("%d", &radius_cylinder);
    printf("Enter height of the cylinder: \n");
    scanf("%d", &height);

    area_circle = pi * radius_circle * radius_circle;
    area_cylinder = pi * radius_cylinder * radius_cylinder * height;

    printf("The area of the circle with radius %d is %d\n", radius_circle, area_circle);
    printf("The volume of the cylinder with radius %d and height %d is %d", radius_circle, height, area_cylinder);
}
