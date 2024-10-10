/*
Assigment No: 1.3 Control Flow
Programmer: Tyrone M. Tabornal
Description: A program that determines the zodiac sign based on the month and day of the user's birthdate.
*/

#include <stdio.h>

int main() {

    // Declare variables to store the month and day
    int month, day;

    // Prompt the user to enter the month and day
    printf("Enter the month (1-12): ");
    scanf("%d", &month);

    printf("Enter the day: ");
    scanf("%d", &day);

    // Check if the date is valid
    if (month < 1 || month > 12 || day < 1 || day > 31) {
        printf("Invalid date.\n");
        return 0;
    }

    // Determine the zodiac sign based on the month and day
    char *zodiac_sign;

    if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        zodiac_sign = "Aquarius";
    } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        zodiac_sign = "Pisces";
    } else if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        zodiac_sign = "Aries";
    } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        zodiac_sign = "Taurus";
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
        zodiac_sign = "Gemini";
    } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
        zodiac_sign = "Cancer";
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        zodiac_sign = "Leo";
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        zodiac_sign = "Virgo";
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        zodiac_sign = "Libra";
    } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        zodiac_sign = "Scorpio";
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        zodiac_sign = "Sagittarius";
    } else {
        zodiac_sign = "Capricorn";
    }

    // Print the zodiac sign
    printf("Your Zodiac sign is: %s\n", zodiac_sign);

    return 0;
}