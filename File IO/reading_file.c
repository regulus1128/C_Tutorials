#include <stdio.h>
int main()
{
    //reading a file
    FILE *ptr = NULL;
    char str[50];
    ptr = fopen("test.txt", "r"); //r - read mode
    fscanf(ptr, "%s", str); //fscanf is for reading the file
    printf("%s\n", str);
    fclose(ptr);
    return 0;
}