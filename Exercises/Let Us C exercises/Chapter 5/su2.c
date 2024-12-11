#include <stdio.h>

int main(){
    int a, sum = 0;
    do
    {
        printf("Enter number:\n");
        scanf("%d", &a);
        if (a < 0)
        {
            break;
        }
        sum = sum + a;
        
    } while (1);
    printf("The sum is %d", sum);
}
    