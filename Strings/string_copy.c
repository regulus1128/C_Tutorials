#include <stdio.h>
#include <string.h>

int main()
{
    char name1[100]; 
    char name2[100];
    printf("Enter your name: ");
    gets(name1);
    strcpy(name2, name1);
    printf("%s", name2);
    return 0;
}