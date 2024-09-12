/*
Pratice No: 3
Programmer: Tabornal, Tyrone M.
Description: A program that swaps a numbers using temporary variable
*/

#include <stdio.h>

// The main entry point of the program.
// A program that swaps a numbers using temporary variable
int main() {
    float num1, num2, temp;

    // Prompt the user for two numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Swap the numbers using a temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Print the swapped values with two decimal places
    printf("After swapping, firstNumber");
    printf(" = %.2f\n", num1);
    printf("After swapping, secondNumber");
    printf(" = %.2f\n", num2);

    return 0;
}
