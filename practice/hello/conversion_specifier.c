#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char input[100];
    int int_value;
    float float_value;

    printf("Enter an input: ");
    scanf("%s", input);

    // Check if the input is a string
    if (isalpha(input[0])) {
        printf("Input is a string.\n");

        // Array of string format specifiers
        const char *string_format_specifiers[] = {
            "%3c", "%-3c", "%8s"
        };

        // Iterate through the format specifiers (using string length)
        for (int i = 0; i < sizeof(string_format_specifiers) / sizeof(string_format_specifiers[0]); i++) {
            printf(string_format_specifiers[i], input);
            printf("\n");
        }
    } 
    else {
        // First, attempt to parse as a float (float can include integers)
        if (sscanf(input, "%f", &float_value) == 1) {
            // Check if it's a float with decimal (e.g., "3.14", not "3")
            if (strchr(input, '.') != NULL) {
                printf("Input is a float.\n");

                // Array of float format specifiers
                const char *float_format_specifiers[] = {
                    "%f", "%10f", "%10.2f", "%-10.2f", "%.2f", "%10.3f"
                };

                // Iterate through the format specifiers
                for (int i = 0; i < sizeof(float_format_specifiers) / sizeof(float_format_specifiers[0]); i++) {
                    printf(float_format_specifiers[i], float_value);
                    printf("\n");
                }
            }
            else {
                // It's an integer-like input (e.g., "3" instead of "3.0")
                printf("Input is an integer.\n");

                // Array of integer format specifiers
                const char *integer_format_specifiers[] = {
                    "%d", "%8d", "%-8d"
                };

                // Parse the integer value
                sscanf(input, "%d", &int_value);

                // Iterate through the format specifiers
                for (int i = 0; i < sizeof(integer_format_specifiers) / sizeof(integer_format_specifiers[0]); i++) {
                    printf(integer_format_specifiers[i], int_value);
                    printf("\n");
                }
            }
        }
        else {
            printf("Invalid input type.\n");
        }
    }

    return 0;
}


