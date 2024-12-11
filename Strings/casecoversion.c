//coversion of a string to uppercase/lowercase using string.h
#include <string.h>
#include <stdio.h>

int main()
{
    char name[30];
    printf("Enter string: ");
    gets(name);
    printf("You have entered %s\n", name);
    strlwr(name);
    printf("The string in lowercase: %s\n", name);
    strupr(name);
    printf("The string in uppercase: %s\n", name);
    return 0;
}