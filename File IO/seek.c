#include <stdio.h>
//syntax for fseek: int fseek(file pointer, offset, position(or origin));
//return type is int
//SEEK_SET: beginning of file
//SEEK_END: end of file
//SEEK_CUR: current position
int main()
{
    FILE *ptr = NULL;
    char ch;
    ptr = fopen("seek.txt", "r");
    fseek(ptr, 6, SEEK_SET);
    ch = fgetc(ptr);
    printf("%c\n", ch);
    fseek(ptr, -3, SEEK_CUR);
    ch = fgetc(ptr);
    printf("%c\n", ch);
    fseek(ptr, -3, SEEK_END);
    ch = fgetc(ptr);
    printf("%c\n", ch);
    fclose(ptr);
    return 0;
}