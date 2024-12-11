#include <stdio.h>
//there are two ways we can declare an array: compile time and run time

// 2. run time
// formula for calclating address in an array: base address + index * size of data type
int main()
{
    int arr[5];
    printf("Enter the elements of array ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The elements of array are:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("The elements of array in reverse order are:\n");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
}