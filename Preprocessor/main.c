#include <stdio.h>
#define pi 3.14
#define sqaure(r) r * r
#define circum(r) 2 * pi * r
int main()
{
    int radius;
    printf("Enter radius of the circle: ");
    scanf("%d", &radius);
    printf("Circumference of the circle is: %f\n", circum(radius));
    printf("Area of the circle is: %f\n", pi * sqaure(radius));

    return 0;
}