/*
Programmer: Tabornal, Tyrone M.
Activity No.3: Loop
Description: A program that prompts for grades, adds valid ones, shows errors for 
invalid entries, and stops at 999 to display the average.
*/

#include <stdio.h>

int main() 
{
    // Declare the ff. variables
    int grade;
    int total = 0;   
    int count = 0;   
    float average;

    // Do-while loop to request grades continuously
    do {
        printf("Enter a grade (enter 999 to stop): ");
        scanf("%d", &grade);

        // Check for valid grade (between 0 and 100)
        if (grade < 0 || grade > 100) 
        {
            if (grade == 999) 
            {
                // Calculate and display the average of valid grades
                average = total / (float)count;
                printf("The average of the valid grades is %.2f\n", average);
            } else 
            {
                printf("Invalid grade. Please enter a grade between 0 and 100.\n");
            }
        } else 
        {
            total += grade;  // Add valid grade to the total
            count++;         // Increment the valid grade count
        }

    } while (grade != 999);  // Continue the loop indefinitely until 999 is entered

    return 0;
}
