void averageGrade()
{
    int quiz1, quiz2, quiz3, quiz4;
    int midterm1, midterm2;
    int finals;
    float total_quiz, total_midterm;
    float average;

    printf("Enter score for Quiz No.1: ");
    scanf("%d", &quiz1);
    printf("Enter score for Quiz No.2: ");
    scanf("%d", &quiz2);
    printf("Enter score for Quiz No.3: ");
    scanf("%d", &quiz3);
    printf("Enter score for Quiz No.4: ");
    scanf("%d", &quiz4);

    printf("Enter score for Midterm No.1: ");
    scanf("%d", &midterm1);
    printf("Enter score for Midterm No.2: ");
    scanf("%d", &midterm2);

    printf("Enter score for Finals: ");
    scanf("%d", &finals);

    total_quiz = (float)(quiz1 + quiz2 + quiz3 + quiz4);
    total_midterm = (float)(midterm1 + midterm2);

    average = (total_quiz / 400.00 * 0.40) + (total_midterm / 200.00 * 0.30) + (finals / 100.00 * 0.30);

    printf("Your average: %.2f\n", average * 100);
}