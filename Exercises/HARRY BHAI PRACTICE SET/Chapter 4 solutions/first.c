#include <stdio.h>

int main(){
    int i, j, sum = 0;    
    printf("Enter the number you want multiplication table of:\n");
    scanf("%d", &i);
    printf("The multiplication table of %d is:\n", i);
    
    for (i, j = 0; j <= 10; j++)    
    {                
        printf("%d X %d = %d\n", i, j, i * j);
        sum = (sum) + (i * j);
               
    }
    printf("The sum is %d", sum); 
    
}