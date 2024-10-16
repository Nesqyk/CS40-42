/*
Programmer: Tabornal, Tyrone M.
Activity No. 4: Loop
Description: A program that prints numbers in increasing order, row by row, 
with each row displaying one more number than the previous one. 
It generates 5 rows in total.
*/

#include <stdio.h>

int main() 
{
    // Outer loop for each row
    for (int i = 0; i <= 5; i++) 
    {
        // Print numbers in increasing order for each row
        for (int j = i; j >= 1; j--) 
        {
            printf("%d", j);
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
