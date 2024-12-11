#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("seek.txt", "r+");
    fseek(ptr, 11, SEEK_SET);
    // char ch = fgetc(ptr);
    // printf("%c", ch); 
    // fputs("va", ptr);
    fputs("mad", ptr);
    fclose(ptr);
    return 0;
}