/* print the following pattern: 
*****
 ****
  ***
   **
    *   */
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i - j > 0)
            {
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}