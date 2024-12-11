#include <stdio.h>
#include <string.h>

int main()
{
    char name[30];
    unsigned count = 0;
    printf("Enter your name:");
    gets(name);
    printf("Your name is %s\n", name);
    count = strlen(name);
    printf("Length of the string is %u", count);
    return 0;

}    