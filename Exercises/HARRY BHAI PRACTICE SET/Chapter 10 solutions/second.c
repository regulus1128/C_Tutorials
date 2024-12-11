#include <stdio.h>
//WAP to generate multiplication table of a given number in text format
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("table.txt", "w");
    int num;
    printf("Enter the number you want multiplication table of: ");
    scanf("%d", &num);
    for (int i = 0; i <= 10; i++)
    {
        fprintf(ptr, "%d X %d = %d\n", num, i, num * i);
    }
    printf("Multplication table of %d successfully generated! Please check the file.", num);
    fclose(ptr);
    return 0;
}