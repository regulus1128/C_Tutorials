#include <stdio.h>

int main()
{
    char name[30];
    char check;
    int count = 0;
    printf("Enter the string: ");
    gets(name);
    printf("Enter the character you want to check the occurence of: ");
    scanf("%c", &check);
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (check == name[i])
        {
            count++;
        }
    }
    printf("The number of times %c occured in the given string is: %d", check, count);
    return 0;
}