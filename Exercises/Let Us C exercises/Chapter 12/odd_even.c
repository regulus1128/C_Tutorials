//write macro defintions to test whether a number is even or odd

#include <stdio.h>
#define EVEN(x) //(x % 2 == 0 ? printf("Even") : printf("Odd"))
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    EVEN(num);
    #if x == 0
    printf("Even");
    #else
    printf("Odd");
    #endif
    return 0;
}