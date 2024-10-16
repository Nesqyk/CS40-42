/*
Programmer: Tabornal, Tyrone M.
Activity No.2: Loop
Description: This program calculates the average scores of 5 bowlers, each with 3 scores.
*/

#include <stdio.h>

int main() 
{
    // Variables for each player's scores
    int score;
    float average;
    
    // Loop for 5 players
    for (int i = 1; i <= 5; i++) 
    {
        average = 0;
        
        // Loop for 3 scores per player
        for (int j = 1; j <= 3; j++) 
        {
            printf("Enter Score No. %d for bowler %d: ", j, i);
            
            // Input score for each bowler
            scanf("%d", &score);
            
            // Accumulate the scores
            average += score;
        }
        
        // Calculate the average score after all 3 scores are entered
        average /= 3.0;
        
        // Print the average score for each bowler after calculating
        printf("Bowler %d's average score: %.2f\n", i, average);
    }

    return 0;
}
