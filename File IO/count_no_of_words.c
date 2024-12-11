#include <stdio.h>
// WAP to count number of words in a file

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("lines.txt", "r");
    int count = 1;
    char ch;
    while (!(feof(ptr)))
    {
        ch = fgetc(ptr);
        if (ch == ' ' || ch == '\n')
        {
            count++;
        }
    }
    printf("Number of words in the text file: %d", count);
    fclose(ptr);
    return 0;
}