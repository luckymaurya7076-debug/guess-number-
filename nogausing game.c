#include<stdio.h>
int main ()
{
    int secret =25;
    int guess;
    int attempts = 0;
    printf("=====NUMBER GUESSING GAME =====\n");
    printf("Guess a number between 1 and 50:");
    scanf("%d", &guess);
    while (guess !=secret)
    {
        attempts++;
        if(guess > secret)
        {
            printf("Too High! Try Again.\n");
        }
        else
    {
        printf("Too low! try again.\n");
    }
    printf("\nGuess a number between 1 and 50:");
    scanf("%d", &guess);
}
attempts++;
printf("\ncongratulations! you guess the corret number.\n");
printf("total attempts: %d\n", attempts);
printf("===== GAME OVER =====");
return 0;
}
    






