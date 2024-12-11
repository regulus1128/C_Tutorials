#include <stdio.h>
//WAP to count number of lines in a file
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("lines.txt", "r");
    int count = 1;
    char ch;
    while (!(feof(ptr)))
    {
        ch = fgetc(ptr);
        if (ch == '\n')
        {
            count++;
        }
    }
    printf("The number of lines present in the file is %d", count);
    fclose(ptr);
    
    return 0;
}