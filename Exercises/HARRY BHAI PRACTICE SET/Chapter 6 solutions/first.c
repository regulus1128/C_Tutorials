#include <stdio.h>

int main(){
    int a = 10;
    int *ptr = &a;
    printf("The address of a is %x\n", ptr);
    printf("The value of a is %d\n", *ptr);
    return 0;

}