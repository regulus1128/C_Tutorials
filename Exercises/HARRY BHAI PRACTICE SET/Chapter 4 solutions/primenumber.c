#include <stdio.h>

int main(){
    int num, start = 2;
    printf("Enter number\n");
    scanf("%d", &num);

    while (start <= num - 1)   
    {
        if (num % start == 0)
        {
            printf("%d is not a prime number", num);            
            break;
        }
        start++;
    }
    if (start == num)
       {
           printf("%d is a prime number", num);
       }
        
}