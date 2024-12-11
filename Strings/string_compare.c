#include <stdio.h>
#include <string.h>

int main()
{
    char name1[30], name2[30];
    int val;
    printf("Enter first string:");
    gets(name1);
    printf("Enter second string: ");
    gets(name2);
    val = strcmp(name1, name2);
    printf("The value is %d", val);
    return 0;
}