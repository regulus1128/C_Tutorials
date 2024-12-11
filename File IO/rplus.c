#include <stdio.h>
int main()
{
    // r+ is both for reading and writing a file
    // if file does not exist it will not create a new file
    // r+ mode allows us to write anywhere without overwriting
    FILE *ptr = NULL;
    ptr = fopen("test.txt", "r+");
    // fputc('c', ptr); //it will put the character at the first position (patli changes to catli LOL)

    fputs("kali", ptr); //it will put the string at the first position and will occupy and replace the characters according to its length (patli changes to kalii, length of "kali" is 4 so it took 4 places and the 'i' from "patli" retained its position)
    
    fputc('a', ptr); //if any character is added after fputs, it will be added next to the string ('a' is added after "kali" and we get the output "kalia" LOL!)  
    fclose(ptr);
    return 0;
}