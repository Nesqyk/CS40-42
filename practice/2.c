/*
Pratice No: 2
Programmer: Tabornal, Tyrone M.
Description: A program that extracts and prints a phone number from the user.
*/

#include <stdio.h>

// The main entry point of the program.
// A program that extracts and prints a phone number from the user.
int main() {
    char areaCode[4], firstThree[4], lastFour[5];  

    // Prompt user to enter the phone number
    printf("Enter a telephone number in the form [(xxx) xxx-xxxx]: ");

    // Use scanf to directly read the input in the specified format
    scanf("(%3s) %3s-%4s", areaCode, firstThree, lastFour);  

    // Print the number in the form xxx.xxx.xxxx
    printf("You entered %s.%s.%s\n", areaCode, firstThree, lastFour);

    return 0;
}