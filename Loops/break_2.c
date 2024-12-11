#include <stdio.h>

int main(){
    int a, age;
    
    for (a = 0; a < 10; a++)
    {
        printf("%d. Enter your age:\n", a);
        scanf("%d", &age);  
        if (age > 10)
        {
            break;
            // the break statement will discontinue the loop completely
        }
        
    }
    
}