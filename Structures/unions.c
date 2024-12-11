#include <stdio.h>
union person
{
    int num;
    float percent;
    char fav;
};
int main()
{
    union person p1;
    p1.num = 1;
    p1.percent = 69.69;
    p1.fav = 'C';
    printf("Memory occupied by the union: %d\n", sizeof(p1)); // it occupies the size of the largest member of the union
    printf("Number: %d\n", p1.num);
    printf("Percent: %f\n", p1.percent);
    printf("Character: %c\n", p1.fav);
    
    return 0;
}