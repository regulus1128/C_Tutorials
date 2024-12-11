#include <stdio.h>
//Predefined Macros
int main()
{
    printf("File name: %s\n", __FILE__);
    printf("Today's date: %s\n", __DATE__);
    printf("Time is: %s\n", __TIME__);
    printf("Line number is: %d\n", __LINE__);
    printf("ANSI? %d\n", __STDC__);
    return 0;
}