/*
    Hands On Exam: No.1.3
    Programmer: Tyrone M. Tabornal
    Description: A program that calculates the total income, after-tax income, and spending allocations of a student.
*/

#include <stdio.h>

int main()
{
    float per_hour;
    int week1, week2, week3, week4, week5;
    int total_hours;
    float after_tax;
    float total_pay;

    printf("Enter the hourly rate: ");
    scanf("%f", &per_hour);

    printf("Enter the number of hours worked in week 1: ");
    scanf("%d", &week1);

    printf("Enter the number of hours worked in week 2: ");
    scanf("%d", &week2);

    printf("Enter the number of hours worked in week 3: ");
    scanf("%d", &week3);

    printf("Enter the number of hours worked in week 4: ");
    scanf("%d", &week4);

    printf("Enter the number of hours worked in week 5: ");
    scanf("%d", &week5);

    total_hours = week1 + week2 + week3 + week4 + week5;

    // Calculate pay for each week using per_hour
    float pay_week1 = week1 * per_hour;
    float pay_week2 = week2 * per_hour;
    float pay_week3 = week3 * per_hour;
    float pay_week4 = week4 * per_hour;
    float pay_week5 = week5 * per_hour;

    // Calculate total pay
    total_pay = pay_week1 + pay_week2 + pay_week3 + pay_week4 + pay_week5;

    // Calculate after-tax income
    after_tax = total_pay - (total_pay * 0.14);

    // Calculate spending allocations
    float clothes_accessories = after_tax * 0.10;
    float school_supplies = after_tax * 0.01;
    float savings_bonds = after_tax * 0.25;
    float parents_contribution = savings_bonds * 0.50;

    // Print results with correct format specifiers
    printf("Your total income before tax: %.2f\n", total_pay);
    printf("Your total income after tax: %.2f\n", after_tax);
    printf("How much you spend on clothes and accessories: %.2f\n", clothes_accessories);
    printf("How much you spend on school supplies: %.2f\n", school_supplies);
    printf("How you spend on savings bonds: %.2f\n", savings_bonds);
    printf("How much your parents contribute to your saving bonds: %.2f\n", parents_contribution);

    return 0;
}
