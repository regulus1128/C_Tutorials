// program to find sum of n natural numbers
#include <stdio.h>

int main(){
    int n, i, sum = 0;
    printf("Enter number: \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
        
    }
    printf("The sum of first %d natural numbers is %d", n, sum);
    
}