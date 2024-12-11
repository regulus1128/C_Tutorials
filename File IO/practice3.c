#include <stdio.h>
int main()
{
    //Syntax for fprintf: fprintf(pointer name, format specifiers, name of the variables)
    FILE *ptr = NULL;
    char ch;
    int num;
    float fn;
    ptr = fopen("test2.txt", "w"); //if file does not exist, w mode will create a file
    printf("enter the character you want to write to the file: ");
    scanf("%c", &ch);
    printf("enter the number you want to write to the file: ");
    scanf("%d", &num);
    printf("enter the floating point you want to write to the file: ");
    scanf("%f", &fn);
    fprintf(ptr, "%c"  "%d"  "%f", ch, num, fn);
    fclose(ptr);

    return 0;
}