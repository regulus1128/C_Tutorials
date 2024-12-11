#include <stdio.h>
void greet(char []);
int main()
{
    char str[30];
    printf("Enter your name: ");
    scanf("%s", &str);
    void (*ptr) (char []);
    ptr = &greet;
    // greet(str);
    ptr(str);
    return 0;
}

void greet(char str[])
{
    printf("Good evening, %s!", str);
}