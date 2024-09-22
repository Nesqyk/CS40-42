/*
Activity No. 2
Programmer: Tabornal, Tyrone M.
Description: 
    A program that demonstrates the use of different specifiers, 
    position, and decimal places.
*/

#include <stdio.h>

int main() 
{
    // Declare the following variables
    char letter, word[100];
    int number;
    float decimal, negativeDecimal, anotherDecimal;

    // Input: Prompt the user to enter the following values
    // Use scanf to read and parse the individual parts
    printf("Enter a letter: ");
    scanf(" %c", &letter);  

    printf("Enter a word: ");
    scanf("%4s", word); 

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter a number with decimal: ");
    scanf("%f", &decimal);

    printf("Enter a negative number with decimal: ");
    scanf("%f", &negativeDecimal);

    printf("Enter a another number with decimal: ");
    scanf("%f", &anotherDecimal);

    
    //Output: Print the following values with different specifiers, position, and decimal places
    printf("\nTHESE ARE THE FOLLOWING OUTPUT THAT IMPLEMENTS\n");
    printf("DIFFERENT KINDS OF SPECIFIER, POSITION AND DECIMAL PLACE.\n");
    printf("\n");
    printf("1. %3c\n", letter);
    printf("2. %-3c\n", letter);
    printf("3. %-8s\n", word);
    printf("4. %d\n", number);
    printf("5. %8d\n", number);
    printf("6. %-8d\n", number);
    printf("7. %f\n", decimal);
    printf("8. %10f\n", decimal);
    printf("9. %10.2f\n", decimal);
    printf("10. %-10.2f\n", decimal);
    printf("11. %.2f\n", decimal);
    printf("12. %10.3f\n", negativeDecimal);
    printf("13. %10f\n", anotherDecimal);

    return 0;
}
