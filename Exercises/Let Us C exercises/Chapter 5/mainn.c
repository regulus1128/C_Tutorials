#include <stdio.h>

int main(){
    int num = 10, i;
    
    printf("The following are the odd numbers between 1 to %d\n", num);
    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        
        printf("%d\n", i);
        
        // printf("%d\n", i);
    }
    


}