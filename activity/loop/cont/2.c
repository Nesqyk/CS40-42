/*
Programmer: Tabornal, Tyrone M.
Activity No. 2: Loop
Description: A program that reads a number and displays the numbers from 0 to the number entered. 
The program should display 10 numbers per line.
*/

#include <stdio.h>

int main()
{
    // Declare variable 
    int number;

    // Prompt user to enter a number
    printf("The first line contains the size of the numbers: \n\n");
    scanf("%d", &number);

    // Check if the number is greater than 50
    if(number > 50)
    {
        // Display error message
        printf("Number must be below 50!");

        return 1;
    }

    // Display multiple lines containing 10 numbers per line
    printf("Multiple lines containing 10 numbers per line: \n\n");

    // Loop to display numbers from 0 to the number entered
    for(int i = 0; i < number; i++)
    {
        printf("%d ", i);

        // Display 10 numbers per line
        // If the number is divisible by 10, move to the next line
        if ((i + 1) % 10 == 0)
        {
            // Move to the next line
            printf("\n");
        }
    }

    return 0;
}