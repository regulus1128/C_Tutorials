#include <stdio.h>

// takes something returns something(with argument, with return type)

int add(int, int); // specify the data type in parentheses(these two are known as parameters)
// we also have to specify the return type, in this case int

void main()
{
    int a, b, c;
    c = add(a, b); // a and b are arguments aka actual parameters
    printf("The sum is %d", c);
}

int add(int x, int y) // parameters aka formal arguments. order of data types must match with the declaration part
{   
    printf("enter 2 numbers\n");
    scanf("%d %d", &x, &y);
    return x + y;
}