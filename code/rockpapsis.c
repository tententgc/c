#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h> 

char playershape()
{
    char shape;
    printf("[r]ock, [p]aper, [s]cissors\n");
    scanf(" %c", &shape);
    return tolower(shape);
}

char computershape()
{
    int r;
    r = rand() % 3;
    char s[3] = {'r', 'p', 's'};
    return s[r];
}

int main()
{
    // seed number
    srand(time(NULL));
    char player, computer,p1;
    player = playershape();
    while (player != 'q') {
    
        computer = computershape();
        printf("Player: %c Computers : %c\n", player,computer);
        if(player ==computer){
             printf("Tie\n");
        }
        else {
            {if ((player == 'r' && computer == 's') || (player == 'p' && computer == 'r') || (player == 's' && computer == 'p'))
        {
            printf("Player wins\n");
        }
        else
        {
            printf("Computer wins\n");
        }
        }
        player = playershape(); 
    }
    
}}