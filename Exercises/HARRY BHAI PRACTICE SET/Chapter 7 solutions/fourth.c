#include <stdio.h>

int main()
{
    int arr[10], n;
    printf("Enter the number you want multiplication table of: ");
    scanf("%d", &n);
    printf("The multiplication table of %d is:\n", n);

    for (int i = 0; i < 10; i++)
    {
        arr[i] = n * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n", n, (i + 1), arr[i]);
    }

    return 0;
}