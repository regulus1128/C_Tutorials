#include <stdio.h>

int main()
{
    int a, b, c;
    a = 0;
    b = 0;
    c = 1;

    // 0 stands for FALSE, 1 for TRUE

    // && stands for AND operator, || stands for OR operator, ! stands for NOT operator

    // AND: Both values should be true then only it returns true
    // OR: At least one value should be true

    printf("a && b = %d\n", a && b);    
    printf("a || b = %d\n", a || b);
    printf("a && c = %d\n", a && c);
    printf("a || c = %d\n", a || c);
    printf("c && c = %d\n", c && c);
    printf("c || c = %d\n", a || c);
    printf("!a = %d\n", !a);
    printf("!c = %d\n", !c);


    return 0;

}
