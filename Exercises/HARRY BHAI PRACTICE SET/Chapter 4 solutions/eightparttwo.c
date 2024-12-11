#include <stdio.h>

int main(){
    int i = 1, n = 5, factorial = 1;

    while (i <= n)
    {
        factorial = factorial * i;
        i++;
    }
    printf("%d factorial is equal to %d", n, factorial);
}