#include <stdio.h>
#include "areaperi.c"
int main()
{
    int radius, side_sq, breadth_tri, height_tri, third_side;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    printf("Enter the length of the square: ");
    scanf("%d", &side_sq);
    printf("Enter the breadth and height of the triangle: ");
    scanf("%d %d", &breadth_tri, &height_tri); 
    printf("Enter the third side of the triangle: ");
    scanf("%d", &third_side); 
    printf("\nArea of the circle: %f\n", AREACIRC(radius));
    printf("Circumference of the circle: %f\n", CIRCUM(radius));
    printf("Area of the square: %d\n", AREASQ(side_sq));
    printf("Perimeter of the square: %d\n", PERISQ(side_sq));
    printf("Area of the triangle: %f\n", AREATRI((float)breadth_tri, (float)height_tri));
    printf("Perimeter of the triangle: %d\n", PERITRI(breadth_tri, height_tri, third_side));
    return 0;
}