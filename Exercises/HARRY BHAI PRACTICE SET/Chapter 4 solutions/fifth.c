#include <stdio.h>

int main(){
    int i, sum = 0, n;
    printf("Enter number\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("The sum of first %d natural numbers is %d", n, sum);
    
}