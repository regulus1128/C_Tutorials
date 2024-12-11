#include <stdio.h>

int main(){
    int i = 6;
    printf("The value of i++ is %d\n", i++);
    printf("The value of i after increment is %d\n", i);
    // if we write i++, it prints the value of i first then it increments

    i = 6;
    printf("The value of ++i is %d\n", ++i);
    printf("The value of i after increment is %d\n", i);
    // if we write ++i, i increments first then it prints the incremented value
    i = 6;
    i += 5; 
    // increments i by 5
    printf("%d", i);

}