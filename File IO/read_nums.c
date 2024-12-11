#include <stdio.h>
// WAP to read numbers from a file and write even, odd and prime numbers to a separate file
int main()
{
    FILE *ptr1 = NULL;
    FILE *ptr2 = NULL;
    int num;
    ptr1 = fopen("read_nums1.txt", "r");
    ptr2 = fopen("read_nums2.txt", "w");
    while (!(feof(ptr1)))
    {
        fscanf(ptr1, "%d", &num); // do not forget the '&'
        if (num % 2 == 0)
        {
            fprintf(ptr2, "%d\t", num);
            // fputc(" ", ptr2);
        }
        // fputc('\n', ptr2);
        // if (num % 2 != 0)
        // {
        //     fprintf(ptr2, "%d\t", num);
        // }
    }

    return 0;
}