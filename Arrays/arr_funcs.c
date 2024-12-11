// if you change the value of array inside a function, it gets reflected in the main function
#include <stdio.h>
int func(int arr[]);
void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value at index %d is %d\n", i, ptr);
    }
}

int main()
{
    int arr[] = {1, 4, 7, 8};
    printf("The value at index 0(before function call) is %d\n", arr[0]);
    func(arr);
    printf("The value at index 0(after function call) is %d\n", arr[0]);
    return 0;
}

int func(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value at index %d is %d\n", i, array[i]);
    }
    array[0] = 69;
}
