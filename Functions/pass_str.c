#include <stdio.h>

void display(char[]);

int main()
{
    char str[] = "Messi";
    display(str);    
    return 0;
}

void display(char str[])
{
    printf("The string is: %s", str);
}