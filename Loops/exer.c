#include <stdio.h>

int main(){
    int num, count;
    printf("Enter number:\n");
    scanf("%d", &num);
    count = 1;

    do
    {
        printf("%d\n", count);
        count++;
    } while (num >= count);
    
}