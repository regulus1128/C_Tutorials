#include <stdio.h>
//structure is an user defined data type

/* general syntax: 
struct (name(tag) of structure)
{
    variables;
    ...(known as members of the structure)
};
*/
struct student
{
    // members of the structure
    int roll_no;
    float marks;
    char section;
    char name[25];
}student3 = {3, 45, 'C', "Mbappe"};
int main()
{
    // initialization at compile time
    struct student student1 = {1, 69.69, 'A', "Messi"}; //student1 is known as object of the structure
    struct student student2;
    
    
    printf("%d\n", sizeof(struct student));
    //we can access the values of structures using dot operator
    printf("Roll number of Student1 is %d\n", student1.roll_no);
    printf("Marks of Student1 is %0.2f\n", student1.marks);
    printf("Name of Student1 is %s\n", student1.name);

    // initialization at runtime
    printf("Enter details for student 2: ");
    scanf("%d %f %c %s", &student2.roll_no, &student2.marks, &student2.section, student2.name);
    printf("Roll number of Student2 is %d\n", student2.roll_no);
    printf("Marks of Student2 is %0.2f\n", student2.marks);
    printf("Section of Student2 is %c\n", student2.section);
    printf("Name of Student2 is %s\n", student2.name);
    printf("Roll number of Student3 is %d\n", student3.roll_no);
    printf("Marks of Student3 is %0.2f\n", student3.marks);
    printf("Section of Student3 is %c\n", student3.section);
    printf("Name of Student3 is %s\n", student3.name);
    return 0;
}