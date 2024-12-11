#include <stdio.h>

int avg(int, int, int);

int main(){
    int a, b, c, x;
    x = avg(a, b, c);
    // x = (float)(a + b + c) / 3;
    printf("The average is %d", x);
}

int avg(int i, int j, int k){
    
    printf("Enter 3 numbers\n");
    scanf("%d %d %d", &i, &j, &k);   
    return (i + j + k) / 3;
}