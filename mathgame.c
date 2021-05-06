//standard io file for printing and user input
#include <stdio.h>

//time file for random number generation
#include <time.h>

#include <stdlib.h>

int main()
{
    //yesno variable 
    int yesno;

    //score variable
    int score;

    //variables for user input
    float userin;

    //variables for the operators to be used
    int addition = 1;
    int subtraction = 2;
    int multiplication = 3;
    int division = 4;
    int operator;

    //variables to store the numbers for random equation
    float num1;
    float num2;

    //variable that will store correct answer
    float answer;

//The game will give you two random numbers and will use those numbers with a random operator, solving this equation properly gives you one point, failing to solve correctly will result in the deduction two points.

    //create two random numbers in the range of 0 - 1000

    //srand is used to generate random seed for random generation based on runtime of application 
    srand(time(0));
    
    num1 = rand() % 1000;
    num2 = rand() % 1000;

    //use rand function in order to get random operator for equation
    operator = rand() % 4;
    
    //equation creation
    if (operator == addition)
    {
        answer = num1 + num2;
        printf("The equation you need to solve is: || %f + %f ||\n", num1, num2);
    }
    else if (operator == subtraction)
    {
        answer = num1 - num2;
        printf("The equation you need to solve is: || %f - %f ||\n", num1, num2);
    }
    else if (operator == multiplication)
    {
        answer = num1 * num2;
        printf("The equation you need to solve is: || %f * %f ||\n", num1, num2);
    }
    else if (operator == division)
    {
        answer = num1 / num2;
        printf("The equation you need to solve is: || %f / %f ||\n", num1, num2);
    }

    //user response and answer comparison
    printf("Please enter your response: \n");
    scanf("%f", &userin);

    if (answer == userin)    //correct answer 
    {
        score++;
        printf("You answered correctly and gained a point, your total score is currently %i, would you like to continue playing? 1-Y 2-N\n", score);
        scanf("%i", &yesno);
        if (yesno = 1)
        {
            //???????? Recursion of the function so the player can continue playing
        }
        else if (yesno = 2)
        {
            return 0;  //termination of function
        }
        else if (yesno != 1, yesno != 2)
        {
            printf("That is an invalid input, 1-Y 2-N\n");
            scanf("%i", &yesno);  //input validation ?????????
        }
    }
    else if (answer != userin)    //incorrect answer
    {
        score - 2;
        printf("You answered incorrectly and lost two points, your total score is currently %i, would you like to continue playing? 1-Y 2-N\n", score);
        scanf("%i", &yesno);
        if (yesno = 1)
        {
            //???????? Recursion of the function so the player can continue playing
        }
        else if (yesno = 2)
        {
            return 0;  //termination of function
        }
        else if (yesno != 1, yesno != 2)
        {
            printf("That is an invalid input, 1-Y 2-N\n");
            scanf("%i", &yesno);  //input validation ???????????
        }
    }
    
}