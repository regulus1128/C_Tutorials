#include <stdio.h>
//if we want to store information of a large number of elements then we need array of structure
struct student
{
    // members of the structure
    int roll_no;
    float marks;
    char name[25];
};

int main()
{
    struct student stu[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter information for student %d:(Roll number, Marks and Name)\n", (i+1));
        scanf("%d %f %s", &stu[i].roll_no, &stu[i].marks, stu[i].name);
    }
    printf("\n");
    printf("----------------------------------------------------------");
    printf("\n");
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Student %d information:\n\n", (i+1));
        printf("Roll number: %d\n", stu[i].roll_no);
        printf("Marks: %0.2f\n", stu[i].marks);
        printf("Name: %s\n\n", stu[i].name);
    }
    printf("\nThanks for using our software!\n");
    return 0;
}
