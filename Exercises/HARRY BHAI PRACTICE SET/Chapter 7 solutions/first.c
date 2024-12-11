#include <stdio.h>

int main(){
    int arr[10] = {1, 4, 5, 47, 69, 2, 0, -69, 8, 9};
    int *ptr = arr;
    printf("Value is %d\n", *ptr);
    ptr = ptr + 2;
    printf("Value is %d", *ptr);
    return 0;
}