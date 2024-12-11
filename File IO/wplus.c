#include <stdio.h>
//w+ is used both for reading and writing
//if file does not exist, a new file will be created
//if file exists, it will erase all the previous content and the cursor will move to the starting position
//rewind brings the file pointer to the beginning
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("test3.txt", "w+");
    fputs("patli kamariya more hai hai", ptr);
    fclose(ptr);
    return 0;
}