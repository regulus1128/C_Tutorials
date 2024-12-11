#include <stdio.h>

int main(){
    int x, y;
    printf("Enter x coordinate:\n");
    scanf("%d", &x);
    printf("Enter y coordinate:\n");
    scanf("%d", &y);

    if (x != 0 && y == 0)
    {
        printf("The point (%d, %d) lies on X axis\n", x, y);
    }
    else if (x == 0 && y != 0)
    {
        printf("The point (%d, %d) lies on Y axis\n", x, y);
    }
    else if (x == 0 && y == 0)
    {
        printf("The point (%d, %d) lies on the origin\n", x, y);
    }
    else{
        printf("The point (%d, %d) neither lies on X axis nor on the Y axis\n", x, y);
    }
    
}