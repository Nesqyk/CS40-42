/*
Programmer: Tabornal, Tyrone M.
Activity No. 3: Loop
Description: A program that prints asterisk in decreasing order/ladder like, row by row.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Outer loop for each row
    for(int i = 0; i <= rows; i++)
    {
        // Print asterisk in decreasing order for each row
        for(int j = i; j >= 1; j--)
        {
            printf("* ");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}