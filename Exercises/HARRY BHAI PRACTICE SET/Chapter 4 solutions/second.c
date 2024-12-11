#include <stdio.h>

int main(){
    int i, j;    
    printf("Enter the number you want multiplication table of:\n");
    scanf("%d", &i);
    printf("The multiplication table of %d in reversed order is:\n", i);
    
    for (i, j = 10; j >= 0 ; j--)    
    {                
        printf("%d X %d = %d\n", i, j, i*j);        
    }
    
}