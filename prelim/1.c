/*
Hands On Exam: No.1.1
Programmer: Tyrone M. Tabornal
Description: This program converts seconds to years, weeks, days, hours, minutes, and seconds.
*/

#include <stdio.h>

int main()
{
    // Declare and store the total number of seconds
    int totalSeconds;
    // Declare variables to store the years, weeks, days, hours, minutes, and seconds
    int years, weeks, days, hours, minutes, seconds;

    // Prompt the user to enter the number of seconds
    printf("Enter the number of seconds: ");
    scanf("%d", &totalSeconds);

    // Calculate the number of years.
    years = totalSeconds / (60 * 60 * 24 * 365);
    totalSeconds = totalSeconds % (60 * 60 * 24 * 365);

    // Calculate the number of weeks.
    weeks = totalSeconds / 604800;
    totalSeconds = totalSeconds % 604800;

    // Calculate the number of days.
    days = totalSeconds / 86400;
    totalSeconds = totalSeconds % 86400;

    // Calculate the number of hours.
    hours = totalSeconds / 3600;
    totalSeconds = totalSeconds % 3600;

    // Calculate the number of minutes and seconds.
    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;

    // Print the output of the conversion.
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);
    printf("Hours: %d\n", hours);
    printf("Minutes: %d\n", minutes);
    printf("Seconds: %d\n", seconds);

    return 0;
}