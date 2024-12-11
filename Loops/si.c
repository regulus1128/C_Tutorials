#include <stdio.h>

int main(){
    int p, n, r, si, count;
    count = 1;

    while (count <= 3)
    {
        printf("\nEnter values of p, n and r\n");
        scanf("%d %d %d", &p, &n, &r);
        si = p * n * r / 100;
        printf("Simple interest = Rs. %d", si);
        count = count + 1;
    }
    return 0; 
}