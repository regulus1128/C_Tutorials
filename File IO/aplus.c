#include <stdio.h>
//a+ is for reading and appending

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("test4.txt", "a+");
    fputs("patli kamariya more hai hai", ptr);
    fputs("\n life sucks", ptr);
    rewind(ptr);
    while (!(feof(ptr)))
    {
        char ch = fgetc(ptr);
        printf("%c", ch);
    }
    
    fclose(ptr);
    return 0;
}