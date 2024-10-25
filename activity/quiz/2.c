/*
Hands On No: 2
Programmer: Tabornal, Tyrone M.
Description: A program that calculates the income of a salesperson based on their monthly sales.
*/

#include <stdio.h>

int main()
{
    // Declare the variables
    float sales, income;

    // Ask the user for input
    printf("Please enter your monthly sales: ");
    scanf("%f", &sales);
    
    // Calculate income based on sales amount
    if(sales >= 50000)
    {
        income = 375 + (0.16 * sales);
    } else if (sales >= 40000)
    {
        income = 350 + (0.14 * sales);
    } else if (sales >= 30000)
    {
        income = 325 + (0.12 * sales);
    } else if (sales >= 20000)
    {
        income = 300 + (0.09 * sales);
    } else if (sales >= 10000)
    {
        income = 250 + (0.05 * sales);
    } else {
        income = 200 + (0.03 * sales);
    }

    // Display the calculated income
    printf("The salesperson's income is: %.2f\n", income);
}