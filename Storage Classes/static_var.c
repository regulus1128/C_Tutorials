#include <stdio.h>
void display();
int main()
{
    display();
    display();
    // printf("%d\n", a); -> will give an error since static variables are defined within a function block only in which they are declared
    return 0;
}

void display()
{
    static int a; //it retains the previous value and it does not reinitialize a to zero, so it will print 5 and 10.
    int y = 10; //it initializes y to 10 again that is why it will print 9 and 9
    a += 5;
    y--;
    printf("a is %d\n", a);
    printf("y is %d\n", y);
}