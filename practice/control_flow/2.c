/*
Assigment No: 1.2 Control Flow
Programmer: Tyrone M. Tabornal
Description: A program that converts temperature from Celcius to Fahrenheit and vice versa.
*/

#include <stdio.h>

int main()
{
    // Declare variables to store the check character, 
    // celcius, fahrenheit, and number
    char check_char;
    float celcius, fahrenheit;
    float number;

    // Prompt the user to enter the number and check character
    printf("Enter C for Celcius or F for Fahrenheit\n");
    printf("Input in this format [number][space][C or F]: ");
    scanf("%f %c", &number, &check_char);

    // Convert the temperature from Celcius to Fahrenheit and vice versa
    if (check_char == 'C' || check_char == 'c')
    {
        //  Convert the temperature from Celcius to Fahrenheit 
        celcius = number;
        fahrenheit = (celcius * 9 / 5) + 32;
        printf("%.2f Celcius converted in Fahrenheit is: %.2f\n", celcius, fahrenheit);
    }
    else if (check_char == 'F' || check_char == 'f')
    {
        // Convert the temperature from Fahrenheit to Celcius
        fahrenheit = number;
        celcius = (fahrenheit - 32) * 5 / 9;
        printf("%.2f Farenheit converted in Celcius is: %.2f\n", fahrenheit, celcius);
    }
    else
    {
        // Print an error message if the user enters an invalid input
        printf("Invalid input\n");
    }
    return 0;
}