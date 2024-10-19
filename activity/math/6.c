/*
Practice No: 6.1
Programmer: Tabornal, Tyrone M.
Description: A program that converts farenheit into celsius
*/

#include <stdio.h>

int main()
{
    // Declare the variables for the farenheit and celsius
    float farenheit, celsius;

    // Prompt and input the farenheit temperature
    printf("Enter the temperature in Farenheit: ");
    scanf("%f", &farenheit);

    // Calculate the celsius temperature
    celsius = (5.0/9.0) * (farenheit - 32);

    // Display the output in the required format
    printf("The temperature in Celsius is %.2f\n", celsius);

    return 0;
}