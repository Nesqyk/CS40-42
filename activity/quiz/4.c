/*
Hands on Quiz No: 4
Programmer: Tabornal, Tyrone M.
Description: A program that displays the series 9, 99, 999, 9999, ... and calculates the sum of the series.
*/


int main() {
    int num, i;
    long term = 9, sum = 0;

    // Input the number of terms
    printf("Input the number of terms: ");
    scanf("%d", &num);
    printf("\n");
    
    // Display and calculate the series
    for (i = 1; i <= num; i++) {
        printf("%ld ", term);   // Display the current term

        sum += term;            // Add the current term to sum
        term = term * 10 + 9;   // Update term for the next iteration (9, 99, 999...)
    }

    // Output the sum of the series
    printf("\nThe sum of the series = %ld\n", sum);

    return 0;
}
