#include <stdio.h>
int main()
{
    //reading a character from a file
    FILE *ptr = NULL;
    char str[50];
    ptr = fopen("test.txt", "r"); //r - read mode
    char ch = fgetc(ptr);
    printf("Character is: %c\n", ch);
    fclose(ptr);
    return 0;
}