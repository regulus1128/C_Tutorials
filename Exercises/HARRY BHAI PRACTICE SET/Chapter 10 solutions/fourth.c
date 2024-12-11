#include <stdio.h>
//take name and salary of two employees as user input and write them to a text file
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("employee.txt", "w");
    int sal1, sal2;
    char name1[30], name2[30];
    printf("Enter salary and name of employee 1: ");
    scanf("%d %s", &sal1, name1);
    printf("Enter salary and name of employee 2: ");
    scanf("%d %s", &sal2, name2);
    fprintf(ptr, "%s, %d\n%s, %d", name1, sal1, name2, sal2);
    fclose(ptr);
    return 0;
}