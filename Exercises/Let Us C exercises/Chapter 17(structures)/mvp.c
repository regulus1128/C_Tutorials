#include <stdio.h>

struct mvp
{
    char name[50];
    int rank;
};

struct mvp player[5];
int main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("Enter name of player %d: ", (i + 1));
        scanf("%s", player->name[i]);
    }
    
    return 0;
}