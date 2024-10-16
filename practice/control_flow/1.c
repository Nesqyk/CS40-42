/*
Assigment No: 1.1 Control Flow
Programmer: Tyrone M. Tabornal
Description: A program that calculates the electricity  bill of a given customer
*/

#include <stdio.h>

int main()
{
    // Declare the following variable
    char customerName[100];
    int customerID, consumedUnit;

    float amountCharge, surCharge, netPaidAmount;

    // Prompt the user for the following input
    printf("Input Customer ID: ");
    scanf("%d", &customerID);
    printf("Input the name of the customer: ");
    scanf("%s", customerName);
    printf("Input the unit consumed by the customer: ");
    scanf("%d", &consumedUnit);
    
    // Calculate
    if (consumedUnit < 199) 
    {
        amountCharge = consumedUnit * 1.20;
    } 
    else if (consumedUnit >= 200 && consumedUnit < 400) 
    {
        amountCharge = consumedUnit * 1.50;
    } else if (consumedUnit >= 400 && consumedUnit < 600)
    {
        amountCharge = consumedUnit * 1.80;
    } 
    else 
    {
        amountCharge = consumedUnit * 2.0;
    }

    if (amountCharge > 400) 
    {
        surCharge = amountCharge * 0.15;
    } else 
    {
        surCharge = 100;
    }

    netPaidAmount = amountCharge + surCharge;

    printf("\nElectricity Bill\n");
    printf("Customer Name: %s\n",customerName);
    printf("Customer IDNO: %d\n", customerID);
    printf("Unit Consumed: %d\n", consumedUnit);
    printf("Amount Charges @R.s 2.00 Per unit: %.2f \n", amountCharge);
    printf("Surcharge Amount %.2f \n", surCharge);
    printf("Net Amoung Paid By the Customer %.2f\n",netPaidAmount);
}