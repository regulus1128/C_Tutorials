#include <stdio.h>

int main(){
    int a = 1;
    do
    {
        printf("%d\n", a);
        if (a == 5)
        {
            break;
        }
        a++;
    } while (a <= 10);
    
}