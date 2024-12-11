#include <stdio.h>
//function pointer syntax: function_return_type(*name_of_pointer) function_args
int square(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The square of the number is %d\n", square(num)); //using function name

    int (*ptr) (int); //declaring a function pointer: here ptr is the name of the function pointer which takes one integer as an argument and returns an integer

    ptr = &square; //storing the address of the function(no need to write '&')
    printf("The square of the number is %d", ptr(num)); //using function pointer

    return 0;
}

int square(int n)
{
    return (n * n);
}