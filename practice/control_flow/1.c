/*
Assigment No: 1.1 Control Flow
Programmer: Tyrone M. Tabornal
Description: A program that prompts the user Customer IDNO, Customer Name, and Unit Consumed.
             Calculate the amount charges, surcharge amount, and net amount paid by the customer.
*/

#include <stdio.h>

int main()
{
    // Declare and store the customer IDNO, customer name, and unit consumed
    int customerIDNO, unitConsumed;
    char customerName[100];

    // Declare variables to store the amount charges, surcharge amount, and net amount paid by the customer
    float amountCharges, surchargeAmount, netAmountPaid;

    // Prompt the user to enter the customer IDNO, customer name, and unit consumed
    printf("Enter the Customer IDNO: ");
    scanf("%d", &customerIDNO);
    printf("Enter the Customer Name: ");
    scanf("%s", customerName);
    printf("Enter the Unit Consumed: ");
    scanf("%d", &unitConsumed);

    // Calculate the amount charges
    if (unitConsumed <= 199)    
    {
        amountCharges = unitConsumed * 1.20;
    }
    else if (unitConsumed > 200 && unitConsumed <= 400)
    {
        amountCharges = unitConsumed * 1.50;
    }
    else if (unitConsumed > 400 && unitConsumed <= 600)
    {
        amountCharges = unitConsumed * 1.80;
    }
    else
    {
        amountCharges = unitConsumed * 2.00;
    }

    // Calculate the surcharge amount
    if (amountCharges > 400)
    {
        surchargeAmount = amountCharges * 0.15;
    }
    else
    {
        surchargeAmount = 0;
    }

    // Calculate the net amount paid by the customer
    netAmountPaid = amountCharges + surchargeAmount;

    // Print the output of the conversion.
    printf("\n\t Electricity Bill\n");
    printf("Customer IDNO: %27d\n", customerIDNO);
    printf("Customer Name: %27s\n", customerName);
    printf("Unit Consumed: %27d\n", unitConsumed);
    printf("Amount Charges @Rs. 2.00 per unit: %.2f\n", amountCharges);
    printf("Surcharge Amount: %.2f\n", surchargeAmount);
    printf("Net Amount Paid By the Customer: %.2f\n", netAmountPaid);

    return 0;
}