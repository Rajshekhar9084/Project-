#include <stdio.h>
#include <stdlib.h> // for rand() and srand()
#include <time.h>   // for time()

int main() {
    int random, guess;
    int no_of_guess = 0;

 
    srand(time(0));

    // Generate random number between 1 and 100
    random = (rand() % 100) + 1;

    printf("Welcome to the world of Guessing Numbers\n");

    do {
        printf("\nPlease enter your Guess between (1 to 100): ");
        scanf("%d", &guess);

        no_of_guess++;

        if (guess < random) {
            printf("Guess a larger number.\n");
        } 
        else if (guess > random) {
            printf("Guess a smaller number.\n");
        } 
        else {
            printf("Congratulations !!! You have successfully guessed the Number in attempts %d\n", no_of_guess);
        }

    } while (guess != random);

    printf("\nBye Bye, Thanks for Playing.");
    printf("\nDeveloped by: Rajshekhar\n");

    return 0;
}