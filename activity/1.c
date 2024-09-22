/*
Activity No. 1
Programmer: Tabornal, Tyrone M.
Description: 
    A program that extracts and prints the 
    International Standard Book Number for the user.
*/

#include <stdio.h>

int main() 
{
    // Define the variable to store the parts of ISBN
    int prefix, registrationGroup, registrant, publication, checkDigit;
    int validPartsCount;

    // Input: Prompt the user for the ISBN following the given format
    printf("Enter a 13-digit ISBN number in the format xxx-x-xxx-xxxxx-x: ");

    // Use scanf to read and parse the individual parts
    validPartsCount = scanf("%3d-%1d-%3d-%5d-%1d", &prefix, &registrationGroup, &registrant, &publication, &checkDigit);

    // Check if all components were successfully parsed
    if (validPartsCount == 5) 
    {
        // Output the individual parts of the ISBN
        printf("\nISBN Components:\n");
        printf("GSI Prefix: %d\n", prefix);
        printf("Group Identifier: %d\n", registrationGroup);
        printf("Registrant: %d\n", registrant);
        printf("Publication: %d\n", publication);
        printf("Check Digit: %d\n", checkDigit);
    } 
    return 0;
}

