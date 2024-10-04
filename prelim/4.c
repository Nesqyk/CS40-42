/*
    Hands On Exam: No.1.4
    Programmer: Tyrone M. Tabornal
    Description: A program that estimates the temperature in a freezer.
*/


#include <stdio.h>

int main() {
    // Declare variables
    int hours, minutes;
    float total_time, temperature;

    // Prompt user for input
    printf("Enter the elapsed time since power failure (hours and minutes):\n");
    
    printf("Hours: ");
    scanf("%d", &hours);
    
    printf("Minutes: ");
    scanf("%d", &minutes);
    
    // Convert time into hours
    total_time = hours + (minutes / 60.0);

    // Calculate the temperature using the formula
    temperature = (4 * total_time * total_time) / (total_time + 2) - 20;

    // Output the result
    printf("Estimated temperature in the freezer: %.2f celcius\n", temperature);

    return 0;
}
