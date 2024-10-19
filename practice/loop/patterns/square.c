#include <stdio.h>

int main()
{
    int rows;

    do {
        scanf("%d", &rows);
    } while (rows < 0);


    // 5x5
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}