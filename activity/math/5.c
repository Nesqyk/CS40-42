/*
Practice No: 5
Programmer: Tabornal, Tyrone M.
Description: A a program that calculates the average 
            grades of two students in four subjects (Math, Science,
*/

#include <stdio.h>

int main() {
    // Declare the variables for the grades of both students
    // 2 students, 4 subjects (Math, Science, English, AP)
    int math1, science1, english1, ap1;
    int math2, science2, english2, ap2; 
    float avg1, avg2;      // Averages for both students
    int sum;        // Sums for both students

    // Prompt and input grades for Student 1
    printf("Enter the grades (Math, Science, English, AP) for Student 1: ");
    scanf("%d %d %d %d", &math1, &science1, &english1, &ap1);

    // Calculate the sum and average for Student 1
    sum = math1 + science1 + english1 + ap1;
    avg1 = sum / 4.0;

    // Prompt and input grades for Student 2
    printf("Enter the grades (Math, Science, English, AP) for Student 2: ");
    scanf("%d %d %d %d", &math2, &science2, &english2, &ap2);

    // Calculate the sum and average for Student 2
    sum = math2 + science2 + english2 + ap2;
    avg2 = sum / 4.0;

    // Display the output in the required format
    printf("\n%-10s %-20s %-7s\n", "Student", "Grades", "Average");
    printf("Student 1  %d,%d,%d,%d  \t%.2f\n", math1, science1, english1, ap1, avg1);
    printf("Student 2  %d,%d,%d,%d  \t%.2f\n", math2, science2, english2, ap2, avg2);

    return 0;
}
