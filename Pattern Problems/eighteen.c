/* print the following pattern: 
   1
  121
 12321
1234321
*/
#include <stdio.h>

int main()
{
    int i, j, k;
    for (int i = 1; i <= 4; i++)
    {
        k = 1;
        for (int j = 1; j <= 7; j++)
        {
            if (j >= (5 - i) && j <= (3 + i))
            {
                printf("%d", k);
                // j < 4 ? k++ : k--;
                if (j < 4)
                {
                    k++;
                }
                else
                {
                    k--;
                }
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