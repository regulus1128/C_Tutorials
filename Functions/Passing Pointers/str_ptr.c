#include <stdio.h>
void displayString(char *a)
{
    printf("The string is:\n");
    for (int i = 0; *(a + i) != '\0'; i++)
    {
        printf("%c", *(a + i));
    }
}

int main()
{
    char arr[30];
    char *ptr = arr;
    printf("Enter string: ");
    scanf("%s", arr);
    displayString(ptr);
    return 0;
}