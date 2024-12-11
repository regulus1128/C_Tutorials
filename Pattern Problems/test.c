#include <stdio.h>
int count = 0;
int main()


{
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            count = count + i;
            printf("%d", count);
        }
        printf("\n");
    }
    return 0;
}