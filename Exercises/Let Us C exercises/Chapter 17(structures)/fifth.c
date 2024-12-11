#include <stdio.h>
struct employee
{
    int emp_code;
    char name[50];
    int date;
    int month;
    int year;
};

struct employee e[5];
void compare(int);
int main()
{
    int date1;

    for (int i = 0; i < 5; i++)
    {
        printf("Please enter details for employee %d below:\n", (i + 1));
        printf("Employee code: ");
        scanf("%d", &e[i].emp_code);
        printf("Name of the employee: ");
        scanf("%s", e[i].name);
        printf("Enter date of joining: ");
        scanf("%d", &e[i].date);
        printf("Enter month of joining: ");
        scanf("%d", &e[i].month);
        printf("Enter year of joining: ");
        scanf("%d", &e[i].year);
    }
    printf("Enter current date: ");
    scanf("%d", &date1);
    compare(date1);
    return 0;
}

void compare(int date1)
{
    printf("The following employees have a tenure of more than 3 years:\n");
    for (int i = 0; i < 5; i++)
    {
        if (date1 - e[i].date >= 3)
        {
            printf("%s\n", e[i].name);
        }
    }
}