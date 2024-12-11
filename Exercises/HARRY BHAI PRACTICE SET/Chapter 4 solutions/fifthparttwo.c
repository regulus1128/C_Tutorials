#include <stdio.h>

int main(){
    int i = 0, sum = 0, n;
    printf("Enter number\n");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("The sum of first %d natural numbers is %d", n, sum);
}