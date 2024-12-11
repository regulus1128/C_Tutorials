#include <stdio.h>
struct students
{
    int roll_no;
    char name[50];
    char course[50];
    char department[30];
    int year;
};

struct students s[5];

void display();
void inputData();
void year(int);
// void RollNo();

int main()
{
    int y;
    // printf("Enter details of the 5 students:\n ");
    inputData();
    // printf("The details of the 5 students are: \n");
    display();
    printf("Enter year: ");
    scanf("%d", &y);
    year(y);
    return 0;
}

void inputData()
{
    for (int i = 0; i < 5; i++)
    {
        printf("Enter roll number of student %d: ", (i + 1));
        scanf("%d", &s[i].roll_no);
        printf("Enter name of student %d: ", (i + 1));
        scanf("%s", s[i].name);
        printf("Enter course of student %d: ", (i + 1));
        scanf("%s", s[i].course);
        printf("Enter department of student %d: ", (i + 1));
        scanf("%s", &s[i].department);
        printf("Enter year of joining of student %d: ", (i + 1));
        scanf("%d", &s[i].year);
        printf("\n");
    }
}
void display()
{
    for (int i = 0; i < 5; i++)
    {
        printf("Details of student %d:\n\n", (i + 1));
        printf("Roll number: %d\n", s[i].roll_no);
        printf("Name of student: %s\n", s[i].name);
        printf("Course: %s\n", s[i].course);
        printf("Department: %s\n", s[i].department);
        printf("Year of joining: %d\n", s[i].year);
        printf("\n");
    }
}

void year(int y)
{
    int i;
    for (int i = 0; i < 5; i++)
    {
        if (y == s[i].year)
        {
            printf("%s joined in the year %d", s[i].name, s[i].year);
        }
    }
}
