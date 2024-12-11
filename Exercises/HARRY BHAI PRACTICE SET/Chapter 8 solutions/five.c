#include <stdio.h>

int main()
{
    char name1[30] = "Ronaldo";
    char name2[100]; 
    char i;
    printf("String name1 contains: %s\n", name1);
    for (int i = 0; name1[i] != '\0'; i++)
    {
        name2[i] = name1[i];
    }
    name2[i] = '\0';
    printf("name2 now contains %s", name2);
    return 0;
}
