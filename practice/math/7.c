/*
Practice No: 6.2
Programmer: Tabornal, Tyrone M.
Description: A program that cast decimal numbers 
to integers and get its average and sum
*/

#include <stdio.h>

int main()
{
    // Declare the variables for the decimal numbers
    float num1, num2, num3, num4, num5;
    int sum;        // Sum of the numbers
    float avg;      // Average of the numbers

    // Prompt and input the decimal numbers
    printf("Enter five decimal numbers: ");
    scanf("%f %f %f %f %f", &num1, &num2, &num3, &num4, &num5);
    printf("You've Entered the following Decimal numbers: %.2f %.2f %.2f %.2f %.2f\n",num1,num2,num3,num4,num5);

    // Covert the decimal numbers to its nearest integer
    // Convert the decimal numbers to their nearest integer
    int int1 = (int)(num1 + 0.5);
    int int2 = (int)(num2 + 0.5);
    int int3 = (int)(num3 + 0.5);
    int int4 = (int)(num4 + 0.5);
    int int5 = (int)(num5 + 0.5);      

    // Calculate the sum and average of the integers
    sum = int1 + int2 + int3 + int4 + int5;
    avg = sum / 5.0;

    // Display the output in the required format
    printf("The sum of the integers is %d\n", sum);
    printf("The average of the integers is %.2f\n", avg);

    return 0;
}