/*
Hand on Quiz No: 1
Programmer: Tabornal, Tyrone M.
Description: A program that prints "Fizz" if a number is divisible by 3, "Buzz" if divisible by 5, and "FizzBuzz" if divisible by both.
*/
#include <stdio.h>

int main()
{
    int num;

    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if divisible by 3 and 5
    if (num % 3 == 0 && num % 5 == 0)
    {
        printf("FizzBuzz\n");
    }
    // Check if divisible by 3
    else if (num % 3 == 0)
    {
        printf("Fizz\n");
    }
    // Check if divisible by 5
    else if (num % 5 == 0)
    {
        printf("Buzz\n");
    }
    // If neither, print the number
    else
    {
        printf("%d\n", num);
    }

    return 0;
}
