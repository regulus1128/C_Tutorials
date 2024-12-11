#include <stdio.h>

int main()
{
    char name[30];
    char check;
    printf("Enter your name: ");
    gets(name);
    printf("Enter the character you want to check: ");
    scanf("%c", &check);
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (check == name[i])
        {
            printf("%c is present in the given string", check);
            break;
        }
        else if(check != name[i])
        {
            printf("%c is not present in the given string", check);
            break;
        }
    }
    return 0;
}