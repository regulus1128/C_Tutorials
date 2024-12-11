#include <stdio.h>

int main(){
    int i, n = 5, factorial = 1;

    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf("%d factorial is equal to %d", n, factorial);

}