#include <string.h>
#include <stdio.h>

int main()
{
    char name1[100] , name2[100];
    char name3[100] = " is a friend of ";
    printf("Enter string 1: ");
    gets(name1);
    printf("Enter string 2: ");
    gets(name2);
    strcat(name1, name3);
    strcat(name1, name2);
    puts(name1);
    return 0;
}