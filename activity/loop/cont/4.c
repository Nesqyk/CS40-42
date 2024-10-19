/*
Programmer: Tabornal, Tyrone
Activity No. 4: Loop
Description: A program that prints pyramid of stars.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    int rows;

    // Prompt user to enter number of rows
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Loop to print pyramid of stars
    for (int i = 1; i <= rows; i++)
    {
        // print spaces before the stars
        for (int j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        // Print the stars with spaces between them
        for (int k = 1; k <= i; k++) 
        {
            printf("*");

            if(k < i)
            {
                printf(" ");  // print a space
            
            }
        }
        printf("\n");
    }

    return 0;
}