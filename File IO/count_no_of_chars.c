#include <stdio.h>
// WAP to count number of characters in a file

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("lines.txt", "r");
    int count = 0;
    char ch;
    while (!(feof(ptr)))
    {
        ch = fgetc(ptr);
        if (ch != '\n')
        {
            count++;
        }
    }
    printf("The number of characters present in the file is %d", count);
    fclose(ptr);

    return 0;
}