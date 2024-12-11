#include <stdio.h>
// WAP to compare 2 files
int main()
{
    FILE *ptr1 = NULL;
    FILE *ptr2 = NULL;
    ptr1 = fopen("cmp1.txt", "r");
    ptr2 = fopen("cmp2.txt", "r");
    char ch1, ch2;
    int flag = 0;
    while (ch1 != EOF && ch2 != EOF)
    {
        ch1 = fgetc(ptr1);
        ch2 = fgetc(ptr2);
        if (ch1 == ch2)
        {
            flag = 1;
        }
        // else
        // {
        //     flag = 0;
        // }
        if (ch1 == EOF && ch2 == EOF)
        {
            break;
        }
    }
    printf("%d\n", flag);
    if (flag == 1)
    {
        printf("Both the files have the same content");
    }
    else
    {
        printf("Both the files do not have the same content");
    }

    return 0;
}