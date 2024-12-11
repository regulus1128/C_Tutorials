#include <stdio.h>

int main(){
    int roll_no;
    printf("Enter your roll number: \n");
    scanf("%d", &roll_no);

    switch (roll_no)
    {
    case 1:
        printf("Your roll number is 1\n");

    case 2:
        printf("Your roll number is 2\n");
        break;
        // to prevent every statement from executing use break. Break exits the code as soon as the program satisfies the case
    case 3:
        printf("Your roll number is 3\n");
        // if we do not use break every statement will execute
    
    default:
        printf("Your roll number does not exist in our database!");
        // default is analagous to else
    }
}