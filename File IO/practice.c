#include <stdio.h>
int main()
{
    //Syntax for fputc: fputc(character name, pointer name)
    
    FILE *ptr = NULL;
    char ch;
    ptr = fopen("test2.txt", "w"); //if file does not exist, w mode will create a file
    printf("enter the character you want to write to the file: ");
    scanf("%c", &ch);
    fputc(ch, ptr);
    fclose(ptr);

    return 0;
}