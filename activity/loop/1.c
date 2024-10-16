/*
Activity No.1: Loop
Programmer: Tabornal, Tyrone M.
Description: A program that demonstrates the use of a for loop in C
to display a temperature conversion table from Fahrenheit to Celsius.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    float fahrenheit, celsius;

    // Display the table header
    printf("Fahrenheit\tCelsius\n");

    // Loop to display the temperature conversion table
    for (int i = 0; i < 20; i++)
    {
        fahrenheit = 20 + i * 4;
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%.2f\t\t%.2f\n", fahrenheit, celsius);
    }

    return 0;
}