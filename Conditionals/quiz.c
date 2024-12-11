#include <stdio.h>

int main(){
    int marks;
    printf("Enter your marks: \n");
    scanf("%d", &marks);

    if (marks >= 90)
    {
        printf("Your grade is A. Congrats!");
    }
    else if (marks >= 80)
    {
        printf("Your grade is B. Keep it up!");
    }
    else if (marks >= 70)
    {
        printf("Your grade is C. Better luck next time!");
    }
    else if (marks >= 60)
    {
        printf("Your grade is D. Try harder!");
    }
    else if (marks >= 100)
    {
        printf("Invalid marks!");
    }
    else{
        printf("Your grade is F. Oh no!");
    }
    return 0;
        
}