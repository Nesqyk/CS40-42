/*  Practice No: 6.4
    Programmer: Tabornal, Tyrone M.
    Description: A progeam that prompts the user the following; sexonda minutes, hour then prints in a specific format*/

#include <stdio.h>

int main()
{
    // Declare the following variable: seconds, minutes, hours.
    int seconds, minutes, hours, totalSeconds;

    // Prompt the user for the input elapsed time
    printf("Enter the elapsed time in seconds: ");
    scanf("%d", &totalSeconds);

    // Convert seconds to hours, minutes, and seconds
    hours = totalSeconds/ 3600;          // 1 hour = 3600 seconds
    totalSeconds = totalSeconds % 3600;  // Remaining seconds after hours
    minutes = totalSeconds / 60;          // 1 minute = 60 seconds
    seconds = totalSeconds % 60;          // Remaining seconds after minutes

    // Display the elapsed time in a specific format
    printf("The elapsed time is: %d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}

