#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    char str[30];
    ptr = fopen("seek3.txt", "w+");
    fputs("hello", ptr);
    printf("Enter your name: ");
    scanf("%s", str);
    fputs(str, ptr);
    printf("%d", ftell(ptr));
    fclose(ptr);
    return 0;
}