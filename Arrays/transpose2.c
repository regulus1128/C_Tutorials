//WAP to print transpose of a matrix
#include <stdio.h>

int main()
{
    int arr[2][3], arr2[2][3];
    printf("Enter elements of the matrix:");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of the above matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            arr2[j][i] = arr[i][j];
            printf("%d ", arr2[j][i]);
        }
        printf("\n");
    }
    return 0;
}