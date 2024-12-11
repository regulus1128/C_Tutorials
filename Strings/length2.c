#include <stdio.h>

int main()
{
    char name[30];
    unsigned count = 0;
    printf("Enter your name:");
    gets(name);
    for (int i = 0; name[i] != '\0'; i++)
    {
        printf("%c", name[i]);
        count++;
    }
    printf("\nthe length of the string is %u", count);
    return 0;
}