//reverse a string without using string.h
#include <stdio.h>
#include <string.h>

int main()
{
    char name1[100];
    int len;
    char temp;
    printf("Enter string: ");
    gets(name1);
    len = strlen(name1);
    for (int i = 0; i < len / 2; i++)
    {
        temp = name1[i];
        name1[i] = name1[len - 1 - i];
        name1[len - 1 - i] = temp;
    }
    printf("Reversed string: %s", name1);
    return 0;
}