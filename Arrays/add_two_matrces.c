//WAP to print sum of two matrices

#include <stdio.h>

int main()
{
    int arr1[3][3], arr2[3][3], sum_matrix[3][3];
    printf("Enter elements of the first matrix ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter elements of the second matrix ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("The first matrix is\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix is\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    printf("The sum of the two matrices is\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum_matrix[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", sum_matrix[i][j]);
        }
        printf("\n");
    }
}