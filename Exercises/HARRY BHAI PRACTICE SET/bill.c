#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("bill.txt", "r+");
    char ch;
    while (!(feof(ptr)))
    {
        ch = fgetc(ptr);
        printf("%c", ch); 
    }
    fclose(ptr);
    return 0;
}