#include <stdio.h>
//typedef is used to create alias/synonyms of existing data types
typedef int num;

typedef struct student
{
    int roll_no;
    float marks;
    char name[25];
}stu;

int main()
{
    num a = 69;
    printf("%d\n", a);
    stu s1 = {1, 45, "Rawan"};
    printf("Roll number of Student1 is %d\n", s1.roll_no);
    printf("Marks of Student1 is %0.2f\n", s1.marks);
    printf("Name of Student1 is %s\n", s1.name);
    return 0;
}