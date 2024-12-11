#include <stdio.h>

int main(){
    char letter;
    printf("Enter a letter: \n");
    scanf("%c", &letter);

    if (letter <= 122 && letter >= 97){
        printf("%c is lowercase. \n", letter);
    }
    else{
        printf("%c is uppercase. \n", letter);
    }

}