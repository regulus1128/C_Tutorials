#include <stdio.h>
int main()
{
    //writing a character and string to a file
    FILE *ptr = NULL;
    // char str[50] = "I hate my life"; 
    ptr = fopen("test.txt", "w");
    // fprintf(ptr, "%s", str); // when we write to a file, it overwrites the previous data 
    // printf("%s\n", str);
    fputc('x', ptr);
    fputs("Hello world", ptr);
    fclose(ptr);
    return 0;
}