#include <stdio.h>
#include <string.h>

void IsPalindrome(char[], int);

int main()
{
    char str[30];
    int len;
    printf("Enter the string: ");
    gets(str);
    len = strlen(str);
    // printf("%d\n", len);
    IsPalindrome(str, len);
    return 0;
}

void IsPalindrome(char s[], int len)
{
    for (int i = 0; i <= (len/2); i++)
    {
        if (s[i] != s[len - i - 1])
        {
            printf("String is not palindrome");
            return;
        }
    }
    printf("String is palindrome");    
}
