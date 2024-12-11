#include <stdio.h>
int main()
{
    int arr[3][3];
    int max;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the %d %d element: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    max = arr[0][0];
    printf("The matrix you have entered is:\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    printf("the largest integer in the matrix is %d", max);
}
