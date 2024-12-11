//write macro defintions to obtain the bigger of 2 numbers

#include <stdio.h>
#define BIG(x, y) if (x > y) \
                    printf("%d is larger\n", x); \
                else \
                    printf("%d is larger\n", y);


int main()
{
    int num1, num2;
    printf("Enter the two numbers: ");
    scanf("%d %d", &num1, &num2);
    BIG(num1, num2);
    // #undef BIG
    // BIG(num1, num2);

    
    return 0;
}