#include <stdio.h>

int main()
{
    int rows;

    do {
        scanf("%d", &rows);
    } while (rows < 0);

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }
        for(int k = 1; k <= i; k++)
        {
            printf("*");
            if(k < i)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}