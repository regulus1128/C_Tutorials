/* print the following pattern: 
  *
 *  * 
*  *  * 
*/
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j >= (4 - i) && j <= (2 + i) && (i + j) % 2 == 0)
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