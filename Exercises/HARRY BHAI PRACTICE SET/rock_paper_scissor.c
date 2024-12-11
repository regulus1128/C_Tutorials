#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// int rock = 0;
// int paper = 1;
// int scissor = 2;
int main()
{
    // declaring the variables
    srand(time(NULL));
    int player;
    int i = 1, player_score = 0, com_score = 0;
    char name[30];

    // printing all the neccessary information
    printf("WELCOME TO ROCK PAPER SCISSORS! THIS GAME IS MADE USING C LANGUAGE! I HOPE YOU LIKE IT!\n");
    printf("------------------------------------------------------------------------------------\n");
    printf("Please enter your name: ");
    scanf("%s", name);
    printf("Welcome, %s! Good luck against the computer!\n", name);

    // Main logic starts
    while (i != 0)
    {
        int com = rand() % 3;
        // printf("%d\n", com); to show the random number generated

        printf("Enter 0 for rock, 1 for paper and 2 for scissor. Press a number greater than 2 to exit from the game:\n");
        scanf("%d", &player);

        //to exit from the loop
        if (player > 2)
        {
            i = 0;
            printf("Exiting the game...\n\n");
            break;
        }

        // if player chooses paper(1)
        if (player == 1) // paper
        {
            if (com == 0) // rock
            {
                printf("You have chosen paper and the computer has chosen rock. You won!\n");
                player_score++;
            }
            else if (com == 2) // scissor
            {
                printf("You have chosen paper and the computer has chosen scissors. You lost!\n");
                com_score++;
            }
            else
            {
                printf("Both you and the computer has chosen paper and its a tie!\n");
            }
            printf("*******************************\n");
        }

        // if player chooses scissors
        if (player == 2) // scissors
        {
            if (com == 0) // rock
            {
                printf("You have chosen scissors and the computer has chosen rock. You lost!\n");
                com_score++;
            }
            else if (com == 1) // paper
            {
                printf("You have chosen scissors and the computer has chosen paper. You won!\n");
                player_score++;
            }
            else
            {
                printf("Both you and the computer has chosen scissors and its a tie!\n");
            }
            printf("*******************************\n");

        }

        // if player chooses rock
        if (player == 0) // rock
        {
            if (com == 1) // paper
            {
                printf("You have chosen rock and the computer has chosen paper. You lost!\n");
                com_score++;
            }
            else if (com == 2) // scissor
            {
                printf("You have chosen rock and the computer has chosen scissors. You won!\n");
                player_score++;
            }
            else
            {
                printf("Both you and the computer has chosen rock and its a tie!\n");
            }
            printf("\n*******************************\n");

        }

        i++;
    }

    // Displaying the scores
    if (player_score > com_score)
    {
        printf("You scored: %d point(s).\nComputer scored: %d point(s).\nYou won! Congratulations!!!\n", player_score, com_score);
    }
    else if (player_score < com_score)
    {
        printf("You scored: %d point(s).\nComputer scored: %d point(s).\nYou lost! Better luck next time!!!\n", player_score, com_score);
    }
    else
    {
        printf("You and the computer both scored %d point(s) and its a tie! Go and decide the winner by tossing a coin! JK;)\n", player_score);
    }
    printf("-------------------------------------------------------------------\n");
    printf("HOPE YOU ENJOYED MY GAME! THANKS FOR PLAYING!\nHAVE A NICE DAY AHEAD! :D");
    // getchar();
    return 0;
}