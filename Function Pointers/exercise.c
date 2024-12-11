// good afternoon and evening
#include <stdio.h>

float avg(int a, int b)
{
    return (a + b) / 2;
}
void goodAfternoon(float (*ptr)(int, int))
{
    printf("Good afternoon, user!\n");
    printf("The average is %0.4f\n", ptr(4, 5));
}
void goodEvening(float (*ptr)(int, int))
{
    printf("Good evening, user!\n");
    printf("The average is %0.4f\n", ptr(4, 5));
}
int main()
{
    float (*ptr)(int, int) = avg;
    goodAfternoon(ptr);
    goodEvening(ptr);

    return 0;
}