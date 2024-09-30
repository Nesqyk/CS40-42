#include <stdio.h>
#include <math.h>
#include <string.h>

void areaOfCircle();
void lengthToPerimiter();
void separateDigit();
void averageGrade();
void generateVariance();
void testMath();
void calculateBMI();

int main()
{
    testMath();
}


// area = 'pi * r^2'
void areaOfCircle(int radius)
{
    float area;
    // a program that prompts the user the radius of a circle
    // then outputs the area of a circle

    printf("Enter the radius for your circle: ");
    scanf("%d", &radius);

    // area = "pi * radius ^ 2"
    area = (3.14159) * (double)(pow(radius, 2));
    printf("The square unit of %d is %.2f\n", radius, area);
}

// side length of square to perimiter of square
void lengthToPerimiter(int side_length)
{
    double perimiter_square;

    printf("Enter the length of your square: ");
    scanf("%d", &side_length);

    if (side_length < 0)
    {
        printf("Side length of  square cannot be 0");
    }

    // 4 * side_length
    perimiter_square = 4.0 * side_length;
    printf("The perimiter of %d is %.2f\n", side_length, perimiter_square);
}


void separateDigit(int number)
{
    int firstDigit, middleDigit, tailDigit;

    printf("Enter a 3 digit number: ");
    scanf("%d", &number);
    
    firstDigit = (number / 100);
    middleDigit = (number / 10) % 10;
    tailDigit =  number % 10;

    printf("First Digit of %d is %d\n", number, firstDigit);
    printf("Middle Digit of %d is %d\n", number, middleDigit);
    printf("Last Digit of %d is %d\n", number, tailDigit);
}


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
 

void generateVariance()
{
    int grade1, grade2, grade3, grade4, grade5;
    float average;
    float variance, standardDeviation;
    float deviation1, deviation2, deviation3, deviation4, deviation5;

    // Input quiz scores without arrays
    printf("Enter score for Grade #1: ");
    scanf("%d", &grade1);

    printf("Enter score for Grade #2: ");
    scanf("%d", &grade2);

    printf("Enter score for Grade #3: ");
    scanf("%d", &grade3);

    printf("Enter score for Grade #4: ");
    scanf("%d", &grade4);

    printf("Enter score for Grade #5: ");
    scanf("%d", &grade5);

    // Calculate the average
    average = (grade1 + grade2 + grade3 + grade4 + grade5) / 5.0;

    deviation1 = grade1 - average;
    deviation2 = grade2 - average;
    deviation3 = grade3 - average;
    deviation4 = grade4 - average;
    deviation5 = grade5 - average;

    // Calculate the variance manually
    variance = (deviation1 * deviation1) + (deviation2 * deviation2) + (deviation3 * deviation3) +
             (deviation4 * deviation4) + (deviation5 * deviation5) / 5;

    // Output the results
    printf("\nAverage: %.2f\n", average);
    printf("Number  Ind.Deviation  Square Individual.Deviation\n");
    printf("%5d %15.2f %28.2f\n", grade1, deviation1, deviation1 * deviation1);
    printf("%5d %15.2f %28.2f\n", grade2, deviation2, deviation2 * deviation2);
    printf("%5d %15.2f %28.2f\n", grade3, deviation3, deviation3 * deviation3);
    printf("%5d %15.2f %28.2f\n", grade4, deviation4, deviation4 * deviation4);
    printf("%5d %15.2f %28.2f\n", grade5, deviation5, deviation5 * deviation5);
}


void testMath()
{
    int a;
    // Multiplication, Division, Modulus, Addition, Substraction
    a = 10 / 10 * 10;
    printf("Output: %d\n", a);

    a = 10 / 10 * 10 + 5;
    
    printf("Output: %d\n", a);

    a = 10 % 10 * (10 +  5) - 5;
    printf("Output: %.2f\n", (float)a);

    // int and int = int, int and float = float, float and float =float
    a = 23/3;
    printf("Output: %d\n", a);

    a = 17 % 15;
    printf("Output %d\n", a);
}


void farenheitToCelcius()
{
    float farenheit, celcius;

    printf("Enter value for farenheit ");
    scanf("%f", &farenheit);

    celcius = (5.0 / 9.0) * (farenheit - 32.0);

    printf("Farenheit to Celcius converted %f", celcius);
}

void calculateBMI()
{
    float height, weight, bmi;
    char classification[20];

    printf("Input your Height in centimeter ");
    scanf("%f", &height);

    printf("Input your Weight in kilograms ");
    scanf("%f", &weight);

    height /= 100;
    bmi = weight / pow(height, 2);

    if(bmi < 18.5) {
        strcpy(classification, "Underweight");
    } else if(bmi >= 18.5 && bmi <= 24.9) {
        strcpy(classification, "Normal");
    } else if(bmi >= 25.0 && bmi <= 29.9) {
        strcpy(classification, "Overweight");
    } else {
        strcpy(classification, "Obese");
    }

    printf("Your BMI is %.2f and your classification is %s", bmi, classification);
}

void calculateSpeed(int distance, int time)
{
    int speed;

    printf("Input value for Distance ");
    scanf("%d", &distance);

    printf("Input value for Speed ");
    scanf("%d", &time);

    speed = distance / time;

    printf("Speed for Time: %d, Distance: %d is %d", time, distance, speed);
}

double fibonacci(int n, int n0)
{
    float phi, psi;
    phi = (1 + sqrt(5)) / 2;
    psi = (1 - sqrt(5)) / 2;

    // phi^fn-f0 * f0
    n = (pow(phi, n) - pow(psi, n) /  sqrt(5));
    return (int) n;
}

void greatestCommonDivisor(){
    int num1, num2;


    printf("Input Two Numbers: ");
    scanf("%d %d", &num1, &num2);

    if(num1 == 0)
    {
        printf("GCD of %d and %d is %d", num1, num2, num2);
    }

    num2 %= num1;
    
    printf("GCD of %d and %d is %d", num2, num1, num2);
}

int is_prime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime
    }
    if (num <= 3) {
        return 1; // 2 and 3 are prime
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return 0; // Multiples of 2 and 3 are not prime
    }

    int i;
    for (i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}