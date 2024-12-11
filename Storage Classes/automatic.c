#include <stdio.h>
// auto int x = 122; not allowed
int main()
{
    auto int x = 5;
    {
        auto int x; //if we do not declare it will take garbage value
        // auto int y = 100; 
        printf("Inside block(x): %d\n", x);
        // printf("Inside block(y): %d\n", y);
    }
    printf("Inside main(outside the block): %d\n", x);
    return 0;
}