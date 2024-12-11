//reverse a string using string.h
#include <stdio.h>
#include <string.h>

int main()
{
    char name1[100];
    printf("Enter string: ");
    gets(name1);
    strrev(name1);
    printf("Reversed string is: %s", name1);
    return 0;
}
