/*
    Hands On Exam: No.1.2
    Programmer: Tyrone M. Tabornal
    Description: A program that converts kilometers to feet & inch to millimeters.
*/

#include <stdio.h>
#include <stdio.h>

#define METER_KM 1000
#define METER_INCH 3.28

int main() {
    // Declare and store the total number of kilometers and inches
    float kilometers, inches;
    // Declare variables to store the feet and millimeters
    float feet, millimeters;

    // Prompt the user to enter the number of kilometers
    printf("Enter distance in kilometer (km): ");
    scanf("%f", &kilometers);

    // Prompt the user to enter the number of inches
    printf("Enter length in inches (in): ");
    scanf("%f", &inches);

    // Calculate the number of feet from kilometers
    feet= kilometers * (METER_KM * METER_INCH);
    
    // Convert the inches to millimeters
    millimeters = (inches * 2.54) * 10;
    // Print the output of the conversion
    printf("%.2f km is equal to %.2f ft\n", kilometers, feet);
    printf("%.2f inches is equal to %.2f mm\n", inches, millimeters);

    return 0;
}
