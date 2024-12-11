#include <stdio.h>

int main(){
    char sub;
    printf("Welcome to prize distribution ceremony! We will be giving gifts to students based on how many subjects they have passed!\n");

    printf("Type 'm' if you have passed only in maths, Type 's' if you have passed only in science, Type 'b' if you have passed in both. \n");

    scanf("%c", &sub);

    printf("Wait a sec...\n");

    if (sub == 'm')
    {
       printf("Congrats! You have passed in science and you can select any gift worth 15 $!"); 
    }
    else if (sub == 's')
    {
        printf("Congrats! You have passed in maths and you can select any gift worth 15 $!"); 
    }
    else if (sub == 'b')
    {
        printf("Woohoo! You have passed in both and won the jackpot!!! Now you can select any gift worth 45 $!");
    }
    else{
        printf("Invalid input!");
    }

    return 0;
}
    
    