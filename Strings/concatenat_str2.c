//string concatenation without using string.h
#include <stdio.h>
#include <string.h>

int main()
{
    char name1[100] , name2[100];
    int len1, len2;
    printf("Enter string 1: ");
    gets(name1);
    printf("Enter string 2: ");
    gets(name2);
    len1 = strlen(name1);
    len2 = strlen(name2);
    for (int i = 0; i <= len2; i++)
    {
        name1[len1 + i] = name2[i];
    }
    printf("Combined string is: %s", name1);
    return 0;
}