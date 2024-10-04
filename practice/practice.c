float faToCelcius(float farneheit)
{
    return (5.0/9.0) * (farneheit - 32);;
}

void average()
{
    int quiz1, quiz2, quiz3, quiz4;
    int total_quiz;

}

void secondToTime(int totalSeconds)
{
    int hours, minutes, seconds;

    hours = totalSeconds / 3600;
    totalSeconds = totalSeconds % 3600;
    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;
    
    printf("%d:%d:%d",hours, minutes, seconds);
}


int booleanAlgebra()
{
    int a = 0, b = 5, c = 10;
    if(a + b / 10 == 0 && c * 2 % 10 >= 0)
    {
        return 1;
    }
}

void calculateBMI(int weight, int height)
{
    float bmi;
    int classfication;
    // use formula = weight / height^2
    // height / 100
    // determine whether obese, norma, underweight
    // obese >= 25.0 <=29.9 = 3, normal >= 18.5 <= 24.9 = 2, underweight < 18.5 = 1

    height /= 100;
    bmi = (weight) / (height * height); 

    if(bmi >= 25.0 && bmi <= 29.9) 
    {
        classfication = 3;
    } else if(bmi >= 18.5 && bmi <= 24.9)
    {
        classfication++;
    } else {
        classfication++;
    }
}

void simpleInterest(int principal, float rate, int time)
{
    
}

void covertToTime(int totalSeconds)
{
    int hours, minutes, seconds;

    hours = totalSeconds / 3600;
    totalSeconds = totalSeconds % 3600;
    minutes = totalSeconds * 60;
    seconds = totalSeconds % 60;
}