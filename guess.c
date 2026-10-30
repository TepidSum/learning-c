#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int guess;
    int attempts = 0;

    srand((unsigned int)time(NULL));
    int secret = rand() % 100 + 1;

    printf("I'm thinking of a number from 1 to 100.\n");

    do {
        printf("Enter your guess: ");

        if (scanf("%d", &guess) != 1) {
            printf("Invalid input.\n");
            return 1;
        }

        if (guess < 1 || guess > 100) {
            printf("Choose a number from 1 to 100.\n");
            continue;
        }

        attempts++;

        if (guess < secret) {
            printf("Too low!\n");
        } else if (guess > secret) {
            printf("Too high!\n");
        } else {
            printf("Correct! You got it in %d attempts.\n", attempts);
        }

    } while (guess != secret);

    return 0;
}