#include <stdio.h>

int main(){
    int a, b, c;
    printf("Enter the three sides of the traingle\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a == b && a == c || b == c && b == a || c == a && c == b)
    {
        printf("The traingle is equilateral\n");
    }
    else if (a == b && a != c || b == c && b != a || a == c && a != b)
    {
        printf("The traingle is isoceles\n");
    }
    else if (a != b && a != c)
    {
        printf("The traingle is scalene\n");
    }
    // if ((a*a) + (b*b) == (c*c))
    // {
    //     printf("The traingle is rigth angled\n");
    // }
    
}