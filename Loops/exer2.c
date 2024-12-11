//  print n natural numbers
#include <stdio.h>

int main(){
    int a;
    printf("Enter the value of a\n");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        printf("%d\n", i);
    }
    
}