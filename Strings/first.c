#include <stdio.h>

int main()
{
    char name[30];
    printf("Enter your name: ");
    // scanf("%s", name);
    // printf("Your name is %s", name);
    gets(name);
    printf("Your name is %s\n", name);
    printf("Your name is %s\n", &name[2]);
    printf("Your name is %0.5s\n", name);
    printf("Your name is %10.5s\n", name);
    puts(name);
    puts(name);

    return 0;
}