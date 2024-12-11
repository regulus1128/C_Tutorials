#include <stdio.h>
// WAP to read a text file and character by character and write its content twice in a separate file
int main()
{
    FILE *ptr1 = NULL; // for file reading
    FILE *ptr2 = NULL; // for writing
    ptr1 = fopen("char.txt", "r");
    ptr2 = fopen("char2.txt", "w");
    char ch = fgetc(ptr1);
    while (ch != EOF)
    {
        // printf("%c", ch);
        fputc(ch, ptr2);
        // fputc(ch, ptr2);
        ch = fgetc(ptr1);
    }
    while (ch != EOF)
    {
        // printf("%c", ch);
        fputc(ch, ptr2);
        ch = fgetc(ptr1);
        // fputc(ch, ptr2);
    }
    fclose(ptr1);
    fclose(ptr2);

    return 0;
}