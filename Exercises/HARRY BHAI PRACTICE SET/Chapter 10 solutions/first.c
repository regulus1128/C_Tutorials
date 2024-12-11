#include <stdio.h>
//WAP to read 3 integers from a file
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("ints.txt", "r");
    int a, b, c;
    fscanf(ptr, "%d %d %d", &a, &b, &c);
    printf("The integers in the file are: %d %d %d", a, b, c);
    return 0;
}