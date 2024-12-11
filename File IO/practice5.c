#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("practice4.txt", "r");
    char str[110];
    // printf("String is: %s", str); 
    // fgets(str, 25, ptr);
    //fgets function stops reading the file after it encounters a new line
    while (!feof(ptr))
    {
        fgets(str, 25, ptr);
        printf("%s", str);
    }

    return 0;
}