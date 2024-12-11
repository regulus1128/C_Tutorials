#include <stdio.h>

int main(){
    float length, breadth, radius;
    printf("Enter length of the rectangle: \n");
    scanf("%f", &length);
     printf("Enter breadth of the rectangle: \n");
    scanf("%f", &breadth);
     printf("Enter radius of the circle: \n");
    scanf("%f", &radius);

    printf("The area of the rectangle with length %f and breadth %f is %f sq. units\n", length, breadth, length * breadth);
    printf("The perimeter of the rectangle with length %f and breadth %f is %f units\n", length, breadth, 2 * (length + breadth));
    printf("The area of the circle with radius %f is %f sq. units\n", radius, 2 * 3.14 * radius * radius);
    printf("The circumference of the circle with radius %f is %f units\n", radius, 2 * 3.14 * radius);

}