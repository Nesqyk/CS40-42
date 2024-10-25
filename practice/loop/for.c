#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void classifyAges();
void multipleOfTen();
void num_count();
void triangle(int rows);
void bank_withdrawal();
void winners();
bool vote(char name[12]);
void voting_system();

int main()
{
    voting_system();
}

void classifyAges()
{
    int baby = 0, attending_school = 0, adult = 0;
    int ages;

    for (int i = 1; i <= 15; i++)
    {
        printf("Enter age for Persons %d: ", i);
        scanf("%d", &ages);

        if (ages <= 5)
        {
            baby++;
        } else if (ages >= 6 && ages <= 17)
        {
            attending_school++;
        } else {
            adult++;
        }
    } 

    printf("\nAges Classifications\n");
    printf("Total Number of Babies: %d\n",baby);
    printf("Total Number of Persons Still Attending School: %d\n",attending_school);
    printf("Total Number of persons that are adult: %d\n", adult);
}

void multipleOfTen()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 50)
    {
        printf("Number must be below 50!");
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", i);
        if((i + 1) % 10 == 0)
        {
            printf("\n");
        }
    }
}

void triangle(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf("%d",  k);

            if(k < i)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void num_count()
{
    int n, total, count = 0;
    float average;

    do {
        printf("Enter a number (enter 999 to stop): ");
        scanf("%d", &n);

        if(n < 0 || n > 100)
        {
            if(n == 999)
            {
                average = total / (float) count;
                printf("The average: %.2f",average);
            } else 
            {
                printf("Enter number from 0-100");
            }
        } else 
        {
            total += n;
            count++;
        }
    } while (n != 999);
}

void half_triangle(int row)
{
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
}

void farenheit(float farenheit)
{
    float c;

    for(int i = 1; i <= 20; i++)
    {
        farenheit = 20 * i - 4;
        c = (5.0 / 9.0) * farenheit-32;
        printf("F: %.2f \n, C: %.2f", farenheit,c);
    }
}

void bank_withdrawal()
{
    int balance;
    int tries = 0;
    int withdraw_amount;

    printf("Please enter your balance: ");
    scanf("%d", &balance);

    do {
        printf("Please enter how much you will withdraw: ");
        scanf("%d", &withdraw_amount);

        if (withdraw_amount > balance) {
            printf("Insufficient Funds");

        } else {
            balance -= withdraw_amount;
            printf("Succefully withdrawn withdraw %d\n", withdraw_amount);
        }

        tries++;

        if (tries == 3) printf("Your final balance: %d", balance);

    } while (tries != 3);
}

typedef struct  
{
    char name[12];
    int quantity;
} product;

product products[5];




typedef struct  
{
    char name[12];
    int votes;
} candidate;

#define MAX 9

candidate candidates[MAX];

int candidates_count = 0;

void voting_system()
{
    do {
        char name[12];
        int i = candidates_count;

        printf("Enter a Candidate (type 'stop' to end): ");
        
        scanf("%s", name);
    
        strcpy(candidates[i].name, name);
        candidates[i].votes = 0;

        candidates_count++;

        if(strcmp(name, "stop") == 0)
        {
            int vote_counter;
        
            printf("How many votes: ");
            scanf("%d", &vote_counter);

            for (int i = 0; i < vote_counter; i++)
            {
                char v_name[12];
                printf("Vote: ");
                scanf("%s", v_name);

                if(!vote(v_name)) 
                {
                    printf("Invalid Name\n");
                }
            }

             winners();

             break;
        }

    } while(candidates_count != MAX);

    if (candidates_count > MAX)
    {
        printf("You can only put 9 candidates;");
    }
    return;
}

bool vote(char name[12])
{
    for(int i = 0; i < MAX; i++)
    {
        if(strcmp(candidates[i].name,name) == 0)
        {
            candidates[i].votes++;
            return true;
        }
    }
    return false;
}

void winners()
{
    int highest = 0;
    for (int i = 0; i < MAX; i++)
    {
        if(candidates[i].votes > highest)
        {
            highest = candidates[i].votes;
        }
    }

    for (int i = 0; i < MAX; i++)
    {
        if(candidates[i].votes == highest)
        {
            printf("%s\n", candidates[i].name);
        }
    }
}


