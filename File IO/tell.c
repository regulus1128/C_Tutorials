#include <stdio.h>
//ftell() function
int main()
{
    FILE *ptr = NULL;
    char ch;
    ptr = fopen("test.txt", "r+");
    printf("%d\n", ftell(ptr));
    ch = fgetc(ptr);
    printf("%d\n", ftell(ptr));

    //to read the total number of characters in a file
    fseek(ptr, 0, SEEK_END);
    printf("%d\n", ftell(ptr));
    rewind(ptr);
    printf("%d\n", ftell(ptr));
    fclose(ptr);
    return 0;
}