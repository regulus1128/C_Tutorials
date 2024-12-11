#include <stdio.h>
int main()
{
    //reading a string from a file
    FILE *ptr = NULL;
    ptr = fopen("test.txt", "r"); //r - read mode
    char str[50];
    fgets(str, 7, ptr); //it will read 7 characters(including null character and spaces)
    // char ch = fgetc(ptr);
    printf("Character is: %s\n", str);
    fclose(ptr);
    return 0;
}