//coversion of a string to uppercase/lowercase without using string.h
#include <stdio.h>

int main()
{
    char name[30];
    printf("Enter string: ");
    gets(name);
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] = name[i] + 32;
        }
    }
    printf("The string in lowercase; %s\n", name);
    for (int j = 0; name[j] != '\0'; j++)
    {
        if (name[j] >= 'a' && name[j] <= 'z')
        {
            name[j] = name[j] - 32;
        }
    }
    printf("The string in uppercase: %s\n", name);
    return 0;
}