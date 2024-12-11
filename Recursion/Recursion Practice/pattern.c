#include <stdio.h>
int pattern(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    pattern(num);
    return 0;
}

int pattern(int num)
{
    if (num == 0 || num < 0)
    {
        printf("%d ", num);

        return 0;
    }
    printf("%d ", num);
    pattern(num - 5);
    printf("%d ", num);
}
