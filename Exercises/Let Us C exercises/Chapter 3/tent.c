// program to check collinearity of three points
#include <stdio.h>

int main(){
    int x1, x2, x3, y1, y2, y3;
    printf("Enter first X coordinate:\n");
    scanf("%d", &x1);
    printf("Enter second X coordinate:\n");
    scanf("%d", &x2);
    printf("Enter third X coordinate:\n");
    scanf("%d", &x3);
    printf("Enter first Y coordinate:\n");
    scanf("%d", &y1);
    printf("Enter second Y coordinate:\n"); 
    scanf("%d", &y2);
    printf("Enter third Y coordinate:\n");
    scanf("%d", &y3);


    if ((y2 - y1) / (x2 - x1) == (y3 - y2) / (x3 - x2))
    {
        printf("The given coordinates (%d, %d), (%d, %d) and (%d, %d) are collinear\n", x1, y1, x2, y2, x3, y3);
    }
    else{
        printf("The given coordinates (%d, %d), (%d, %d) and (%d, %d) are not collinear\n", x1, y1, x2, y2, x3, y3);
    }
}