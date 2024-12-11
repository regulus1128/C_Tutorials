#include <stdio.h>
// WAP to multiply two matrices
int main()
{
    int a, b, c, d, i, j, k = 0, sum1;
    int arr1[10][10], arr2[10][10], sum[10][10];
    printf("Enter number of rows for matrix 1:\n");
    scanf("%d", &a);
    printf("Enter number of columns for matrix 1:\n");
    scanf("%d", &b);
    printf("Enter number of rows for matrix 2:\n");
    scanf("%d", &c);
    printf("Enter number of columns for matrix 2:\n");
    scanf("%d", &d);

    if (b != c)
    {
        printf("Matrix multiplication not possible.\n");
    }

    // entering the elements
    else
    {

        printf("Now enter elements of the first matrix:\n");
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                printf("Enter %d %d element of the matrix:\n", (i + 1), (j + 1));
                scanf("%d", &arr1[i][j]);
            }
        }
        printf("Now enter elements of the second matrix:\n");
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < d; j++)
            {
                printf("Enter %d %d element of the matrix:\n", (i + 1), (j + 1));
                scanf("%d", &arr2[i][j]);
            }
        }

        //logic starts
        printf("The product of the two matrices is:\n");
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < d; j++)
            {
                sum1 = 0;
                for (int k = 0; k < b; k++)
                {
                    sum1 = sum1 + (arr1[i][k] * arr2[k][j]);
                }
                sum[i][j] = sum1;
            }
        }

        //printing the result
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < d; j++)
            {
                printf("%d\t", sum[i][j]);
            }
            printf("\n");
        }
        
    }
    return 0;
}