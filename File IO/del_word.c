#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("cmp1.txt", "r");
    char ch1, ch2;
    printf("Enter the word:\n");
    while (ch1 != '\n')
    {
        getc(ch1);
    }
    printf("%c", ch1);
    
    return 0;
}