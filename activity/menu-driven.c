/*
Activity No.:
Programmer: Tabornal, Tyrone M.
Description: A menu-driven program (1. Calculate Grade, 2. Exit) that computes and classifies a student's average.
*/


#include <stdio.h>

int main()
{
    char grade;
    int option, student_number;
    float tutorial_mark, test_mark, mark_exam;
    float average, mark_final;

    while(1)
    {
        printf("\n -- Menu --\n");
        printf("1. Calculate Grade\n");
        printf("2. Exit\n");
        scanf("%d", &option);

        if(option == 2)
        {
            printf("Exiting program. \n");
            break;
        } else if(option != 1) 
        {
            printf("Invalid option. Please choose again.\n");
            continue;
        }

        printf("Enter Student Id: ");
        scanf("%d", &student_number);

        printf("Enter tutorial mark (0-100): ");
        scanf("%f", &tutorial_mark);

        printf("Enter test mark (0-100): ");
        scanf("%f", &test_mark);

        average = (tutorial_mark + test_mark) / 2.0;

        if(average < 40)
        {
            printf("Student is not allowed to write the exam\n Grade: F\n");
            continue;
        }

        printf("Enter Exam mark (0-100): ");
        scanf("%f", &mark_exam);

        mark_final = (tutorial_mark * 0.25) + (test_mark * 0.25) + (mark_exam * 0.50);

        switch((int) mark_final / 10 * 10)
        {
            case 100:
            case 90:
            case 80:
                grade = 'A';
                break;
            case 70:
                grade = 'B';
                break;
            case 60: 
                grade = 'C';
                break;
            case 50:
                grade = 'D';
                break;
            default:
                grade = 'E';
                break;
        }

        printf("Grade: %c\n\n", grade);
    }
    return 0;
}