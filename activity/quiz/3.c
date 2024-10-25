/*
Hands on Quiz No: 3
Programmer: Tabornal, Tyrone M.
Description: A program that converts a binary number to a decimal number.
*/

#include <stdio.h>
#include <math.h>

int main() {

    long long binary, temp;
    int decimal = 0, i = 0, remainder;

    // Input the binary number
    printf("Convert Binary to Decimal:\n");
    printf("-------------------------\n");
    printf("Input the binary number :");
    scanf("%lld", &binary);   

    temp = binary;
    // Process each binary digit
    while (binary != 0)
    {
        remainder = binary % 10;    // Get the rightmost digit
        binary = binary / 10;       // Remove the rightmost digit

        // Convert the binary digit to decimal
        decimal += remainder * pow(2, i);
        ++i;
    }

    // Output the result
    printf("\nThe Binary Number : %lld\n", temp);
    printf("The equivalent decimal number is: %d\n", decimal);

    return 0;
}
