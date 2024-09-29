void generateVariance()
{
    int quiz1, quiz2, quiz3, quiz4;
    float average;
    float variance, standardDeviation;

    printf("Enter score for Quiz #1: ");
    scanf("%d", &quiz1);

    printf("Enter score for Quiz #2: ");
    scanf("%d", &quiz2);

    printf("Enter score for Quiz #3: ");
    scanf("%d", &quiz3);

    printf("Enter score for Quiz #4: ");
    scanf("%d", &quiz4);

    average = (quiz1 + quiz2 + quiz3 + quiz4) / 4.0;

    variance = (pow(quiz1 - average, 2) + pow(quiz2 - average, 2) +
                pow(quiz3 - average, 2) + pow(quiz4 - average, 2)) / 4;

    standardDeviation = sqrt(variance);

    printf("Average: %.2f\n", average);
    printf("Variance: %.2f\n", variance);
    printf("Standard Deviation: %.2f\n", standardDeviation);
}