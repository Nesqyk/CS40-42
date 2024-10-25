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
    int rows;

    printf("Enter how many rows: ");
    scanf("%d", &rows);

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            // 1 
            // 2 3  
            printf("%d", j + i - 1);
        }
        printf("\n");
    }
}
