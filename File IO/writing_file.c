#include <stdio.h>
int main()
{
    //writing a file
    FILE *ptr = NULL;
    char str[50] = "I hate my life"; 
    ptr = fopen("test.txt", "w");
    fprintf(ptr, "%s", str); // when we write to a file, it overwrites the previous data 
    // printf("%s\n", str);
    return 0;
}