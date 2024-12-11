//string concatenation using string.h
#include <string.h>
#include <stdio.h>

int main()
{
    char name1[100] , name2[100];
    printf("Enter string 1: ");
    gets(name1);
    printf("Enter string 2: ");
    gets(name2);
    strcat(name1, name2);
    printf("Combined string: %s", name1);
    return 0;
}