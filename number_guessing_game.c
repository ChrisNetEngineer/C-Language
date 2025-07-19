#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    
    int secret_number = rand() % 10 +1;
    int guess;
    int attempts = 0;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I'm thinking of a number between 1 and 10.\n");

    do{
        printf("Enter your guess (1-10): ");
        scanf("%d", &guess);
        attempts++;

        if (guess < secret_number){
            printf("Too low! Try again.\n");
        } else if(guess > secret_number){
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts!\n", attempts);
        }

    } while (guess != secret_number);

    return 0;
}