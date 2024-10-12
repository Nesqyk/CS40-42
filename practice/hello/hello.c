#include <stdio.h>

// A basic hello world input and output program.
void odd_even(); // Function prototype
void greater_number();
void hourly_rate();

int main() {
    hourly_rate();

    return 0;
}

void odd_even() {
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    if (n % 2 == 0) 
    {
        printf("Even\n");
    }
    else 
    {
        printf("Odd\n");
    }
}

void greater_number()
{
    int n1, n2, n3; // Declare variables

    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3); // Read input

    if (n1 >= n2 && n1 >= n3) // Check if n1 is greater than or equal to n2 and n3
        printf("%d is the largest number.\n", n1);
    else if (n2 >= n1 && n2 >= n3) // Check if n2 is greater than or equal to n1 and n3
        printf("%d is the largest number.\n", n2);
    else // n3 is the largest number
        printf("%d is the largest number.\n", n3);
}

void hourly_rate()
{
    int hours_worked, regular_pay, overtime_pay;
    float total_pay;

    printf("Enter hours worked: ");
    scanf("%d", &hours_worked);
    printf("Enter regular pay rate: ");
    scanf("%d", &regular_pay);

    if (hours_worked > 40) 
    {
        overtime_pay = (hours_worked - 40) * (regular_pay * 1.5);
        total_pay = 40 * regular_pay + overtime_pay;
    }
    else 
    {
        total_pay = hours_worked * regular_pay;
    }

    printf("Total pay: $%.2f\n", total_pay);
}
