/*
Pratice No: 4
Programmer: Tabornal, Tyrone M.
Description: A program that prints a table of part numbers and prices.
*/

#include <stdio.h>

// The main entry point of the program.
// A program that prints a table of part numbers and prices.
int main() {
    char part_no[4][10];  // Array to hold multiple part numbers
    float price[4];       // Array to hold multiple prices

    // Loop to ask for multiple part numbers and prices
    for (int i = 0; i < 4; i++) { 
        // Prompt the user for part number and price
        printf("Enter part number %d: ", i + 1);
        scanf("%s", part_no[i]);

        printf("Enter price for %s: ", part_no[i]);
        scanf("%f", &price[i]);
    }

    // Print the header of the table
    printf("\n%-10s %s\n", "Part No.", "Price");

    // Loop to print each part number and price in table format
    for (int i = 0; i < 4; i++) {
        printf("%-10s $%.2f\n", part_no[i], price[i]);
        }

    return 0;
}



