#include <stdio.h>
int main()
{
    //Syntax for fputs: fputs(string name, pointer name)
    FILE *ptr = NULL;
    char str[50];
    ptr = fopen("test2.txt", "w"); //if file does not exist, w mode will create a file
    printf("enter the string you want to write to the file: ");
    gets(str);
    fputs(str, ptr);
    fclose(ptr);
    return 0;
}