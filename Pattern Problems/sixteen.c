/* print the following pattern: 
*     *
**   **
*** ***
*******
*** ***
**   **
*     *
*/
#include <stdio.h>

int main()
{
    int i, j, k = 0;
    for (int i = 1; i <= 7; i++)
    {
        if (i <= 4)
        {
            k = k + 1;
        }
        else
        {
            k = k - 1;
        }

        for (int j = 1; j <= 7; j++)
        {
            if (j <= k || j >= (8 - k))
            {
                printf("*");
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