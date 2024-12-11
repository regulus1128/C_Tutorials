#include <stdio.h>

// takes something returns nothing(with argument, no return type)

void add(int, int); // sepcify the data type in parentheses(these two are known as parameters)

void main()
{
    int a, b;
    add(a, b); // a and b are arguments aka actual parameters
}

void add(int x, int y) // parameters aka formal arguments. order of data types must match with the declaration part
{
    printf("enter 2 numbers\n");
    scanf("%d %d", &x, &y);
    printf("the sum is %d", x + y);
}
