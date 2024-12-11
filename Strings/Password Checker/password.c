#include <stdio.h>
int main()
{
    char str[100];
    int count = 0;
    printf("Enter password: ");
    scanf("%s", str);
    for (int i = 0; str[i] != 0; i++)
    {

        if (str[i] >= 65 && str[i] <= 90)
        {
            count += 1;
        }
        else if (str[i] >= 97 && str[i] <= 122)
        {
            count += 1;
        }
        else if (str[i] >= 48 && str[i] <= 57)
        {
            count += 1;
        }

        else
        {
            count += 1;
        }
    }

    printf("%d\n", count);
    if (count < 4)
    {
        printf("Weak password");
    }
    else
    {
        printf("Strong password");
    }

    return 0;
}