#include <stdio.h>


// Simple sample of for loop

int main()
{
    // Delcare the following variables
    int number;
    int sum;

    // Initiate loop
    // It will interate/repeat depending 
    // on how many times you have provided for the variable int i
    // if i == 0; the loop stops
    for(int i = 0; i < 5 ; i++) 
    {
        // Loop body
        printf("Input number for %d:", i);
        scanf("%d", &number);

        sum += number;
        // update counter i
    }
    printf("Sum of the inputed number is %d", sum);
}