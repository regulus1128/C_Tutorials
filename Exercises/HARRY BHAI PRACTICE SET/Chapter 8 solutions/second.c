#include <stdio.h>

int main()
{
    char name[30];
    printf("Enter your name: ");
    gets(name);
    printf("Your name is %c\n", name);
    printf("Your name is %s", name);

    return 0;
}