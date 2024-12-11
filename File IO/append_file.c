#include <stdio.h>
int main()
{
    //appending to a file
    FILE *ptr = NULL;
    char str[50] = "I hate my life"; 
    ptr = fopen("test.txt", "a");
    fprintf(ptr, "\n%s", str); // in append mode, it adds to the previous data
    // printf("%s\n", str);
    printf("Successfully appended!\n");
    fclose(ptr);
    return 0;
}