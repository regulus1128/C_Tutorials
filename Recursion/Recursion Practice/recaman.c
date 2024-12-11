#include <stdio.h>
// Print n terms of Recaman sequence using recursion
int recaman(int);
int main()
{
    int num;
    printf("Enter number of terms: ");
    scanf("%d", &num);
    printf("%d ", recaman(num));
    return 0;
}
int recaman(int num)
{
    if (num == 0)
    {
        return 0;
    }
    if (num > 0 && )
    {
        return recaman(num - 1) - num;
    }
    return recaman(num - 1) + num;
}
