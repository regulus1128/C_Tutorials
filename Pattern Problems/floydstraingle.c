//Floyd's Triangle
#include <stdio.h>

int main()
{
    int i, j, count = 0, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Here is your Floyd's Triangle!\n");
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (j <= i)
            {
                count = count + 1;
                printf("%d ", count);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
