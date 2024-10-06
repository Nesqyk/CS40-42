#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>



int game(char player, char computer)
{
    if(player == computer) return -1;

    if (player == 's' && computer == 'p') return 0;
        else if (computer == 's' && player == 'p') return 1;
    
    if (player == 'z' && computer == 'p') return 1;
        else if (computer == 'z' && player == 'p') return 0;

    if (player == 's' && computer == 'z') return 1;
    else if (computer == 's' && player == 'z') return 0;

    return 0;
}

int isValid(char player)
{
    return player == 's' || player == 'p' || player == 'z' ? 0 : 1; 
}

int main()
{
    int n;
    char player, computer, result;


    srand(time(NULL));

    n = rand() % 100;

    if (n < 33) 
    {
        computer = 's';
    } else if (n > 33 && n < 66)
    {
        computer = 'p';
    } else {
        computer = 'z';
    }
    

    printf("ROCK PAPER SCISSOR\n");
    printf("Rock: s Paper: p Scissor: z ");
    scanf("%c", &player);

    if (isValid(player) == 1) {
        printf("Please input a valid choice\n");
        printf("Rock: s Paper: p Scissor: z\n");
        return 0;
    }

    result = game(player, computer);

    if (result == 1) {
        printf("User wins: User picked: %c : Computer Picked: %c", player, computer);
    } else if(result == 0)
    {
        printf("Computer wins: Computer picked: %c : User Picked: %c", computer, player);
    } else {
        printf("Tie");
    }

    return 0;
}