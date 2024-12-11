#include <stdio.h>
struct student
{
    int roll_no;
    float marks;
    char name[25];
};
int main()
{
    struct student s1 = {1, 55, "Joshua"};
    struct student *ptr = &s1;
    
    printf("Info of Student 1:\n");
    printf("Roll number: %d  Marks: %0.2f   Name: %s\n", ptr->roll_no, ptr->marks, ptr->name);
    printf("Roll number: %d  Marks: %0.2f   Name: %s\n", (*ptr).roll_no, (*ptr).marks, (*ptr).name);
    return 0;
}
