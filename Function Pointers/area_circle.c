#include <stdio.h>
#include <math.h>
#define PI 3.14
int EucDistance(int x1, int y1, int x2, int y2)
{
    // int radius;
    // radius = 
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

float areaCircle(int (*ptr)(int, int, int, int))
{
    
    int x1, x2, y1, y2, r;
    r = ptr(x1, y1, x2, y2);
    printf("The area of the circle is %0.4f\n", PI * r * r);

    // return area;
}
int main()
{
    int x1, y1, x2, y2;
    float area;
    printf("Enter first X coordinate: ");
    scanf("%d", &x1);
    printf("Enter first Y coordinate: ");
    scanf("%d", &y1);
    printf("Enter second X coordinate: ");
    scanf("%d", &x2);
    printf("Enter second Y coordinate: ");
    scanf("%d", &y2);
    int (*ptr)(int, int, int, int);
    ptr = EucDistance;
    areaCircle(ptr);

    return 0;
}