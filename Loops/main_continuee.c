#include <stdio.h>

int main(){
    int a, age;
    
    for (a = 0; a < 10; a++)
    {
        printf("%d. Enter your age:\n", a);
        scanf("%d", &age);  
        if (age > 10)
        {
            continue;
            // as long as condtion is satisfied, the continue keyword does not print the below statement
            // if condition is not satisfied(i.e if we put age less than 10) the below statement will print
        }
        printf("Your age is less than 10!\n");
    }
    
}