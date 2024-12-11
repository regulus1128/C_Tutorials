#include <stdio.h>
//WAP to modify a file containing an integer to double its value
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("double.txt", "r+");
    int num, num2;
    fscanf(ptr, "%d", &num);
    printf("%d", num);
    num2 = num * 2;
    fprintf(ptr, "%d", num * 2);
    fclose(ptr);
    return 0;
}