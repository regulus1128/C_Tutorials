#include <stdio.h>
int main()
{
    char str[30];
    int sum = 0;
    int arr[4];
    printf("Enter password: ");
    scanf("%s", str);
    for (int i = 0; str[i] != 0; i++)
    {

        if (str[i] >= 65 && str[i] <= 90)
        {
            arr[0] = 1;
        }
        else if (str[i] >= 97 && str[i] <= 122)
        {
            arr[1] = 1;
        }
        else if (str[i] >= 48 && str[i] <= 57)
        {
            arr[2] = 1;
        }

        else
        {
            arr[3] = 1;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        sum += arr[i];
    }

    printf("%d\n", sum);
    if (sum < 4)
    {
        printf("Weak password");
    }
    else
    {
        printf("Strong password");
    }

    return 0;
}