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
        for(int k = 1; k <= i; k++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}