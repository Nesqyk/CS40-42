/*
Practice No: 6.3
Programmer: Tabornal, Tyrone M.
Description: A program that prompts the user the elapsed time in hours, 
minutes, seconds then outpu the elapsed time in seconds.
*/

#include <stdio.h>

int main()
{
    // Declare the variables for the hours, minutes, seconds, and total seconds
    int hours, minutes, seconds, totalSeconds;

    // Prompt and input the elapsed time in hours, minutes, and seconds
    printf("Enter the elapsed time in hours, minutes, and seconds: ");
    scanf("%d %d %d", &hours, &minutes, &seconds);

    // Calculate the total seconds
    totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

    // Display the output in the required format
    printf("The elapsed time in seconds is %d\n", totalSeconds);

    return 0;
}