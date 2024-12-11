#include <stdio.h>

int main(){
    char a;
    printf("Enter character:\n");
    scanf("%c", &a);

    if (a >= 65 && a <= 90)
    {
        printf("%c is uppercase\n", a);
    }
    else if (a >= 97 && a <= 122)
    {
        printf("%c is lowercase\n", a);
    }
    else if (a >= 48 && a <= 57)
    {
        printf("%c is a digit\n", a);
    }

    
     
}