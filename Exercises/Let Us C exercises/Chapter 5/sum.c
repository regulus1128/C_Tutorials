#include <stdio.h>

int main(){
    int a, sum = 0;
    while (1)
    {
        printf("Enter number:\n");
        scanf("%d", &a);
        if (a < 0)
        {
            break;
            
        }
        sum = sum + a;
        
    }
    printf("The sum is %d\n", sum);
    
}