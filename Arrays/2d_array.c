#include <stdio.h>
// General declaration of 2d array: (data type) (name of array) [row size][column size]
int main()
{
    int arr[3][3], sum = 0;
    printf("Enter elemets of the matrix: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The matrix is: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
            sum = sum + arr[i][j];
        }
        printf("\n");
    }
    printf("The sum of all the elemets of the matrix is: %d", sum);
}