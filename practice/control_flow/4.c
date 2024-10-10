/*
Assigment No: 1.4 Control Flow
Programmer: Tyrone M. Tabornal
Description: A program that calculates the weekly salary of an employee. 
*/

#include <stdio.h>

int main() {

    // Declare variables
    float hours_worked, weekly_salary;

    // Get the number of hours worked
    printf("Enter the number of hours worked: ");
    scanf("%f", &hours_worked);

    // Calculate the weekly salary
    if (hours_worked <= 40) {
        weekly_salary = hours_worked * 8.00;
    } else {
        weekly_salary = 320.00 + (hours_worked - 40) * 12.00;
    }

    // Display the weekly salary          
    printf("Your weekly salary is: P%.2f\n", weekly_salary);

    return 0;
}