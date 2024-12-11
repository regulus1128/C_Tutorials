//write macro defintions to test whether a character is uppercase or not
#include <stdio.h>
#define ISUPPER(ch) (ch >= 65 && ch <= 90 ? 1 : 0)
// #if 
//     printf("Uppercase");
// #else
//     printf("Not uppercase");
int main()
{
    char ch;
    printf("Enter character: ");
    getchar();
    scanf("%c", &ch);
    ISUPPER(ch);
    printf("%d", ISUPPER(ch));
    return 0;
}