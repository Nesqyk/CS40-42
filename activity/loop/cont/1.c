/*
Programmer: Tabornal, Tyrone M.
Activity No. 1: Loop
Description: A program that classifies 15 persons based on their age.
*/

#include <stdio.h>

int main()
{
    // Declare variables
    int baby = 0, pre_school = 0, adult_life = 0;
    int age;

    // Loop to get age of 15 persons
    for (int i = 1; i <= 15; i++)
    {
        printf("Enter age for Persons %d: ", i);
        scanf("%d", &age);

        // Classify persons based on age
        if (age < 5)
        {
            baby++;
        }
        else if (age > 6 && age < 17)
        {
            pre_school++;
        }
        else
        {
            adult_life++;
        }
    }

    // Display count of persons based on classification
    printf("\nCount of Persons based on classification:\n");
    printf("Babies: %d\n", baby);
    printf("Pre-school: %d\n", pre_school);
    printf("Adult life: %d\n", adult_life);

    return 0;
}
