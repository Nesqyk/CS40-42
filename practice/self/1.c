#include <stdio.h>

int main()
{
    float num1, num2;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Sum: %d\n", (int) (num1 + num2));
    printf("Difference: %d\n", (int) (num1 - num2));
    printf("Product: %d\n", (int) (num1 * num2));
    printf("Quotient: %d\n", (int) (num1 / num2));

    return 0;
}