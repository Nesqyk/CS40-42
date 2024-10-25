#include <stdio.h>

int main()
{
    int rows;

    do {
        printf("Enter how many rows: ");
        scanf("%d", &rows);
    } while (rows < 0);

    for (int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= (rows - i) * 2; j++)
        {
            printf(" ");
        }

        for(int k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

}