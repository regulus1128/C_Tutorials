#include <stdio.h>
#include <stdlib.h>
// syntax for fgetc: char variable_name = fgetc(file_pointer_name);
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("practice4.txt", "r");
    if (ptr == NULL)
    {
        printf("Error!\n");
        exit(1);
    }
    while (!feof(ptr)) //feof : end of file flag
    {
        char ch = fgetc(ptr);
        printf("%c", ch);
    }

    fclose(ptr);

    return 0;
}