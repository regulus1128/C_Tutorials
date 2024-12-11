#include <stdio.h>

void modify(char[], char[]);

int main()
{
    char str1[50], str2[50];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    modify(str1, str2);

    return 0;
}

void modify(char str1[], char str2[])
{
    int count = 0;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        count += 1;
    }
    printf("The length of string 1 is: %d\n", count);

    for (int j = 0; str2[j] != '\0'; j++)
    {
        if (str2[j] >= 'a' && str2[j] <= 'z')
        {
            str2[j] = str2[j] - 32;
        }
    }
    printf("The string in uppercase is %s", str2);
}