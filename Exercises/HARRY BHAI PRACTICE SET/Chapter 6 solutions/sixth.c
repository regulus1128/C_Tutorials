#include <stdio.h>

void ChangeValue(int);

int main()
{
    int a;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    ChangeValue(a);
    printf("The value of a after changing it is %d", a);
    return 0;
}

void ChangeValue(int a)
{
    a = a * 10;
    printf("The value of a after changing it is %d\n", a);
}