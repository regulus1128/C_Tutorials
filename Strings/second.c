#include <stdio.h>

void printStr(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main()
{
    char name[30] = "Messi";
    char name2[30] = {'P', 'E', 'S', 'S', 'I', '\0'};
    printStr(name);
    printStr(name2);
    return 0;
}


